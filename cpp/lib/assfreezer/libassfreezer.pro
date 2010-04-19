
MOC_DIR=.out
OBJECTS_DIR=.out
UI_DIR=.out

DEPENDPATH+=src include ui

SOURCES+= \
	src/afcommon.cpp \
	src/assfreezerview.cpp \
	src/assfreezermenus.cpp \
	src/batchsubmitdialog.cpp \
	src/displayprefsdialog.cpp \
	src/framenthdialog.cpp \
	src/glwindow.cpp \
	src/hosterrorwindow.cpp \
	src/hostlistwidget.cpp \
	src/hostservicematrix.cpp \
	src/hostviewerplugin.cpp \
	src/imagecache.cpp \
	src/imageview.cpp \
	src/items.cpp \
	src/jobaftereffectssettingswidget.cpp \
	src/jobbatchsettingswidget.cpp \
	src/jobenvironmentwindow.cpp \
	src/jobfilteredit.cpp \
	src/jobfusionsettingswidget.cpp \
	src/jobhistoryview.cpp \
	src/joblistwidget.cpp \
	src/jobmaxsettingswidget.cpp \
	src/jobmaxscriptsettingswidget.cpp \
	src/jobmayasettingswidget.cpp \
	src/jobrealflowsettingswidget.cpp \
	src/jobshakesettingswidget.cpp \
	src/jobsettingswidget.cpp \
	src/jobstatwidget.cpp \
	src/jobsettingswidgetplugin.cpp \
	src/jobxsisettingswidget.cpp \
	src/jobviewerplugin.cpp \
	src/mainwindow.cpp \
	src/projectweightdialog.cpp \
	src/projectweightview.cpp \
	src/settingsdialog.cpp \
	src/tabtoolbar.cpp \
	src/threadtasks.cpp \
	src/viewmanager.cpp

HEADERS+= \
	include/afcommon.h \
	include/assfreezerview.h \
	include/assfreezermenus.h \
	include/batchsubmitdialog.h \
	include/displayprefsdialog.h \
	include/framenthdialog.h \
	include/glwindow.h \
	include/hosterrorwindow.h \
	include/hostlistwidget.h \
	include/hostservicematrix.h \
	include/hostviewerplugin.h \
	include/hostviewerfactory.h \
	include/imagecache.h \
	include/imageview.h \
	include/items.h \
	include/jobaftereffectssettingswidget.h \
	include/jobbatchsettingswidget.h \
	include/jobenvironmentwindow.h \
	include/jobfilteredit.h \
	include/jobfusionsettingswidget.h \
	include/jobhistoryview.h \
	include/joblistwidget.h \
	include/jobmaxsettingswidget.h \
	include/jobmaxscriptsettingswidget.h \
	include/jobmayasettingswidget.h \
	include/jobrealflowsettingswidget.h \
	include/jobshakesettingswidget.h \
	include/jobstatwidget.h \
	include/jobsettingswidget.h \
	include/jobsettingswidgetplugin.h \
	include/jobxsisettingswidget.h \
	include/jobviewerfactory.h \
	include/jobviewerplugin.h \
	include/mainwindow.h \
	include/projectweightdialog.h \
	include/projectweightview.h \
	include/settingsdialog.h \
	include/tabtoolbar.h \
	include/threadtasks.h \
	include/viewmanager.h

INTERFACES+= \
	ui/aboutdialog.ui \
	ui/batchsubmitdialogui.ui \
	ui/displayprefsdialogui.ui \
	ui/hostservicematrixwindowui.ui \
	ui/framenthdialogui.ui \
	ui/jobaftereffectssettingswidgetui.ui \
	ui/jobbatchsettingswidgetui.ui \
	ui/jobenvironmentwindowui.ui \
	ui/jobfusionsettingswidgetui.ui \
	ui/jobfusionvideomakersettingswidgetui.ui \
	ui/joblistwidgetui.ui \
	ui/jobmaxscriptsettingswidgetui.ui \
	ui/jobmaxsettingswidgetui.ui \
	ui/jobmayasettingswidgetui.ui \
	ui/jobrealflowsettingswidgetui.ui \
	ui/jobsettingswidgetui.ui \
	ui/jobshakesettingswidgetui.ui \
	ui/jobxsisettingswidgetui.ui \
	ui/projectweightdialogui.ui \
	ui/settingsdialogui.ui

LIBS+=-L../absubmit -labsubmit
LIBS+=-L../classesui -lclassesui
LIBS+=-L../classes -lclasses
LIBS+=-L../stonegui -lstonegui
LIBS+=-L../stone -lstone

