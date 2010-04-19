#!/usr/bin/python

from PyQt4.QtCore import *
from PyQt4.QtSql import *
from blur.Stone import *
from blur.Classes import *
import blur
import sys, time
from math import ceil
from blur.defaultdict import DefaultDict
from exceptions import Exception
import traceback

if sys.argv.count('-daemonize'):
	from blur.daemonize import createDaemon
	createDaemon()

managerConfig = '/etc/manager.ini'
try:
	pos = sys.argv.index('-config')
	managerConfig = sys.argv[pos+1]
except: pass
dbConfig = '/etc/db.ini'
try:
	pos = sys.argv.index('-dbconfig')
	dbConfig = sys.argv[pos+1]
except: pass

app = QCoreApplication(sys.argv)

initConfig( managerConfig, "/var/log/ab/manager.log" )
# Read values from db.ini, but dont overwrite values from manager.ini
# This allows db.ini defaults to work even if manager.ini is non-existent
config().readFromFile( dbConfig, False )

initStone(sys.argv)

blur.RedirectOutputToLog()

# Load all the database tables
classes_loader()

VERBOSE_DEBUG = True

if VERBOSE_DEBUG:
	Database.current().setEchoMode( Database.EchoUpdate | Database.EchoDelete ) #| Database.EchoSelect )

# Connect to the database
Database.current().connection().reconnect()

# Automatically setup the AB_manager service record
# the hostservice record for our host, and enable it
# if no other hosts are enabled for this service
service = Service.ensureServiceExists('AB_manager')
hostService = service.byHost(Host.currentHost(),True)
hostService.enableUnique()

# Stores/Updates Config vars needed for manager
class ManagerConfig:
	def update(self):
		# Sort parameters
		self._SORT_METHOD = Config.getString( 'assburnerSortMethod', 'key_default' )
		try:
			JobAssign.SortMethod = getattr(JobAssign, str(self._SORT_METHOD))
			print ("Using %s job sort method" % self._SORT_METHOD)
		except:
			print "Config sort method %s not found, using key_default" % self._SORT_METHOD
			JobAssign.SortMethod = JobAssign.key_default

		self._PRIO_SORT_MUL = Config.getFloat( 'assburnerPrioSort', 100 )
		self._ERROR_SORT_MUL = Config.getFloat( 'assburnerErrorSort', 10 )
		self._SUB_TIME_SORT_MUL = Config.getFloat( 'assburnerSubmissionSort', 3 )
		self._HOSTS_SORT_MUL = Config.getFloat( 'assburnerHostsSort', 100 )

		# Mapserver weight parameters
		self._MAPS_WEIGHT_MUL = Config.getFloat( 'assburnerMapWeightMultiply', 1.0 )
		self._PC_WEIGHT_MUL = Config.getFloat( 'assburnerPointCacheWeightMultiply', 0.2 )
		self._XREF_WEIGHT_MUL = Config.getFloat( 'assburnerXrefWeightMultiply', 1.0 )
		self._WEIGHT_DIVIDER = Config.getFloat( 'assburnerWeightDivider', 1024 * 1024 * 50 )

		# Rate of assignment parameters
		self._ASSIGN_RATE = Config.getFloat( 'assburnerAssignRate', 15 )
		self._ASSIGN_PERIOD = Config.getFloat( 'assburnerAssignPeriod', 10 )

		self._HOST_ERROR_LIMIT = Config.getFloat( 'assburnerHostErrorLimit', 2 )

		# target is the number of seconds for an assignment to run based on a priority 10 job
		# default is the default number of seconds for a jobtask if there's no previous done tasks to get averagetasktime
		# so if targer is 600(10min) and a job is taking 30 seconds per task, it should get 20 tasks assigned
		# but it's scaled by the priority, so a priority 70 job will have higher packet sizes than a priority 1 job
		# idea is that more packets mean more time spent loading the files and resources, so is less efficient.
		# but for jobs that are high priority(low #), we sacrafice efficiency in order to get the job done quicker
		# it would be better to have some code in max to estimate the task time, or to remember from previous renders, but we've never gotten around to implementing that
		# It would also be nice to be able to estimate load time vs task time so we can actually calculate the efficiency
		self._AUTOPACKET_TARGET = Config.getFloat( 'assburnerAutoPacketTarget', 600 )
		self._AUTOPACKET_DEFAULT = Config.getFloat( 'assburnerAutoPacketDefault', 60 )

# Single Instance
config = ManagerConfig()

# Utility Functions
def numberListToString(number_list):
	return ','.join([str(i) for i in number_list])

def unique(alist):
	return [alist[i] for i in range(0,len(alist)) if alist.index(alist[i])==i]

# Python2.3 compat
if not hasattr(__builtins__,'sorted'):
	def sorted(alist):
		alist.sort()
		return alist

