/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:37 2010
 *
 * Copyright (c) 2009 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtXmlPatterns.h"

#line 39 "sip/QtXmlPatterns/qabstractmessagehandler.sip"
#include <qabstractmessagehandler.h>
#line 39 "sipQtXmlPatternsQAbstractMessageHandler.cpp"

#line 40 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 43 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 46 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 41 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 49 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 39 "sip/QtXmlPatterns/qsourcelocation.sip"
#include <qsourcelocation.h>
#line 52 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 37 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 55 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 292 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 58 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 279 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 61 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 41 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 64 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 38 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 67 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 43 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 70 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 73 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 125 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 76 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 37 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 79 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 41 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 82 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 37 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 85 "sipQtXmlPatternsQAbstractMessageHandler.cpp"


class sipQAbstractMessageHandler : public QAbstractMessageHandler
{
public:
    sipQAbstractMessageHandler(QObject *);
    virtual ~sipQAbstractMessageHandler();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    int sipProtect_receivers(const char *) const;
    void sipProtectVirt_timerEvent(bool,QTimerEvent *);
    void sipProtectVirt_childEvent(bool,QChildEvent *);
    void sipProtectVirt_customEvent(bool,QEvent *);
    void sipProtectVirt_connectNotify(bool,const char *);
    void sipProtectVirt_disconnectNotify(bool,const char *);
    void sipProtect_handleMessage(QtMsgType,const QString&,const QUrl&,const QSourceLocation&);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void handleMessage(QtMsgType,const QString&,const QUrl&,const QSourceLocation&);
    bool event(QEvent *);
    bool eventFilter(QObject *,QEvent *);
    void timerEvent(QTimerEvent *);
    void childEvent(QChildEvent *);
    void customEvent(QEvent *);
    void connectNotify(const char *);
    void disconnectNotify(const char *);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQAbstractMessageHandler(const sipQAbstractMessageHandler &);
    sipQAbstractMessageHandler &operator = (const sipQAbstractMessageHandler &);

    char sipPyMethods[8];
};

sipQAbstractMessageHandler::sipQAbstractMessageHandler(QObject *a0): QAbstractMessageHandler(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAbstractMessageHandler::~sipQAbstractMessageHandler()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQAbstractMessageHandler::metaObject() const
{
    return sip_QtXmlPatterns_qt_metaobject(sipPySelf,sipType_QAbstractMessageHandler);
}

int sipQAbstractMessageHandler::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QAbstractMessageHandler::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtXmlPatterns_qt_metacall(sipPySelf,sipType_QAbstractMessageHandler,_c,_id,_a);

    return _id;
}

void *sipQAbstractMessageHandler::qt_metacast(const char *_clname)
{
    return (sip_QtXmlPatterns_qt_metacast && sip_QtXmlPatterns_qt_metacast(sipPySelf,sipType_QAbstractMessageHandler,_clname)) ? this : QAbstractMessageHandler::qt_metacast(_clname);
}

void sipQAbstractMessageHandler::handleMessage(QtMsgType a0,const QString& a1,const QUrl& a2,const QSourceLocation& a3)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QAbstractMessageHandler,sipName_handleMessage);

    if (!meth)
        return;

    extern void sipVH_QtXmlPatterns_18(sip_gilstate_t,PyObject *,bool*,QtMsgType,const QString&,const QUrl&,const QSourceLocation&);

    sipVH_QtXmlPatterns_18(sipGILState,meth,0,a0,a1,a2,a3);
}

bool sipQAbstractMessageHandler::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    typedef bool (*sipVH_QtCore_12)(sip_gilstate_t,PyObject *,bool*,QEvent *);

    return ((sipVH_QtCore_12)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[12]))(sipGILState,meth,0,a0);
}

bool sipQAbstractMessageHandler::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_20)(sip_gilstate_t,PyObject *,bool*,QObject *,QEvent *);

    return ((sipVH_QtCore_20)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[20]))(sipGILState,meth,0,a0,a1);
}

void sipQAbstractMessageHandler::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_timerEvent);

    if (!meth)
    {
        QObject::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_3)(sip_gilstate_t,PyObject *,bool*,QTimerEvent *);

    ((sipVH_QtCore_3)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[3]))(sipGILState,meth,0,a0);
}

void sipQAbstractMessageHandler::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_childEvent);

    if (!meth)
    {
        QObject::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_19)(sip_gilstate_t,PyObject *,bool*,QChildEvent *);

    ((sipVH_QtCore_19)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[19]))(sipGILState,meth,0,a0);
}

void sipQAbstractMessageHandler::customEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_customEvent);

    if (!meth)
    {
        QObject::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_18)(sip_gilstate_t,PyObject *,bool*,QEvent *);

    ((sipVH_QtCore_18)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[18]))(sipGILState,meth,0,a0);
}

void sipQAbstractMessageHandler::connectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_connectNotify);

    if (!meth)
    {
        QObject::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,bool*,const char *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[17]))(sipGILState,meth,0,a0);
}

void sipQAbstractMessageHandler::disconnectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_disconnectNotify);

    if (!meth)
    {
        QObject::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,bool*,const char *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[17]))(sipGILState,meth,0,a0);
}

int sipQAbstractMessageHandler::sipProtect_receivers(const char *a0) const
{
    return QObject::receivers(a0);
}

void sipQAbstractMessageHandler::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent *a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQAbstractMessageHandler::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent *a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQAbstractMessageHandler::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent *a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipQAbstractMessageHandler::sipProtectVirt_connectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQAbstractMessageHandler::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

void sipQAbstractMessageHandler::sipProtect_handleMessage(QtMsgType a0,const QString& a1,const QUrl& a2,const QSourceLocation& a3)
{
    handleMessage(a0,a1,a2,a3);
}


