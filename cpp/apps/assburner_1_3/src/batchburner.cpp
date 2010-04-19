
/*
 *
 * Copyright 2003 Blur Studio Inc.
 *
 * This file is part of RenderLine.
 *
 * RenderLine is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * RenderLine is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with RenderLine; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

/*
 * $Id: batchburner.cpp 9610 2010-03-29 22:42:27Z brobison $
  */

#ifdef COMPILE_BATCH_BURNER

#include <qdir.h>
#include <qfileinfo.h>
#include <qlibrary.h>

#include "jobassignmentstatus.h"

#ifdef Q_OS_WIN
#include <windows.h>
typedef BOOL /*WINAPI*/ (*ExtWow64DisableWow64FsRedirection) ( PVOID *OldValue );
typedef BOOL /*WINAPI*/ (*ExtWow64RevertWow64FsRedirection) ( PVOID OldValue );
ExtWow64DisableWow64FsRedirection getWow64DisableWow64FsRedirection()
{
    static ExtWow64DisableWow64FsRedirection cpwl = (ExtWow64DisableWow64FsRedirection)QLibrary::resolve( "kernel32", "Wow64DisableWow64FsRedirection" );
    return cpwl;
}
ExtWow64RevertWow64FsRedirection getWow64RevertWow64FsRedirection()
{
    static ExtWow64RevertWow64FsRedirection cpwl = (ExtWow64RevertWow64FsRedirection)QLibrary::resolve( "kernel32", "Wow64RevertWow64FsRedirection" );
    return cpwl;
}

#endif

#include "database.h"
#include "process.h"
#include "user.h"

#include "jobbatch.h"

#include "batchburner.h"
#include "slave.h"

BatchBurner::BatchBurner( const JobAssignment & jobAssignment, Slave * slave )
: JobBurner( jobAssignment, slave )
{}

BatchBurner::~BatchBurner()
{}

QString BatchBurner::executable()
{
	JobBatch jb(mJob);
	QString cmd = jb.cmd();
	if( jb.passSlaveFramesAsParam() ) {
		LOG_5("BB:executable() slave is assigned: " + assignedTasks());
		cmd += " " + assignedTasks();
	}
#ifdef Q_OS_LINUX
	if( jb.runasSubmitter() )
		cmd = "su " + mJob.user().name() + " -c \""+cmd+"\"";

#ifdef USE_TIME_WRAP
	QString timeCmd = "/usr/bin/time --format=baztime:real:%e:user:%U:sys:%S:iowait:%w ";
	cmd = timeCmd + cmd;
#endif

#endif
	return cmd;
}

QStringList BatchBurner::environment()
{
	if( mJob.environment().isEmpty() )
		return QStringList();
	else
		return mJob.environment().split("\n");
}

QString BatchBurner::workingDirectory()
{
	return QFileInfo( mBurnFile ).absolutePath();
}

void BatchBurner::slotProcessStarted()
{
	mTasks.setStatuses( "busy" );
	mCurrentTaskAssignments = mTasks.jobTaskAssignments();
	mCurrentTaskAssignments.setJobAssignmentStatuses( JobAssignmentStatus::recordByName("busy") );
	mCurrentTaskAssignments.setColumnLiteral( "started", "now()" );
	updateOutput();
	mCurrentTaskAssignments.commit();
	mTasks.commit();
	mCurrentTasks = mTasks;
}

void BatchBurner::startProcess()
{
#ifdef Q_OS_WIN
	bool disableWow64Redirect = isWow64() && JobBatch(mJob).disableWow64FsRedirect();
	PVOID oldVal;
	if( disableWow64Redirect ) {
		ExtWow64DisableWow64FsRedirection func_p = getWow64DisableWow64FsRedirection();
		if( !func_p || !getWow64RevertWow64FsRedirection() ) {
			jobErrored( "Failed to find Wow64DisableWow64FsRedirection and Wow64RevertWow64FsRedirection" );
			return;
		}
		if( !func_p( &oldVal ) ) {
			jobErrored( "Failed to disable Wow64 Filesystem redirection" );
			return;
		}
	}
#endif
	JobBurner::startProcess();
#ifdef Q_OS_WIN
	if( disableWow64Redirect )
		getWow64RevertWow64FsRedirection()( oldVal );
#endif
	mCheckupTimer->start( 15 * 1000 );
}

void BatchBurner::slotProcessExited()
{
	if( mCmd ) {
		if( mCmd->exitCode() == 0 ) {
			LOG_5("BB:slotBatchExited() setting task status done");
			mTasks.setStatuses( "done" );
			mCurrentTaskAssignments = mTasks.jobTaskAssignments();
			mCurrentTaskAssignments.setJobAssignmentStatuses( JobAssignmentStatus::recordByName("done") );
			mCurrentTaskAssignments.setColumnLiteral( "ended", "now()" );
			updateOutput();
			mCurrentTaskAssignments.commit();
			mTasks.commit();
			jobFinished();
		} else
			jobErrored( "Batch script exited with result: " + QString::number( mCmd->exitCode() ) );
	} else
		jobErrored( "mCmd is null, contact render farm admin." );
	JobBurner::slotProcessExited();
}

void BatchBurner::slotProcessOutputLine( const QString & line, QProcess::ProcessChannel channel )
{
	JobBurner::slotProcessOutputLine( line, channel );
#ifdef USE_TIME_WRAP
	// # baztime:real:%e:user:%U:sys:%S:iowait:%w
	if( line.startsWith("baztime:") ) {
		QStringList jobStats = line.split(":");
		mJobAssignment.setRealtime( jobStats[2].toFloat() );
		mJobAssignment.setUsertime( jobStats[4].toFloat() );
		mJobAssignment.setSystime( jobStats[6].toFloat() );
		//mJobAssignment.setIowait( jobStats[8].toInt() );
		mJobAssignment.commit();
	}
#endif
}

#endif