# Wraps a single job that needs tasks assigned
class JobAssign:
    def __init__( self, job ):
        self._hostOk = None
        self.ErroredHosts = None
        self.sortKey = None
        self.Job = job
        self.JobStatus = job.jobStatus()
        self.lastPriorityHostsOnJob = None
        self.tasksUnassigned = self.JobStatus.tasksUnassigned()
        self.servicesRequired = ServiceList()
        self.preassignedHosts = None
        self._mapServerWeight = None
        self.logString = ''

    def loadHosts( self ):
        if self._hostOk == None:
            self._hostOk = [s for s in str.split(str(self.Job.hostList()),',') if len(s)]

    def loadErroredHosts( self ):
        # Get list of errored hosts
        if self.ErroredHosts == None:
            self.ErroredHosts = {}
            q = Database.current().exec_("SELECT fkeyhost, sum(count) FROM JobError WHERE fkeyjob=%i AND cleared=false GROUP BY fkeyhost HAVING sum(count) > %i" % (self.Job.key(), config._HOST_ERROR_LIMIT))
            while q.next():
                self.ErroredHosts[q.value(0).toInt()[0]] = q.value(1).toInt()[0]

    def loadPreassignedHosts( self ):
        if self.preassignedHosts == None:
            self.preassignedHosts = Host.select("INNER JOIN JobTask ON fkeyhost=keyhost WHERE JobTask.status='new' AND JobTask.fkeyJob=?", [QVariant(self.Job.key())])

    # Return value of None means there is no white list, all non-blacklisted hosts that 
    # satisfy this jobs service list are valid.
    def hostWhiteList( self ):
        ret = HostList()
        if self.Job.packetType() == 'preassigned':
            self.loadPreassignedHosts()
            ret = self.preassignedHosts
        else:
            self.loadHosts()
            if len(self._hostOk)==0:
                return None
            for hostName in self._hostOk:
                ret.append( Host.recordByName( hostName ) )
        self.loadErroredHosts()
        for fkeyhost in self.ErroredHosts.keys():
            ret.remove( Host(fkeyhost) )
        return ret

    # Returns the list of hosts that cannot be assigned to this job
    # Currently this is only errored out hosts
    def hostBlackList( self ):
        ret = HostList()
        self.loadErroredHosts()
        for fkeyhost in self.ErroredHosts.keys():
            ret.append( Host(fkeyhost) )
        return ret

    def hostMemoryOk( self, hostStatus ):
        # We need an idea of how much memory we require, in kb
        if self.Job.minMemory() > 0:
            memoryRequired = self.Job.minMemory()
        else:
            memoryRequired = self.JobStatus.averageMemory()

        if memoryRequired == 0:
            if VERBOSE_DEBUG: Log( 'Job has unknown memory requirements, not assigning.' )
            return False

        if memoryRequired > (hostStatus.availableMemory() * 1024):
            if VERBOSE_DEBUG: Log( 'Not enough memory, %i required, %i available' % (memoryRequired, hostStatus.availableMemory() * 1024) )
            return False

        # memory is ok to assign
        return True

    def hostOk( self, hostStatus, snapshot ):
        host = hostStatus.host()

        if hostStatus.activeAssignmentCount() > 0:
            # Check exclusive bit
            if self.Job.exclusiveAssignment():
                if VERBOSE_DEBUG: Log( 'Cant assign exclusive job to a host that has an assignment' )
                return False

            if snapshot.hostHasExclusiveAssignment( host ):
                if VERBOSE_DEBUG: Log( 'Host already has exclusive assignment' )
                return False

        if not self.hostMemoryOk( hostStatus ):
            return False

        # Check for preassigned job list
        if self.Job.packetType() == 'preassigned':
            self.loadPreassignedHosts()
            if not host in self.preassignedHosts:
                return False

        # Check in host list
        self.loadHosts()
        if len(self._hostOk) > 0 and not host.name() in self._hostOk:
            #if VERBOSE_DEBUG: print "Skipping Host, Not In Host List: ", host.name()
            return False

        # Check for errored hosts
        self.loadErroredHosts()
        if host.key() in self.ErroredHosts:
            #if VERBOSE_DEBUG: print "Job %i errored out on host %s with %i errors." % (self.Job.key(),host.name(),self.ErroredHosts[host.key()])
            return False

        return True

    def priority( self ):
        if self.lastPriorityHostsOnJob != self.JobStatus.hostsOnJob():
            if self.Job.prioritizeOuterTasks() and not self.Job.outerTasksAssigned():
                self._priority = 1
            else:
                self._priority = \
                    self.Job.priority() 		* config._PRIO_SORT_MUL \
                    + self.JobStatus.errorCount() 	* config._ERROR_SORT_MUL \
                    + self.Job.submittedts().toTime_t()	* config._SUB_TIME_SORT_MUL \
                    + self.JobStatus.hostsOnJob()	* config._HOSTS_SORT_MUL
            self.lastPriorityHostsOnJob = self.JobStatus.hostsOnJob()
        return self._priority

    def __cmp__( self, other ):
        if id(self) == id(other): 			return 0
        if self.Job.user() == other.Job.user():
            if self.Job.priority() == other.Job.priority():
                diff = self.Job.personalPriority() - other.Job.personalPriority()
                if diff > 0: return 1
                elif diff < 0: return -1
        if JobAssign.SortMethod(self) > JobAssign.SortMethod(other):	return 1
        return -1

    def key_default( self ):
        sortKey = self.priority()
        #if VERBOSE_DEBUG: print 'job %s has key %s' % (self.Job.name(), sortKey)
        return sortKey

    def key_even_by_priority( self ):
        hasHost = 0
        if self.JobStatus.hostsOnJob() > 0: hasHost = 1
        sortKey = '%01d-%03d-%04d-%04d-%10d' % (hasHost,self.Job.priority(), self.JobStatus.hostsOnJob(), self.JobStatus.errorCount(), self.Job.submittedts().toTime_t())
        if VERBOSE_DEBUG: print 'job %s has sortKey %s' % (self.Job.name(), sortKey)
        return sortKey

    def mapServerWeight( self ):
        if self._mapServerWeight == None:
            ret = 0
            if not self.Job.stats().isEmpty():
                stats = str.split( str(self.Job.stats()), ';' )
                for s in stats:
                    pieces = str.split(s,"=")
                    if len(pieces) == 2:
                        (key,val) = pieces
                        val = float(val) * 1024 * 1024
                        if key == 'totalMapSize':
                            ret += val * config._MAPS_WEIGHT_MUL
                        elif key == 'totalXrefSize':
                            ret += val * config._XREF_WEIGHT_MUL
                        elif key == 'totalPointCacheSize':
                            ret += val * config._PC_WEIGHT_MUL
            ret = ret / config._WEIGHT_DIVIDER
            if ret <= 0:
                ret = max(1,min(config._ASSIGN_RATE / 2.0,self.JobStatus.tasksAverageTime() / 120.0) )
                #if VERBOSE_DEBUG: print "Job %s has weight(calculated from average task time, no stats available): %g" % (self.Job.name(), ret)
            ret = min( 20, ret )
            self._mapServerWeight = ret
        return self._mapServerWeight

    def calculateAutoPacketSize( self, totalHosts, totalTasks ):
        return self.calculateAutoPacketSizeByAvgTime( totalHosts, totalTasks )

    def calculateAutoPacketSizeByAvgTime( self, totalHosts, totalTasks ):
        tasksByHost = ceil( totalTasks / totalHosts )
        maxSize = 50
        # Target packet time duration, smaller time for higher(lower #) priority jobs
        target = config._AUTOPACKET_TARGET * max(self.Job.priority(),3) / 10
        idealSize = ceil(target / self.calculateAverageTaskTime())
        packetSize = min( idealSize, tasksByHost )
        return max(packetSize,1)

    def calculateAverageTaskTime( self ):
        if self.JobStatus.tasksAverageTime() > 0 and self.JobStatus.tasksDone() > 0:
            return self.JobStatus.tasksAverageTime()
        return config._AUTOPACKET_DEFAULT

    def calculateNeededHosts( self ):
        self.loadHosts()
        packetSize = self.Job.packetSize()
        if packetSize < 1:
            packetSize = self.calculateAutoPacketSize( 1, self.tasksUnassigned )
        maxHosts = int( self.tasksUnassigned / float(packetSize) + 0.9 )
        # Can't assign more hosts than what in our host list
        if self._hostOk:
            maxHosts = min( len(self._hostOk) - self.JobStatus.hostsOnJob(), maxHosts )
        return maxHosts

    def retrieveRandomTasks(self, limit):
        self.logString += 'Random [limit=%i] ' % limit
        return JobTask.select("fkeyjob=%i AND status='new' ORDER BY random() ASC LIMIT %i" % (self.Job.key(),limit))

    def retrieveSequentialTasks(self, limit):
        self.logString += 'Sequential [limit=%i] ' % limit
        return JobTask.select("fkeyjob=%i AND status='new' ORDER BY jobtask ASC LIMIT %i" % (self.Job.key(),limit))

    def retrieveContinuousTasks(self, limit):
        self.logString += 'Continuous [limit=%i] ' % limit
        return JobTask.select("keyjobtask IN (SELECT * FROM get_continuous_tasks(%i,%i))" % (self.Job.key(),limit))

    def retrievePreassignedTasks(self, hostStatus):
        self.logString += 'Preassigned '
        return JobTask.select("fkeyjob=%i AND fkeyhost=%i AND status='new'" % (self.Job.key(),hostStatus.getValue("fkeyhost").toInt()[0]))

    def retrieveOuterTasks(self,limit=None):
        q = Database.current().exec_('SELECT min(jobtask), max(jobtask), avg(jobtask) FROM jobtask WHERE fkeyjob=%i' % (self.Job.key()))
        if not q.next(): return
        tasks = [ q.value(0).toInt()[0], q.value(1).toInt()[0] ]
        midGuess = q.value(2).toDouble()[0]

        # Get the closest numbered task
        q = Database.current().exec_('SELECT jobtask, abs(%g-jobtask) as distance from jobtask where fkeyjob=%i order by distance asc limit 1' % (midGuess,self.Job.key()) )
        if q.next():
            tasks.append( q.value(0).toInt()[0] )

        # Make Unique
        tasks = unique(tasks)
        self.logString += ('Outer Tasks [%s] ' % str(tasks))
        if limit is None or limit < 1:
            limit = 3
        return JobTask.select( "jobtask IN (%s) AND fkeyjob=%i AND status='new' LIMIT %i" % ( numberListToString(tasks), self.Job.key(), limit ) )

    def assignHost( self, hostStatus, totalHosts, totalTasks ):
        packetSize = self.Job.packetSize()

        self.logString = ' PT: '
        if packetSize < 1:
            packetSize = self.calculateAutoPacketSize( totalHosts, totalTasks )
        packetType = self.Job.packetType()
        if VERBOSE_DEBUG: print "Assigning Tasks For PacketType:", packetType, " packetSize: ", packetSize

        taskCount = 0
        q = Database.current().exec_( "SELECT * FROM assign_single_host(%s, %s, %s)" % (self.Job.key(), hostStatus.host().key(), packetSize ) )
        if q.next():
            taskCount = q.value(0).toInt()

        # Increment hosts on job count,  this is taken care of by a trigger at the database level
        # but we increment here to get more accurate calculated priority until the next refresh of
        # the job list
        self.JobStatus.setHostsOnJob( self.JobStatus.hostsOnJob() + 1 )

        Log( "Assigned tasks " + numberListToString(taskCount) + " from job " + str(self.Job.key()) + " to host " + hostStatus.host().name() + self.logString )
        return tasks.size()