extern "C" {static PyObject *meth_QAbstractMessageHandler_receivers(PyObject *, PyObject *);}
static PyObject *meth_QAbstractMessageHandler_receivers(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        char * a0;
        sipQAbstractMessageHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QAbstractMessageHandler,&sipCpp,&a0))
        {
            int sipRes = 0;

#line 480 "sip/QtCore/qobject.sip"
        // We need to take into account any proxies for Python signals. Import the
        // helper if it hasn't already been done.
        typedef int (*helper_func)(QObject *, const char *, int);
        
        static helper_func helper = 0;
        
        if (!helper)
            helper = (helper_func)sipImportSymbol("qpycore_qobject_receivers");
        
        if (helper)
            sipRes = helper(sipCpp, a0, sipCpp->sipProtect_receivers(a0));
#line 360 "sipQtXmlPatternsQAbstractMessageHandler.cpp"

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractMessageHandler,sipName_receivers);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractMessageHandler_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_QAbstractMessageHandler_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent * a0;
        sipQAbstractMessageHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QAbstractMessageHandler,&sipCpp,sipType_QTimerEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractMessageHandler,sipName_timerEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractMessageHandler_childEvent(PyObject *, PyObject *);}
static PyObject *meth_QAbstractMessageHandler_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent * a0;
        sipQAbstractMessageHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QAbstractMessageHandler,&sipCpp,sipType_QChildEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractMessageHandler,sipName_childEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractMessageHandler_customEvent(PyObject *, PyObject *);}
static PyObject *meth_QAbstractMessageHandler_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent * a0;
        sipQAbstractMessageHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QAbstractMessageHandler,&sipCpp,sipType_QEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractMessageHandler,sipName_customEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractMessageHandler_connectNotify(PyObject *, PyObject *);}
static PyObject *meth_QAbstractMessageHandler_connectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQAbstractMessageHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QAbstractMessageHandler,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractMessageHandler,sipName_connectNotify);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractMessageHandler_disconnectNotify(PyObject *, PyObject *);}
static PyObject *meth_QAbstractMessageHandler_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQAbstractMessageHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QAbstractMessageHandler,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractMessageHandler,sipName_disconnectNotify);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractMessageHandler_message(PyObject *, PyObject *);}
static PyObject *meth_QAbstractMessageHandler_message(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QtMsgType a0;
        const QString * a1;
        int a1State = 0;
        const QUrl& a2def = QUrl();
        const QUrl * a2 = &a2def;
        const QSourceLocation& a3def = QSourceLocation();
        const QSourceLocation * a3 = &a3def;
        QAbstractMessageHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BEJ1|J9J9",&sipSelf,sipType_QAbstractMessageHandler,&sipCpp,sipType_QtMsgType,&a0,sipType_QString,&a1,&a1State,sipType_QUrl,&a2,sipType_QSourceLocation,&a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->message(a0,*a1,*a2,*a3);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractMessageHandler,sipName_message);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractMessageHandler_handleMessage(PyObject *, PyObject *);}
static PyObject *meth_QAbstractMessageHandler_handleMessage(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        QtMsgType a0;
        const QString * a1;
        int a1State = 0;
        const QUrl * a2;
        const QSourceLocation * a3;
        sipQAbstractMessageHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pEJ1J9J9",&sipSelf,sipType_QAbstractMessageHandler,&sipCpp,sipType_QtMsgType,&a0,sipType_QString,&a1,&a1State,sipType_QUrl,&a2,sipType_QSourceLocation,&a3))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractMessageHandler, sipName_handleMessage);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtect_handleMessage(a0,*a1,*a2,*a3);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractMessageHandler,sipName_handleMessage);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QAbstractMessageHandler(void *, const sipTypeDef *);}
static void *cast_QAbstractMessageHandler(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QAbstractMessageHandler)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QAbstractMessageHandler *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAbstractMessageHandler(void *, int);}
static void release_QAbstractMessageHandler(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQAbstractMessageHandler *>(sipCppV);
    else
        delete reinterpret_cast<QAbstractMessageHandler *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QAbstractMessageHandler(sipSimpleWrapper *);}
static void dealloc_QAbstractMessageHandler(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQAbstractMessageHandler *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QAbstractMessageHandler(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QAbstractMessageHandler(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QAbstractMessageHandler(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject **sipOwner, int *sipArgsParsed)
{
    sipQAbstractMessageHandler *sipCpp = 0;

    if (!sipCpp)
    {
        QObject * a0 = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"|JH",sipType_QObject,&a0,sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQAbstractMessageHandler(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QAbstractMessageHandler[] = {{111, 0, 1}};


static PyMethodDef methods_QAbstractMessageHandler[] = {
    {SIP_MLNAME_CAST(sipName_childEvent), meth_QAbstractMessageHandler_childEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), meth_QAbstractMessageHandler_connectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_QAbstractMessageHandler_customEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), meth_QAbstractMessageHandler_disconnectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_handleMessage), meth_QAbstractMessageHandler_handleMessage, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_message), meth_QAbstractMessageHandler_message, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_receivers), meth_QAbstractMessageHandler_receivers, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_QAbstractMessageHandler_timerEvent, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtXmlPatterns_QAbstractMessageHandler = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QAbstractMessageHandler,
        {0}
    },
    {
        sipNameNr_QAbstractMessageHandler,
        {0, 0, 1},
        8, methods_QAbstractMessageHandler,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QAbstractMessageHandler,
    0,
    init_QAbstractMessageHandler,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QAbstractMessageHandler,
    0,
    0,
    0,
    release_QAbstractMessageHandler,
    cast_QAbstractMessageHandler,
    0,
    0,
    0
},
    &QAbstractMessageHandler::staticMetaObject,
    0,
    0
};