# In tree include paths
INCLUDEPATH += .out include
INCLUDEPATH += ../stone/include ../stone
INCLUDEPATH += ../stonegui/include ../stonegui/.out/
INCLUDEPATH += ../classes/autocore ../classes/autoimp ../classes
INCLUDEPATH += ../classesui/include ../classesui/.out/
INCLUDEPATH += ../absubmit/include ../absubmit/.out

win32 {
	#INCLUDEPATH+=c:/source/sip/siplib
	PY_PATH=$$system("python -c \"from distutils.sysconfig import get_config_vars; print get_config_vars()['prefix']\"")
	INCLUDEPATH+=$$system("python -c \"from distutils.sysconfig import get_python_inc; print get_python_inc()\"")
	PY_VERSION=$$system("python -c \"from distutils.sysconfig import get_python_version; print get_python_version().replace('.','')\"")
	message(Python Version is $$PY_VERSION Python lib path is $$PY_LIB_PATH)
	LIBS+=-L$${PY_PATH}\libs -lpython$${PY_VERSION}
	LIBS += -lpsapi -lMpr -lws2_32 -lgdi32
}
    LIBS+=-LsipAssfreezer -lAssfreezer
    win32 {
	LIBS+=-L../../lib/classes/sipClasses -lpyClasses
	LIBS+=-L../../lib/stone/sipStone -lpyStone
	LIBS+=-L../../lib/sip/siplib -lsip
    }



# Linux out of tree include paths
unix {
	INCLUDEPATH += /usr/include/stone /usr/include/stonegui /usr/include/classes /usr/include/classesui /usr/include/absubmit
}

# Python modules
debug:win32 {
    LIBS+=-L../../lib/assfreezer/sipAssfreezer -lAssfreezer_d
    LIBS+=-L../../lib/classes/sipClasses -lpyClasses_d
    LIBS+=-L../../lib/stone/sipStone -lpyStone_d
    LIBS+=-L../../lib/sip/siplib -lsip_d
} else {
    LIBS+=-LsipAssfreezer -lAssfreezer
	win32 {
	    LIBS+=-L../../lib/classes/sipClasses -lpyClasses
		LIBS+=-L../../lib/stone/sipStone -lpyStone
		LIBS+=-L../../lib/sip/siplib -lsip
	}
}

win32{
#	INCLUDEPATH+=c:\nvidia\cg\include
#	LIBS+=-Lc:\nvidia\cg\lib -lcgGL -lcg
	LIBS+=-lPsapi
#	LIBS+=-Lc:\IntelLib

	INCLUDEPATH+=c:/source/sip/siplib
	PY_PATH=$$system("python -c \"from distutils.sysconfig import get_config_vars; print get_config_vars()['prefix']\"")
	INCLUDEPATH+=$$system("python -c \"from distutils.sysconfig import get_python_inc; print get_python_inc()\"")
	PY_VERSION=$$system("python -c \"from distutils.sysconfig import get_python_version; print get_python_version().replace('.','')\"")
	message(Python Version is $$PY_VERSION Python lib path is $$PY_LIB_PATH)
	LIBS+=-L$${PY_PATH}\libs -lpython$${PY_VERSION}

}

macx{
  INCLUDEPATH+=/Developer/SDKs/MacOSX10.4u.sdk/usr/X11R6/include/
}

unix{
#	LIBS+=-lCgGL

	PY_VERSION = $$system("python -V 2>&1 | perl -e '$s=<STDIN>; $s =~ s/Python (\d\.\d)\.\d/$1/; print $s'")

	message(Python Version is $$PY_VERSION)
	INCLUDEPATH += /usr/include/python$${PY_VERSION}/
	LIBS+=-lpython$${PY_VERSION}
}

DEFINES+=ASSFREEZER_MAKE_DLL

DEFINES+=USE_IMAGE_MAGICK
contains( DEFINES, USE_IMAGE_MAGICK ) {
	unix:LIBS+=-L/drd/software/ext/imageMagick/lin64/current/lib
	unix:INCLUDEPATH+=/drd/software/ext/imageMagick/lin64/current/include/ImageMagick
	unix:LIBS+=-lMagick++
	macx:INCLUDEPATH+=/usr/local/include
	macx:LIBS+=-lMagick++ -lMagick
}

TEMPLATE=lib

CONFIG += qt thread opengl
QT+=xml sql opengl network
TARGET=assfreezer
target.path=/usr/local/lib
INSTALLS += target

DESTDIR=./