def updateProjectTempo():
	Database.current().exec_( "SELECT * from update_project_tempo()" )

# Returns [hostsTotal int, hostsActive int, hostsReady int, jobsTotal int, jobsActive int, jobsDone int]
def getCounter():
	q = Database.current().exec_( "SELECT * FROM getcounterstate()" )
	if not q.next(): return map(lambda x:0,range(0,5))
	return map(lambda x: q.value(x).toInt()[0], range(0,5))

class AssignRateThrottler(object):
	def __init__(self):
		self.assignLeft = 1
		self.lastAssignTime = QDateTime.currentDateTime()
	
	def update(self):
		# Number of hosts to assign per period(seconds) * weight of job assigned
		self.assignRate = config._ASSIGN_RATE
		self.assignPeriod = config._ASSIGN_PERIOD
		now = QDateTime.currentDateTime()
		self.assignLeft = self.assignLeft + self.assignRate * (self.lastAssignTime.secsTo(now)) / self.assignPeriod
		if self.assignLeft > self.assignRate:
			self.assignLeft = self.assignRate
		self.lastAssignTime = now

throttler = AssignRateThrottler()
timer = QTime()

class FreeHost(object):
	def __init__(self,hostStatus):
		self.hostStatus = hostStatus
		self.host = hostStatus.host()
		self.hostServices = HostServiceList()
		self.services = ServiceList()

	def addService(self,hostService):
		self.hostServices.append(hostService)
		self.services.append(hostService.service())

	def handlesServiceList(self,serviceList):
		for service in serviceList:
			if service not in self.services:
				return False
		return True

	def handlesJob(self,jobAssign):
		return handlesServiceList(jobAssign.servicesRequired)

# This stores information about a host that all assigned tasks have
# been cleared and should become 'ready' soon, just has to finish
# it's current task
class NearlyFreeHost:
	def __init__(self,host,assignment):
		self.host = host
		self.serviceList = host.hostServices().services()
		self.assignment = assignment
		# Used to know if a license is going to be freed up when this host becomes available
		self.activeServices = self.assignment.job().jobServices().services()
		# If this job hasn't rendered any frames, estimate a 2 minutes task time
		self.tasktime = activeJob.jobStatus().tasksAverageTime()
		if self.tasktime == 0:
			self.tasktime = 120

