/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:19 2010
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

#include "sipAPIQtCore.h"

#line 39 "sip/QtCore/qsharedmemory.sip"
#include <qsharedmemory.h>
#line 39 "sipQtCoreQSharedMemory.cpp"

#line 40 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 43 "sipQtCoreQSharedMemory.cpp"
#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 46 "sipQtCoreQSharedMemory.cpp"
#line 37 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 49 "sipQtCoreQSharedMemory.cpp"
#line 292 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 52 "sipQtCoreQSharedMemory.cpp"
#line 279 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 55 "sipQtCoreQSharedMemory.cpp"
#line 41 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 58 "sipQtCoreQSharedMemory.cpp"
#line 38 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 61 "sipQtCoreQSharedMemory.cpp"
#line 43 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 64 "sipQtCoreQSharedMemory.cpp"
#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 67 "sipQtCoreQSharedMemory.cpp"
#line 125 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 70 "sipQtCoreQSharedMemory.cpp"
#line 37 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 73 "sipQtCoreQSharedMemory.cpp"
#line 41 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 76 "sipQtCoreQSharedMemory.cpp"
#line 37 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 79 "sipQtCoreQSharedMemory.cpp"


class sipQSharedMemory : public QSharedMemory
{
public:
    sipQSharedMemory(QObject *);
    sipQSharedMemory(const QString&,QObject *);
    virtual ~sipQSharedMemory();

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

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
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
    sipQSharedMemory(const sipQSharedMemory &);
    sipQSharedMemory &operator = (const sipQSharedMemory &);

    char sipPyMethods[7];
};

sipQSharedMemory::sipQSharedMemory(QObject *a0): QSharedMemory(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSharedMemory::sipQSharedMemory(const QString& a0,QObject *a1): QSharedMemory(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSharedMemory::~sipQSharedMemory()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQSharedMemory::metaObject() const
{
    return sip_QtCore_qt_metaobject(sipPySelf,sipType_QSharedMemory);
}

int sipQSharedMemory::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QSharedMemory::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtCore_qt_metacall(sipPySelf,sipType_QSharedMemory,_c,_id,_a);

    return _id;
}

void *sipQSharedMemory::qt_metacast(const char *_clname)
{
    return (sip_QtCore_qt_metacast && sip_QtCore_qt_metacast(sipPySelf,sipType_QSharedMemory,_clname)) ? this : QSharedMemory::qt_metacast(_clname);
}

bool sipQSharedMemory::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    extern bool sipVH_QtCore_12(sip_gilstate_t,PyObject *,bool*,QEvent *);

    return sipVH_QtCore_12(sipGILState,meth,0,a0);
}

bool sipQSharedMemory::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    extern bool sipVH_QtCore_20(sip_gilstate_t,PyObject *,bool*,QObject *,QEvent *);

    return sipVH_QtCore_20(sipGILState,meth,0,a0,a1);
}

void sipQSharedMemory::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_timerEvent);

    if (!meth)
    {
        QObject::timerEvent(a0);
        return;
    }

    extern void sipVH_QtCore_3(sip_gilstate_t,PyObject *,bool*,QTimerEvent *);

    sipVH_QtCore_3(sipGILState,meth,0,a0);
}

void sipQSharedMemory::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!meth)
    {
        QObject::childEvent(a0);
        return;
    }

    extern void sipVH_QtCore_19(sip_gilstate_t,PyObject *,bool*,QChildEvent *);

    sipVH_QtCore_19(sipGILState,meth,0,a0);
}

void sipQSharedMemory::customEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!meth)
    {
        QObject::customEvent(a0);
        return;
    }

    extern void sipVH_QtCore_18(sip_gilstate_t,PyObject *,bool*,QEvent *);

    sipVH_QtCore_18(sipGILState,meth,0,a0);
}

void sipQSharedMemory::connectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_connectNotify);

    if (!meth)
    {
        QObject::connectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_17(sip_gilstate_t,PyObject *,bool*,const char *);

    sipVH_QtCore_17(sipGILState,meth,0,a0);
}

void sipQSharedMemory::disconnectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_disconnectNotify);

    if (!meth)
    {
        QObject::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_17(sip_gilstate_t,PyObject *,bool*,const char *);

    sipVH_QtCore_17(sipGILState,meth,0,a0);
}