def unassign_host_busy(fkeyhost,fkeyjob,job_reason):
	Database.current().exec_( "INSERT INTO PreemptionWaste (fkeyuser, fkeyjob, fkeyjobreason, timewasted, created) SELECT ?, ?, ?, SUM(NOW()-startedts), now() FROM JobTask WHERE fkeyjob=? AND fkeyhost=? AND startedts IS NOT NULL AND status='busy'", [QVariant(job_reason.user().key()),QVariant(fkeyjob),QVariant(job_reason.key()),QVariant(fkeyjob), QVariant(fkeyhost)] )
	assignments = JobAssignment.select( "fkeyhost=? AND fkeyjob=?", VarList() << fkeyhost << fkeyjob )
	
	# Cancel the assignments
	cancelledStatus = JobAssignmentStatus.recordByName( 'cancelled' )
	assignments.setStatuses( cancelledStatus )
	assignments.commit()
	
	# Cancel the tasks
	Database.current().exec_( "UPDATE jobtaskassignment SET fkeyjobassignmentstatus=? WHERE fkeyjobassignmentstatus IN (SELECT jobassignmentstatus from jobassignmentstatus WHERE status IN ('assigned','busy') AND fkeyjobassignment IN (?)", [QVariant(cancelledStatus), QVariant(assignments.keyString())] )
	q = Database.current().exec_( "UPDATE JobTask SET status='new' WHERE status IN ('assigned','busy') AND fkeyjob=? AND fkeyhost=?", [QVariant(fkeyjob),QVariant(fkeyhost)] )
	
	return q.numRowsAffected()

def unassign_host(fkeyhost,fkeyjob):
	cancelledStatus = JobAssignmentStatus.recordByName( 'cancelled' )
	Database.current().exec_( "UPDATE jobtaskassignment SET fkeyjobassignmentstatus=? WHERE fkeyjobassignment IN (SELECT keyjobassignment FROM jobassignment WHERE fkyjob=? AND fkeyhost=? AND fkeyjobassignmentstatus=?", [QVariant(JobAssignmentStatus.recordByName( 'cancelled' )),QVariant(fkeyjob),QVariant(fkeyhost),QVariant(JobAssignmentStatus.recordByName( 'assigned' ))] )
	sql = "UPDATE JobTask SET status='new'"
	if Job(fkeyjob).packetType() != 'preassigned':
		sql += ", fkeyhost=NULL"
	sql += " WHERE status='assigned' AND fkeyhost=%i AND fkeyjob=%i"
	q = Database.current().exec_( sql % (fkeyhost,fkeyjob) )
	return q.numRowsAffected()

class ThrottleLimitException(Exception): pass
class AllHostsAssignedException(Exception): pass
class AllJobsAssignedException(Exception): pass
class NonCriticalAssignmentError(Exception): pass

class FarmResourceSnapshot(object):
	def __init__(self):
		self.reset()
		self.nearlyFreeHosts = []
		self.licCountByService = {}
	
	def reset(self):
		# Project Weighted Assigning
		self.projectWeights = {}
		self.projectWeightTotal = 0
		self.projectsWithJobs = {}
		self.jobsWithWeight = JobList()
		
		# Regular Job/Task Info
		self.jobList = JobList()
		self.jobAssignByJob = {}
		
		# Service info
		self.servicesNeeded = ServiceList()
		self.jobsByService = DefaultDict(JobList)
		
		# Host Info
		self.freeHosts = {}
		self.hostStatuses = HostStatusList()
		self.hostStatusesByService = DefaultDict(HostStatusList)
		self.hostsUnused = {}
		self.nearlyFreeAvailableHosts = {}
		self.nearlyFreeReservedHosts = {}
		self.hostHasExclusiveAssignmentCache = {}
		
		# Used to keep track of whether or not assignments have been
		# completed or were halted for some reason(throttling).
		# If we have throttled assignments, then we wont do unassignments
		# in order to free up tasks for idle hosts
		self.currentAssignmentsCompleted = False
	
	def hostIsFree(self,host):
		for nfh in self.nearlyFreeHosts[:]:
			if nfh.host == host:
				self.nearlyFreeHosts.remove(nfh)

	def hostHasExclusiveAssignment(self,host):
		return host.key() in self.hostHasExclusiveAssignmentCache
	
	def refresh(self):
		self.reset()
		self.refreshProjectWeights()
		self.refreshJobList()
		if self.jobList.isEmpty():
			return
		self.refreshServiceData()
		self.refreshHostData()
		
	def refreshProjectWeights(self):
		# Gather current project tempo(percentage of queue the project has)
		q = Database.current().exec_( "SELECT project.keyelement as fkeyproject, assburnerweight-coalesce(tempo,0) as weight FROM projecttempo RIGHT JOIN project ON keyelement=projecttempo.fkeyproject WHERE project.assburnerweight > 0" )
		while q.next():
			fkeyproject = q.value(0).toInt()[0]
			weight = q.value(1).toDouble()[0]
			self.projectWeights[fkeyproject] = weight
			self.projectWeightTotal += weight

	def scaleProjectWeights(self, hostsActive):
		# If there is more than 1.0(100%) projectweight, than
		# we will scale down the project weights so that they
		# add up to 1.0
		# Multiply by available hosts
		if self.projectWeightTotal > 1.0:
			self.projectWeightTotal = hostsActive / self.projectWeightTotal
		else:
			self.projectWeightTotal = hostsActive
		
		# Here is where the weights go from a percentage to a host count
		for fkeyproject in self.projectWeights:
			self.projectWeights[fkeyproject] *= self.projectWeightTotal

	def refreshJobList(self):
		# Gather the jobs
		self.jobList = Job.select( """JOIN jobstatus ON (keyjob=fkeyjob) 
                                      WHERE status IN ('ready','started') 
                                        AND (jobstatus.tasksUnassigned + jobstatus.tasksassigned) > 0 
                                        AND (coalesce(job.maxhosts,0) <= 0 OR jobstatus.hostsOnJob < job.maxHosts)""" )
		statuses = JobStatusList()
		if self.jobList.size() > 0:
			statuses = JobStatus.select("fkeyjob IN("+self.jobList.keyString()+")")
		for job in self.jobList:
			# Create Job Assign class
			jobAssign = JobAssign(job)
			self.jobAssignByJob[job] = jobAssign

			# Update project weights
			fkeyproject = job.getValue("fkeyproject").toInt()[0]
			if fkeyproject in self.projectWeights and self.projectWeights[fkeyproject] > 0:
				print "Job %s has available project weight" % job.name()
				self.jobsWithWeight += job
			self.projectsWithJobs[fkeyproject] = 1

		# Delete projects with weight but no jobs, sum the total competing weight
		for k in self.projectWeights.keys():
			if not k in self.projectsWithJobs:
				del self.projectWeights[k]
				continue
			self.projectWeightTotal += self.projectWeights[k]

		if VERBOSE_DEBUG: Log( "Found %i jobs to assign" % len(self.jobList) )
		
	def addJobService(self,job,service):
		jobAssign = self.jobAssignByJob[job]
		jobAssign.servicesRequired.append(service)
		self.jobsByService[service] += job
		if not service in self.servicesNeeded:
			self.servicesNeeded += service
		
	def refreshServiceData(self):
		# Gather required services
		for jobService in JobService.select( "JobService.fkeyJob IN (" + self.jobList.keyString() + ")" ):
			self.addJobService(jobService.job(), jobService.service())
		
		# Filter out services that have no available licenses
		self.licCountByService = {}
		
		for service in self.servicesNeeded:
			lic = service.license().reload()
			if lic.isRecord():
				self.licCountByService[service] = lic.total() - lic.inUse() - lic.reserved()

	def refreshHostData(self):
		hostServices = HostServiceList()
		if VERBOSE_DEBUG: Log( "Fetching Hosts for required services, %s" % self.servicesNeeded.services().join(',') )
		if not self.servicesNeeded.isEmpty():
			hostServices = HostService.select( """INNER JOIN HostStatus ON HostStatus.fkeyHost=HostService.fkeyHost 
                                                  INNER JOIN Host ON HostStatus.fkeyhost=Host.keyhost 
				                                  WHERE HostStatus.slaveStatus='ready' 
                                                    AND HostStatus.activeAssignmentCount < coalesce(Host.maxAssignments,8)
                                                    AND HostService.enabled=true AND HostService.fkeyService IN (%s)""" % self.servicesNeeded.keyString()  )
		hosts = hostServices.hosts().unique()

		# Mark which hosts already have an exclusive assignment
		q = Database.current().exec_( """SELECT ja.fkeyhost 
                                         FROM JobAssignment ja
                                         INNER JOIN Job ON ja.fkeyjob=keyjob 
                                         WHERE job.exclusiveAssignment=true
                                           AND ja.fkeyjobassignmentstatus IN (SELECT keyjobassignmentstatus 
                                                                                         FROM jobassignmentstatus 
                                                                                         WHERE status IN ('ready','copy','busy')
                                                                                        ) 
                                           GROUP BY ja.fkeyhost""" )
		while q.next():
			self.hostHasExclusiveAssignmentCache[q.value(0).toInt()[0]] = True

		if len(hosts):
			self.hostStatuses = HostStatus.select("fkeyhost IN (" + hosts.keyString() + ")")
		else:
			self.hostStatuses = HostStatusList()
		for hostService in hostServices:
			host = hostService.host()
			service = hostService.service()
			hostStatus = host.hostStatus()
			if not hostStatus in self.freeHosts:
				self.freeHosts[hostStatus] = FreeHost(hostStatus)
			self.freeHosts[hostStatus].addService(hostService)
			self.hostStatusesByService[service] += hostStatus
			self.hostsUnused[hostStatus] = True
			self.hostIsFree(host)

		# Refresh nearly free hosts to see if they are still assigned the same job
		if self.nearlyFreeHosts:
			nearlyFreeHosts = HostList()
			for nfh in self.nearlyFreeHosts:
				nearlyFreeHosts += nfh.host
			Host.select( 'keyhost in (%s)' % nearlyFreeHosts.keyString() )
			for nfh in self.nearlyFreeHosts:
				if nfh.assignment.jobAssignmentStatus().status() != 'assigned':
					self.hostIsFree( nfh.host )
		self.availableNearlyFreeHosts = self.nearlyFreeHosts
		self.reservedNearlyFreeHosts = []

		if VERBOSE_DEBUG:
			for service in self.servicesNeeded:
				print "%i hosts available for service %s" % (len(self.hostStatusesByService[service]),service.service())
		#	for hs in self.hostsUnused:
		#		Log( "Host is Ready %s" % (hs.host().name()) )

	def availableHostsByService(self,service):
		if service in self.hostStatusesByService:
			ret = HostStatusList(self.hostStatusesByService[service])
			#if len(ret) == 0:
			#	if VERBOSE_DEBUG: print ("No Hosts Left for Service %s, Removing" % service.service())
			#	self.removeService(service)
			return ret
		if VERBOSE_DEBUG: print "Service Not available", service.service()
		return HostStatusList()

	# Get a list of host statuses that have all services required
	def availableHosts( self, jobAssign ):
		requiredServices = jobAssign.servicesRequired
		hostStatuses = HostStatusList()

		# Services are always required
		if requiredServices.isEmpty():
			if VERBOSE_DEBUG: print "Job has no service requirements, skipping"
			return hostStatuses

		# Start the list off with the first service
		# Only return hosts that provide ALL required services
		# Make sure to take a copy so we don't modify the original
		hostStatuses += self.hostStatusesByService[requiredServices[0]]
		for service in requiredServices:
			# Check if there are licenses available for the service
			if service in self.licCountByService:
				print ("%i licenses available for service %s" % (self.licCountByService[service], service.service()))
				if self.licCountByService[service] <= 0:
					return HostStatusList()
			hostStatuses &= self.availableHostsByService(service)
			if hostStatuses.isEmpty():
				if VERBOSE_DEBUG: print "No hosts available with required services"
				break

		# We have the hosts that match the service requirements, now
		# we can check against the job's white/black list of hosts
		ret = HostStatusList()
		for hostStatus in hostStatuses:
			if jobAssign.hostOk(hostStatus,self):
				ret += hostStatus

		# Assign hosts with 0 jobs first
		ret = ret.sorted( "activeassignmentcount" )

		return ret

	# Always call canReserveLicenses first
	def reserveLicenses(self,services):
		for service in services:
			if self.licCountByService.has_key(service) and self.licCountByService[service] > 0:
				self.licCountByService[service] -= 1

	def canReserveLicenses(self,services):
		for service in services:
			if self.licCountByService.has_key(service) and self.licCountByService[service] <= 0:
				return False
		return True

	def reserveNearlyFreeHosts(self,jobAssign,needed):
		services = jobAssign.servicesRequired
		activeServices = ServiceList()
		for service in services:
			if service.license().isRecord():
				activeServices += service
		reserved = 0
		for nfh in self.availableNearlyFreeHosts:
			if ((nfh.services & services) == services):
				if not (activeServices.isEmpty() or (nfh.activeServices & activeServices) == activeServices):
					if not self.canReserveLicenses(activeServices):
						continue
					self.reserveLicenses(activeServices)
				self.reservedNearlyFreeHosts.append( nfh )
				self.availableNearyFreeHosts.remove( nfh )
				reserved += 1
				if reserved >= needed:
					break
		return reserved
	
	def addNearlyFreeHost(self,host,activeJob=None):
		self.nearlyFreeHosts.append( NearlyFreeHost(host,activeJob) )

	def isHostNearlyFree(self,fkeyhost):
		for nfh in self.nearlyFreeHosts:
			if nfh.host.key()==fkeyhost:
				return True
		return False
	
	def jobListByServiceList( self, serviceList ):
		jobs = JobList()
		for service in serviceList:
			for job in self.jobsByService[service]:
				jobs += job
		return jobs.unique()
	
	def taskCountByServices( self, serviceList ):
		taskCount = 0
		for job in self.jobListByServiceList(serviceList):
			if job in self.jobAssignByJob:
				taskCount += self.jobAssignByJob[job].tasksUnassigned
		return taskCount
	
	# Remove the job as a job that needs more hosts assigned
	def removeJob( self, job ):
		self.jobsWithWeight.remove( job )
		self.jobList.remove( job )
		if job in self.jobAssignByJob:
			del self.jobAssignByJob[job]
	
	# Removes the host from available hosts to assign to
	# Removes all services that have no remaining hosts
	def removeHostStatus( self, hostStatus ):
		if hostStatus in self.freeHosts:
			for service in self.freeHosts[hostStatus].services:
				self.hostStatusesByService[service].remove(HostStatus(hostStatus.key()))
				if len(self.hostStatusesByService[service]) == 0:
					self.removeService(service)
			del self.freeHosts[hostStatus]
		if hostStatus in self.hostsUnused:
			del self.hostsUnused[hostStatus]
	
	# Called to remove the service and all jobs that require it
	def removeService( self, service ):
		if service in self.hostStatusesByService:
			del self.hostStatusesByService[service]
		if service in self.jobsByService:
			for job in self.jobsByService[service]:
				self.removeJob( job )
			del self.jobsByService[service]
		self.servicesNeeded.remove( service )

	# Returns (assignedCount, tasksUnassigned)
	def assignSingleHost(self, jobAssign, hostStatus, weight):
		job = jobAssign.Job

		# Make sure this host hasn't been used yet
		# This should not be triggered
		if not hostStatus in self.hostsUnused:
			raise NonCriticalAssignmentError("Host %s missing from self.hostsUnused" % hostStatus.host().name())
		
		# This should already be checked, but should be free from selects, so do it again here
		if not jobAssign.hostOk( hostStatus, self ):
			raise NonCriticalAssignmentError("Host %s failed redundant jobAssign.hostOk check" % hostStatus.host().name())
		
		# Account for licenses used by each service
		# This is just a temporary local count to avoid checking the
		# database every assignment.

		if not self.canReserveLicenses(jobAssign.servicesRequired):
			raise NonCriticalAssignmentError("Service %s out of licenses" % serviceName)
		self.reserveLicenses(jobAssign.servicesRequired)

		# If the host_assign fails, then skip this job
		# There are valid reasons for this to fail, such as the host going offline
		tasksAssigned = jobAssign.assignHost(hostStatus, len(self.hostsUnused), self.taskCountByServices(jobAssign.servicesRequired))
		if tasksAssigned < 1:
			if VERBOSE_DEBUG: print "JobAssign.assignHost failed"
			return (0,jobAssign.tasksUnassigned)

		jobAssign.tasksUnassigned -= tasksAssigned
		throttler.assignLeft -= weight

		# Remove the job from the list if there are no tasks left to assign
		#if jobAssign.tasksUnassigned <= 0:
		#	if VERBOSE_DEBUG: print "Removing job from list, all tasks are assigned"
		#	self.removeJob( job )

		# Host no longer ready
		self.removeHostStatus(hostStatus)

		return (tasksAssigned,jobAssign.tasksUnassigned)

	def assignSingleJob(self,jobAssign):
		#if VERBOSE_DEBUG: print 'job %s has sortKey %s' % (jobAssign.Job.name(), jobAssign.key_even_by_priority())
		
		# Check maxhosts
		if jobAssign.Job.maxHosts() > 0 and jobAssign.JobStatus.hostsOnJob() >= jobAssign.Job.maxHosts():
			self.removeJob(jobAssign.Job)
			return False
		
		# Check assignment throttling
		weight = jobAssign.mapServerWeight()
		if weight > throttler.assignLeft:
			raise ThrottleLimitException()

		# Gather available hosts for this job
		if VERBOSE_DEBUG: print "Finding Hosts to Assign to %i tasks to Job %s with weight: %g" % (jobAssign.JobStatus.tasksUnassigned(), jobAssign.Job.name(),weight)
		
		hostStatuses = self.availableHosts( jobAssign )
		if hostStatuses.isEmpty():
			return False

		assignSuccess = False
		for hostStatus in hostStatuses:
			tasksAssigned, tasksLeft = self.assignSingleHost( jobAssign, hostStatus, weight )
			
			# Return so that we can recalculate assignment priorities
			if tasksAssigned > 0:
				assignSuccess = True
				break
			
			# This shouldn't get hit, because there should be tasks available if we
			# Are assigning, and we should already break above if they get assigned
			if tasksLeft <= 0:
				raise NonCriticalAssignmentError("Job %s has tasksLeft <= 0 before any assignments made" % jobAssign.Job.name())
		
		if not assignSuccess:
			# If we get to here there's no hosts to assign to this job, so ignore it
			self.removeJob( jobAssign.Job )
		return assignSuccess

	def performHighPriorityAssignments(self):
		# We loop while there are hosts, and we are assigning hosts
		# Its possible to have free hosts that can't provide a service
		# for our current jobs
		while True:
			assignCount = 0
			if len(self.hostsUnused) < 1:
				raise AllHostsAssignedException()
			
			jobAssignList = []
			# Assign from all ready jobs
			for jobAssign in self.jobAssignByJob.values():
				if jobAssign.Job.priority() <= 20 and jobAssign.tasksUnassigned > 0:
					jobAssignList.append( jobAssign )
			
			if len(jobAssignList) == 0:
				break
			
			jobAssignList.sort()
			for jobAssign in jobAssignList:
				try:
					# Recalc priority and resort job list after every assignment
					if self.assignSingleJob(jobAssign):
						assignCount += 1
						break
				except NonCriticalAssignmentError:
					if VERBOSE_DEBUG: traceback.print_exc()
			if assignCount == 0:
				break
		
	def performProjectWeightedAssignments(self):
		while True:
			if len(self.hostsUnused) <= 0:
				raise AllHostsAssignedException()

			# Gather and sort the jobs that have project weighting
			jobAssignList = []
			for job in self.jobsWithWeight:
				ja = self.jobAssignByJob[job]
				if ja.tasksUnassigned > 0:
					jobAssignList.append(ja)
			jobAssignList.sort()
			
			assignCount = 0
			for jobAssign in jobAssignList:
				try:
					# Make sure that this project deserves more hosts
					fkeyproject = jobAssign.Job.getValue("fkeyproject").toInt()[0]
					if self.projectWeights[fkeyproject] <= 0:
						continue
					
					# Resort list after each successful assignment
					if self.assignSingleJob( jobAssign ):
						assignCount += 1
						self.projectWeights[fkeyproject] -= 1
						break
				except NonCriticalAssignmentError:
					if VERBOSE_DEBUG: traceback.print_exc()
			if assignCount == 0:
				break
		
	def performNormalAssignments(self):
		# We loop while there are hosts, and we are assigning hosts
		# Its possible to have free hosts that can't provide a service
		# for our current jobs
		while True:
			assignCount = 0
			if len(self.hostsUnused) < 1:
				raise AllHostsAssignedException()
			
			# Assign from all ready jobs
			jobAssignList = []
			for ja in self.jobAssignByJob.values():
				if ja.tasksUnassigned > 0:
					jobAssignList.append(ja)
			
			if len(jobAssignList) == 0:
				raise AllJobsAssignedException()
			
			jobAssignList.sort()
			for jobAssign in jobAssignList:
				try:
					# Recalc priority and resort job list after every assignment
					if self.assignSingleJob(jobAssign):
						assignCount += 1
						break
				except NonCriticalAssignmentError:
					if VERBOSE_DEBUG: traceback.print_exc()
			if assignCount == 0:
				break
	
	def performAssignments(self):
		
		assignMethods = {
			self.performHighPriorityAssignments : "high priority",
			self.performProjectWeightedAssignments : "project weighted",
			self.performNormalAssignments : "normal priority" }
		
		try:
			for assignMethod, methodName in assignMethods.iteritems():
				try:
					timer.start()
					assignMethod()
				finally:
					print "Finished assigning %s jobs, took %i" % (methodName, timer.elapsed())
			self.currentAssignmentsCompleted = True
			
		except ThrottleLimitException, e:
			print "Assignment has been throttled."
		except AllHostsAssignedException:
			if VERBOSE_DEBUG: print "All relevant 'ready' hosts have been assigned"
			self.currentAssignmentsCompleted = True
		except AllJobsAssignedException:
			# Catch this exception, no need to print the time if this is the case
			if VERBOSE_DEBUG: print "All jobs have been assigned"
			self.currentAssignmentsCompleted = True
		except Exception, e:
			# Print the time but let the exception pass through
			if VERBOSE_DEBUG: print "Unknown error while assigning"
			traceback.print_exc()
			raise e
		
	# Clears assigned tasks from existing jobs that have a lower priority(higher number) than priority,
	# and are currently assigned to hosts that can handle jobType
	def unassign_hosts_by_services(self,jobAssign,ignoreProjectWeighting):
		job = jobAssign.Job
		priority = job.priority()
		unassignBusy = (priority < 5)
		hostWhiteList = jobAssign.hostWhiteList()
		hostBlackList = jobAssign.hostBlackList()
		hostsNeeded = jobAssign.calculateNeededHosts()
		serviceList = jobAssign.servicesRequired
		activeServices = ServiceList()
		for service in serviceList:
			if service.license().isRecord():
				activeServices += service
		if not len(serviceList):
			return 0
		hostsNeeded -= self.reserveNearlyFreeHosts(jobAssign,hostsNeeded)
		if hostsNeeded == 0:
			return 0
		job_fkeyproject = jobAssign.Job.getValue("fkeyproject").toInt()[0]
		hostsUnassigned = 0
		hostKeyListClauses=[]
		if hostWhiteList is not None and len(hostWhiteList):
			hostKeyListClauses.append( 'fkeyhost IN (%s)' % hostWhiteList.keyString() )
		if hostBlackList is not None and len(hostBlackList):
			hostKeyListClauses.append( ' fkeyhost NOT IN (%s)' % hostBlackList.keyString() )
		hostKeyListClause = ''
		if len(hostKeyListClauses):
			hostKeyListClause = ' AND ' + ' AND '.join(hostKeyListClauses)
		tasksClause = '(jobstatus.tasksAssigned'
		if unassignBusy:
			tasksClause += ' + jobstatus.tasksBusy'
		tasksClause += ') > 0'
		query = ("SELECT hoststatus.fkeyhost, hoststatus.fkeyjob, job.priority, job.fkeyproject, jobstatus.tasksaveragetime FROM job INNER JOIN jobstatus ON keyjob=jobstatus.fkeyjob "
			+ "INNER JOIN hoststatus ON hoststatus.fkeyjob=job.keyjob "
			+ "WHERE job.priority > %i AND %s AND hoststatus.slavestatus IN ('assigned','copy','busy') "
			+ "AND hoststatus.fkeyhost in (SELECT fkeyhost FROM "
			+ "(SELECT COUNT(*) AS service_count, fkeyhost FROM HostService WHERE enabled=true AND fkeyService IN (%s) %s GROUP BY fkeyhost) AS iq "
			+ "WHERE iq.service_count=%i) ORDER BY priority DESC, tasksaveragetime ASC;") % (priority, tasksClause, serviceList.keyString(), hostKeyListClause, serviceList.size())
			
		hosts_to_unassign = Database.current().exec_(query)
		
		while hosts_to_unassign.next() and hostsUnassigned < hostsNeeded:
			# We dont really need fkeyjob to do this, but we'll use it anyway just in case the host has
			# already been reassigned to a different job, to prevent changing it then.
			fkeyhost = hosts_to_unassign.value(0).toInt()[0]
			if not self.isHostNearlyFree(fkeyhost):
				fkeyjob = hosts_to_unassign.value(1).toInt()[0]
				priority = hosts_to_unassign.value(2).toInt()[0]
				fkeyproject = hosts_to_unassign.value(3).toInt()[0]
				averageTaskTime = hosts_to_unassign.value(4).toInt()[0]
				# Check project weighting
				if not ignoreProjectWeighting and fkeyproject != job_fkeyproject and fkeyproject in self.projectWeights and self.projectWeights[fkeyproject] > -1:
					continue;
				# We need licenses, so check to see if the job is using the license we need
				if activeServices:
					un_job = Job(fkeyjob)
					if not ((un_job.jobServices().services() & activeServices) == activeServices):
						if not self.canReserveLicenses(activeServices):
							continue
						self.reserveLicenses(activeServices)
				if unassignBusy:
					unassignedCount = unassign_host_busy(fkeyhost,fkeyjob,job)
				else:
					unassignedCount = unassign_host(fkeyhost,fkeyjob)
				if unassignedCount >= 1:
					print "Unassigned %i assigned tasks from host %i job %i, priority %i average task time %i seconds" % (unassignedCount, fkeyhost, fkeyjob, priority, averageTaskTime)
					self.addNearlyFreeHost( Host(fkeyhost), Job(fkeyjob) )
					if fkeyproject in self.projectWeights:
						self.projectWeights[fkeyproject] += 1
					hostsUnassigned += 1
		if hostsUnassigned > 0:
			print "Free'd up %i hosts for service list %s for job %s" % (hostsUnassigned, serviceList.services().join(','), job.name())
		return hostsUnassigned

	
	def unassign_tasks_from_job(self,job,surplusHosts):
		# Used to store how many assigned tasks each host has for this job
		class HostInfo(object):
			def __init__(self,host,hostStatus,assigned):
				self.host = host
				self.hostStatus = hostStatus
				self.assignedFrames = assigned
				
		# Get the hosts, and the number of still assigned frames
		q_hosts = Database.current().exec_("SELECT fkeyhost, count(*) as asscnt FROM JobTask WHERE status='assigned' AND fkeyjob=" + QString.number(job.key()) + " group by fkeyhost")
		
		# Put the assigned count into the host record, and get the total
		# assigned count, and also the maximum assigned per single host
		hostInfoList = []
		total_ass = 0
		max_frames = 0
		while q_hosts.next():
			h = Host(q_hosts.value(0).toInt()[0])
			hs = h.hostStatus()
			hs.reload()
			cnt = q_hosts.value(1).toInt()[0]
			if h.isRecord():
				print "Host %s has %i assigned frames" % (h.name(),cnt)
				total_ass += cnt
				if cnt > max_frames:
					max_frames = cnt
				hostInfoList.append( HostInfo( h, hs, cnt ) )
		
		# If we get to a point where none are reassigned, then we can break out of the loop
		reass = True
		
		used_hosts = len(hostInfoList)
		
		# Here how many more hosts this job can use total
		max_hosts_to_use = total_ass - used_hosts
		if max_hosts_to_use > surplusHosts:
			max_hosts_to_use = surplusHosts
		
		if max_hosts_to_use <= 0:
			return 0
		
		to_reassign = (total_ass / (used_hosts + max_hosts_to_use)) * max_hosts_to_use
		to_reassign = min(max_hosts_to_use,to_reassign)
		
		to_reassign_orig = to_reassign
		
		# If this job doesn't qualify, go to the next
		if to_reassign == 0:
			return 0
		
		print "Reassigning %i Frames out of %i assigned from %i hosts" % (to_reassign,total_ass,used_hosts)
		
		# Each time through the loop, we reassign only the hosts with max_assigned frames
		# that was we don't reassign from a host that only has 1 task left, when there another with 10
		while reass and to_reassign > 0 and max_frames > 1:
			reass = False
			resetFrames = JobTaskList()
			for hostInfo in hostInfoList:
				frameList = hostInfo.hostStatus.slaveFrames()
				#print "Parsing frameList %s" % (frameList)
				frames = expandNumberList(frameList)[0]
				#print "Max Frame == %i, assigned frames == %i" % (max_frames, h.errorTempo())
				if hostInfo.assignedFrames == max_frames:
					foundReassign = False
					while not foundReassign and len(frames):
						frame = frames.pop()
						#print "Setting frameList %s" % (frameList)
						jtl = JobTask.select( "fkeyjob=? and jobtask=?", [QVariant(job.key()),QVariant(frame)] )
						frameList = numberListToString(frames)
						hostInfo.hostStatus.setSlaveFrames(frameList)
						if jtl.size() == 1:
							jt = jtl[0]
				#			print "JobTask host %s, Host %s" % (h.name(), jt.host().name())
							if jt.host().key() == hostInfo.host.key() and jt.status() == 'assigned':
								print "Reassigning Frame %i of job %s from host %s" % (frame, job.name(), hostInfo.host.name())
								jt.setStatus('new')
								jt.setHost( Host() )
								hostInfo.assignedFrames -= 1
								resetFrames += jt
								to_reassign -= 1
								reass = True
								foundReassign = True
					
				# If we've already 
				if to_reassign == 0:
					break
					
			# Commit the reassigned frames, lower max_frames
			resetFrames.commit()
			max_frames -= 1
		return to_reassign_orig - to_reassign

def run_loop():
	config.update()
	throttler.update()
	print "Manager: Beginning Loop.  Assign Rate: %g Assign Period: %g Assign Left: %g" % ( float(throttler.assignRate), float(throttler.assignPeriod), float(throttler.assignLeft) )

	updateProjectTempo()

	# Basic Farm Counter
	hostsTotal, hostsActive, hostsReady = getCounter()[:3]

	# Complete Job / Host snapshot
	snapshot = FarmResourceSnapshot()
	snapshot.refresh()
	snapshot.scaleProjectWeights(hostsActive + hostsReady)
	snapshot.performAssignments()

def manager2():
	print "Manager: Starting up"
	while True:
		hostService.pulse()
		service.reload()
		if service.enabled() and hostService.enabled():
			run_loop()
			if VERBOSE_DEBUG: print "Loop Assigning Jobs, took: %i, Waiting 1 second" % (timer.elapsed())
			time.sleep( 1 )

if __name__=="__main__":
	manager2()