int sipQSharedMemory::sipProtect_receivers(const char *a0) const
{
    return QObject::receivers(a0);
}

void sipQSharedMemory::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent *a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQSharedMemory::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent *a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQSharedMemory::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent *a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipQSharedMemory::sipProtectVirt_connectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQSharedMemory::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}


extern "C" {static PyObject *meth_QSharedMemory_receivers(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_receivers(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        char * a0;
        sipQSharedMemory *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QSharedMemory,&sipCpp,&a0))
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
#line 338 "sipQtCoreQSharedMemory.cpp"

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSharedMemory,sipName_receivers);

    return NULL;
}


extern "C" {static PyObject *meth_QSharedMemory_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent * a0;
        sipQSharedMemory *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QSharedMemory,&sipCpp,sipType_QTimerEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSharedMemory,sipName_timerEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QSharedMemory_childEvent(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent * a0;
        sipQSharedMemory *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QSharedMemory,&sipCpp,sipType_QChildEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSharedMemory,sipName_childEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QSharedMemory_customEvent(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent * a0;
        sipQSharedMemory *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QSharedMemory,&sipCpp,sipType_QEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSharedMemory,sipName_customEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QSharedMemory_connectNotify(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_connectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQSharedMemory *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QSharedMemory,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSharedMemory,sipName_connectNotify);

    return NULL;
}


extern "C" {static PyObject *meth_QSharedMemory_disconnectNotify(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQSharedMemory *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QSharedMemory,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSharedMemory,sipName_disconnectNotify);

    return NULL;
}


extern "C" {static PyObject *meth_QSharedMemory_setKey(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_setKey(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        QSharedMemory *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QSharedMemory,&sipCpp,sipType_QString,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setKey(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSharedMemory,sipName_setKey);

    return NULL;
}


extern "C" {static PyObject *meth_QSharedMemory_key(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_key(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSharedMemory *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSharedMemory,&sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->key());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSharedMemory,sipName_key);

    return NULL;
}


extern "C" {static PyObject *meth_QSharedMemory_create(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_create(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QSharedMemory::AccessMode a1 = QSharedMemory::ReadWrite;
        QSharedMemory *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi|E",&sipSelf,sipType_QSharedMemory,&sipCpp,&a0,sipType_QSharedMemory_AccessMode,&a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->create(a0,a1);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSharedMemory,sipName_create);

    return NULL;
}


extern "C" {static PyObject *meth_QSharedMemory_size(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_size(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSharedMemory *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSharedMemory,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->size();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSharedMemory,sipName_size);

    return NULL;
}


extern "C" {static PyObject *meth_QSharedMemory_attach(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_attach(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSharedMemory::AccessMode a0 = QSharedMemory::ReadWrite;
        QSharedMemory *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|E",&sipSelf,sipType_QSharedMemory,&sipCpp,sipType_QSharedMemory_AccessMode,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->attach(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSharedMemory,sipName_attach);

    return NULL;
}


extern "C" {static PyObject *meth_QSharedMemory_isAttached(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_isAttached(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSharedMemory *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSharedMemory,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isAttached();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSharedMemory,sipName_isAttached);

    return NULL;
}


extern "C" {static PyObject *meth_QSharedMemory_detach(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_detach(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSharedMemory *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSharedMemory,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->detach();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSharedMemory,sipName_detach);

    return NULL;
}


extern "C" {static PyObject *meth_QSharedMemory_data(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_data(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSharedMemory *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSharedMemory,&sipCpp))
        {
            PyObject * sipRes = 0;

#line 74 "sip/QtCore/qsharedmemory.sip"
        sipRes = sipConvertFromVoidPtrAndSize(sipCpp->data(), sipCpp->size());
#line 700 "sipQtCoreQSharedMemory.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSharedMemory,sipName_data);

    return NULL;
}


extern "C" {static PyObject *meth_QSharedMemory_constData(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_constData(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSharedMemory *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSharedMemory,&sipCpp))
        {
            PyObject * sipRes = 0;

#line 79 "sip/QtCore/qsharedmemory.sip"
        sipRes = sipConvertFromConstVoidPtrAndSize(sipCpp->constData(), sipCpp->size());
#line 727 "sipQtCoreQSharedMemory.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSharedMemory,sipName_constData);

    return NULL;
}


extern "C" {static PyObject *meth_QSharedMemory_lock(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_lock(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSharedMemory *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSharedMemory,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->lock();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSharedMemory,sipName_lock);

    return NULL;
}


extern "C" {static PyObject *meth_QSharedMemory_unlock(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_unlock(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSharedMemory *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSharedMemory,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->unlock();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSharedMemory,sipName_unlock);

    return NULL;
}


extern "C" {static PyObject *meth_QSharedMemory_error(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_error(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSharedMemory *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSharedMemory,&sipCpp))
        {
            QSharedMemory::SharedMemoryError sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->error();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QSharedMemory_SharedMemoryError);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSharedMemory,sipName_error);

    return NULL;
}


extern "C" {static PyObject *meth_QSharedMemory_errorString(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSharedMemory *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSharedMemory,&sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->errorString());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSharedMemory,sipName_errorString);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSharedMemory(void *, const sipTypeDef *);}
static void *cast_QSharedMemory(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QSharedMemory)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QSharedMemory *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSharedMemory(void *, int);}
static void release_QSharedMemory(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQSharedMemory *>(sipCppV);
    else
        delete reinterpret_cast<QSharedMemory *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QSharedMemory(sipSimpleWrapper *);}
static void dealloc_QSharedMemory(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQSharedMemory *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QSharedMemory(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QSharedMemory(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QSharedMemory(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject **sipOwner, int *sipArgsParsed)
{
    sipQSharedMemory *sipCpp = 0;

    if (!sipCpp)
    {
        QObject * a0 = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"|JH",sipType_QObject,&a0,sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQSharedMemory(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QString * a0;
        int a0State = 0;
        QObject * a1 = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1|JH",sipType_QString,&a0,&a0State,sipType_QObject,&a1,sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQSharedMemory(*a0,a1);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSharedMemory[] = {{111, 255, 1}};


static PyMethodDef methods_QSharedMemory[] = {
    {SIP_MLNAME_CAST(sipName_attach), meth_QSharedMemory_attach, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_childEvent), meth_QSharedMemory_childEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), meth_QSharedMemory_connectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_constData), meth_QSharedMemory_constData, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_create), meth_QSharedMemory_create, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_QSharedMemory_customEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_data), meth_QSharedMemory_data, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_detach), meth_QSharedMemory_detach, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), meth_QSharedMemory_disconnectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_error), meth_QSharedMemory_error, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_errorString), meth_QSharedMemory_errorString, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isAttached), meth_QSharedMemory_isAttached, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_key), meth_QSharedMemory_key, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_lock), meth_QSharedMemory_lock, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_receivers), meth_QSharedMemory_receivers, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setKey), meth_QSharedMemory_setKey, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_size), meth_QSharedMemory_size, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_QSharedMemory_timerEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_unlock), meth_QSharedMemory_unlock, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QSharedMemory[] = {
    {sipName_AlreadyExists, QSharedMemory::AlreadyExists, 141},
    {sipName_InvalidSize, QSharedMemory::InvalidSize, 141},
    {sipName_KeyError, QSharedMemory::KeyError, 141},
    {sipName_LockError, QSharedMemory::LockError, 141},
    {sipName_NoError, QSharedMemory::NoError, 141},
    {sipName_NotFound, QSharedMemory::NotFound, 141},
    {sipName_OutOfResources, QSharedMemory::OutOfResources, 141},
    {sipName_PermissionDenied, QSharedMemory::PermissionDenied, 141},
    {sipName_ReadOnly, QSharedMemory::ReadOnly, 140},
    {sipName_ReadWrite, QSharedMemory::ReadWrite, 140},
    {sipName_UnknownError, QSharedMemory::UnknownError, 141},
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QSharedMemory = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QSharedMemory,
        {0}
    },
    {
        sipNameNr_QSharedMemory,
        {0, 0, 1},
        19, methods_QSharedMemory,
        11, enummembers_QSharedMemory,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QSharedMemory,
    0,
    init_QSharedMemory,
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
    dealloc_QSharedMemory,
    0,
    0,
    0,
    release_QSharedMemory,
    cast_QSharedMemory,
    0,
    0,
    0
},
    &QSharedMemory::staticMetaObject,
    0,
    0
};