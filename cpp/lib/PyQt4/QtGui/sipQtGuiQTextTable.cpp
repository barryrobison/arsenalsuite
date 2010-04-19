/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:22 2010
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

#include "sipAPIQtGui.h"

#line 66 "sip/QtGui/qtexttable.sip"
#include <qtexttable.h>
#line 39 "sipQtGuiQTextTable.cpp"

#line 66 "sip/QtGui/qtextdocument.sip"
#include <qtextdocument.h>
#line 43 "sipQtGuiQTextTable.cpp"
#line 623 "sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 46 "sipQtGuiQTextTable.cpp"
#line 37 "sip/QtGui/qtextcursor.sip"
#include <qtextcursor.h>
#line 49 "sipQtGuiQTextTable.cpp"
#line 37 "sip/QtGui/qtexttable.sip"
#include <qtexttable.h>
#line 52 "sipQtGuiQTextTable.cpp"
#line 529 "sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 55 "sipQtGuiQTextTable.cpp"
#line 78 "sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 96 "sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 60 "sipQtGuiQTextTable.cpp"
#line 78 "sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 96 "sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 65 "sipQtGuiQTextTable.cpp"
#line 125 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 68 "sipQtGuiQTextTable.cpp"
#line 37 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 71 "sipQtGuiQTextTable.cpp"
#line 292 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 74 "sipQtGuiQTextTable.cpp"
#line 279 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 77 "sipQtGuiQTextTable.cpp"
#line 40 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 80 "sipQtGuiQTextTable.cpp"
#line 41 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 83 "sipQtGuiQTextTable.cpp"
#line 38 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 86 "sipQtGuiQTextTable.cpp"
#line 43 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 89 "sipQtGuiQTextTable.cpp"
#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 92 "sipQtGuiQTextTable.cpp"
#line 125 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 95 "sipQtGuiQTextTable.cpp"
#line 37 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 98 "sipQtGuiQTextTable.cpp"
#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 101 "sipQtGuiQTextTable.cpp"
#line 41 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 104 "sipQtGuiQTextTable.cpp"
#line 37 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 107 "sipQtGuiQTextTable.cpp"


class sipQTextTable : public QTextTable
{
public:
    sipQTextTable(QTextDocument *);
    virtual ~sipQTextTable();

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
    sipQTextTable(const sipQTextTable &);
    sipQTextTable &operator = (const sipQTextTable &);

    char sipPyMethods[7];
};

sipQTextTable::sipQTextTable(QTextDocument *a0): QTextTable(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQTextTable::~sipQTextTable()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQTextTable::metaObject() const
{
    return sip_QtGui_qt_metaobject(sipPySelf,sipType_QTextTable);
}

int sipQTextTable::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QTextTable::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QTextTable,_c,_id,_a);

    return _id;
}

void *sipQTextTable::qt_metacast(const char *_clname)
{
    return (sip_QtGui_qt_metacast && sip_QtGui_qt_metacast(sipPySelf,sipType_QTextTable,_clname)) ? this : QTextTable::qt_metacast(_clname);
}

bool sipQTextTable::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    typedef bool (*sipVH_QtCore_12)(sip_gilstate_t,PyObject *,bool*,QEvent *);

    return ((sipVH_QtCore_12)(sipModuleAPI_QtGui_QtCore->em_virthandlers[12]))(sipGILState,meth,0,a0);
}

bool sipQTextTable::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_20)(sip_gilstate_t,PyObject *,bool*,QObject *,QEvent *);

    return ((sipVH_QtCore_20)(sipModuleAPI_QtGui_QtCore->em_virthandlers[20]))(sipGILState,meth,0,a0,a1);
}

void sipQTextTable::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_timerEvent);

    if (!meth)
    {
        QObject::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_3)(sip_gilstate_t,PyObject *,bool*,QTimerEvent *);

    ((sipVH_QtCore_3)(sipModuleAPI_QtGui_QtCore->em_virthandlers[3]))(sipGILState,meth,0,a0);
}

void sipQTextTable::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!meth)
    {
        QObject::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_19)(sip_gilstate_t,PyObject *,bool*,QChildEvent *);

    ((sipVH_QtCore_19)(sipModuleAPI_QtGui_QtCore->em_virthandlers[19]))(sipGILState,meth,0,a0);
}

void sipQTextTable::customEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!meth)
    {
        QObject::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_18)(sip_gilstate_t,PyObject *,bool*,QEvent *);

    ((sipVH_QtCore_18)(sipModuleAPI_QtGui_QtCore->em_virthandlers[18]))(sipGILState,meth,0,a0);
}

void sipQTextTable::connectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_connectNotify);

    if (!meth)
    {
        QObject::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,bool*,const char *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtGui_QtCore->em_virthandlers[17]))(sipGILState,meth,0,a0);
}

void sipQTextTable::disconnectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_disconnectNotify);

    if (!meth)
    {
        QObject::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,bool*,const char *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtGui_QtCore->em_virthandlers[17]))(sipGILState,meth,0,a0);
}

int sipQTextTable::sipProtect_receivers(const char *a0) const
{
    return QObject::receivers(a0);
}

void sipQTextTable::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent *a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQTextTable::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent *a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQTextTable::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent *a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipQTextTable::sipProtectVirt_connectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQTextTable::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}


extern "C" {static PyObject *meth_QTextTable_receivers(PyObject *, PyObject *);}
static PyObject *meth_QTextTable_receivers(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        char * a0;
        sipQTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QTextTable,&sipCpp,&a0))
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
#line 360 "sipQtGuiQTextTable.cpp"

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTable,sipName_receivers);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTable_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_QTextTable_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent * a0;
        sipQTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QTextTable,&sipCpp,sipType_QTimerEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTable,sipName_timerEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTable_childEvent(PyObject *, PyObject *);}
static PyObject *meth_QTextTable_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent * a0;
        sipQTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QTextTable,&sipCpp,sipType_QChildEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTable,sipName_childEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTable_customEvent(PyObject *, PyObject *);}
static PyObject *meth_QTextTable_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent * a0;
        sipQTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QTextTable,&sipCpp,sipType_QEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTable,sipName_customEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTable_connectNotify(PyObject *, PyObject *);}
static PyObject *meth_QTextTable_connectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QTextTable,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTable,sipName_connectNotify);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTable_disconnectNotify(PyObject *, PyObject *);}
static PyObject *meth_QTextTable_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QTextTable,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTable,sipName_disconnectNotify);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTable_resize(PyObject *, PyObject *);}
static PyObject *meth_QTextTable_resize(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        int a1;
        QTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bii",&sipSelf,sipType_QTextTable,&sipCpp,&a0,&a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->resize(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTable,sipName_resize);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTable_insertRows(PyObject *, PyObject *);}
static PyObject *meth_QTextTable_insertRows(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        int a1;
        QTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bii",&sipSelf,sipType_QTextTable,&sipCpp,&a0,&a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->insertRows(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTable,sipName_insertRows);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTable_insertColumns(PyObject *, PyObject *);}
static PyObject *meth_QTextTable_insertColumns(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        int a1;
        QTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bii",&sipSelf,sipType_QTextTable,&sipCpp,&a0,&a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->insertColumns(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTable,sipName_insertColumns);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTable_removeRows(PyObject *, PyObject *);}
static PyObject *meth_QTextTable_removeRows(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        int a1;
        QTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bii",&sipSelf,sipType_QTextTable,&sipCpp,&a0,&a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->removeRows(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTable,sipName_removeRows);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTable_removeColumns(PyObject *, PyObject *);}
static PyObject *meth_QTextTable_removeColumns(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        int a1;
        QTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bii",&sipSelf,sipType_QTextTable,&sipCpp,&a0,&a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->removeColumns(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTable,sipName_removeColumns);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTable_mergeCells(PyObject *, PyObject *);}
static PyObject *meth_QTextTable_mergeCells(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        int a1;
        int a2;
        int a3;
        QTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Biiii",&sipSelf,sipType_QTextTable,&sipCpp,&a0,&a1,&a2,&a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->mergeCells(a0,a1,a2,a3);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QTextCursor * a0;
        QTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QTextTable,&sipCpp,sipType_QTextCursor,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->mergeCells(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTable,sipName_mergeCells);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTable_splitCell(PyObject *, PyObject *);}
static PyObject *meth_QTextTable_splitCell(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        int a1;
        int a2;
        int a3;
        QTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Biiii",&sipSelf,sipType_QTextTable,&sipCpp,&a0,&a1,&a2,&a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->splitCell(a0,a1,a2,a3);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTable,sipName_splitCell);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTable_rows(PyObject *, PyObject *);}
static PyObject *meth_QTextTable_rows(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QTextTable,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->rows();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTable,sipName_rows);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTable_columns(PyObject *, PyObject *);}
static PyObject *meth_QTextTable_columns(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QTextTable,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->columns();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTable,sipName_columns);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTable_cellAt(PyObject *, PyObject *);}
static PyObject *meth_QTextTable_cellAt(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        int a1;
        QTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bii",&sipSelf,sipType_QTextTable,&sipCpp,&a0,&a1))
        {
            QTextTableCell *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextTableCell(sipCpp->cellAt(a0,a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextTableCell,NULL);
        }
    }

    {
        int a0;
        QTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QTextTable,&sipCpp,&a0))
        {
            QTextTableCell *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextTableCell(sipCpp->cellAt(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextTableCell,NULL);
        }
    }

    {
        const QTextCursor * a0;
        QTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QTextTable,&sipCpp,sipType_QTextCursor,&a0))
        {
            QTextTableCell *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextTableCell(sipCpp->cellAt(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextTableCell,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTable,sipName_cellAt);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTable_rowStart(PyObject *, PyObject *);}
static PyObject *meth_QTextTable_rowStart(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QTextCursor * a0;
        QTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QTextTable,&sipCpp,sipType_QTextCursor,&a0))
        {
            QTextCursor *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextCursor(sipCpp->rowStart(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextCursor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTable,sipName_rowStart);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTable_rowEnd(PyObject *, PyObject *);}
static PyObject *meth_QTextTable_rowEnd(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QTextCursor * a0;
        QTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QTextTable,&sipCpp,sipType_QTextCursor,&a0))
        {
            QTextCursor *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextCursor(sipCpp->rowEnd(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextCursor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTable,sipName_rowEnd);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTable_format(PyObject *, PyObject *);}
static PyObject *meth_QTextTable_format(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QTextTable,&sipCpp))
        {
            QTextTableFormat *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextTableFormat(sipCpp->format());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextTableFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTable,sipName_format);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTable_setFormat(PyObject *, PyObject *);}
static PyObject *meth_QTextTable_setFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QTextTableFormat * a0;
        QTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QTextTable,&sipCpp,sipType_QTextTableFormat,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFormat(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTable,sipName_setFormat);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTable_appendRows(PyObject *, PyObject *);}
static PyObject *meth_QTextTable_appendRows(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QTextTable,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->appendRows(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTable,sipName_appendRows);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTable_appendColumns(PyObject *, PyObject *);}
static PyObject *meth_QTextTable_appendColumns(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QTextTable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QTextTable,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->appendColumns(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTable,sipName_appendColumns);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTextTable(void *, const sipTypeDef *);}
static void *cast_QTextTable(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QTextTable)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QTextFrame)->ctd_cast((QTextFrame *)(QTextTable *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextTable(void *, int);}
static void release_QTextTable(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQTextTable *>(sipCppV);
    else
        delete reinterpret_cast<QTextTable *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QTextTable(sipSimpleWrapper *);}
static void dealloc_QTextTable(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQTextTable *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QTextTable(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QTextTable(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QTextTable(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    sipQTextTable *sipCpp = 0;

    if (!sipCpp)
    {
        QTextDocument * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J8",sipType_QTextDocument,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQTextTable(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTextTable[] = {{613, 255, 1}};


static PyMethodDef methods_QTextTable[] = {
    {SIP_MLNAME_CAST(sipName_appendColumns), meth_QTextTable_appendColumns, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_appendRows), meth_QTextTable_appendRows, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_cellAt), meth_QTextTable_cellAt, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_childEvent), meth_QTextTable_childEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_columns), meth_QTextTable_columns, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), meth_QTextTable_connectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_QTextTable_customEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), meth_QTextTable_disconnectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_format), meth_QTextTable_format, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_insertColumns), meth_QTextTable_insertColumns, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_insertRows), meth_QTextTable_insertRows, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_mergeCells), meth_QTextTable_mergeCells, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_receivers), meth_QTextTable_receivers, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_removeColumns), meth_QTextTable_removeColumns, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_removeRows), meth_QTextTable_removeRows, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_resize), meth_QTextTable_resize, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_rowEnd), meth_QTextTable_rowEnd, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_rowStart), meth_QTextTable_rowStart, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_rows), meth_QTextTable_rows, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setFormat), meth_QTextTable_setFormat, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_splitCell), meth_QTextTable_splitCell, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_QTextTable_timerEvent, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextTable = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QTextTable,
        {0}
    },
    {
        sipNameNr_QTextTable,
        {0, 0, 1},
        22, methods_QTextTable,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QTextTable,
    0,
    init_QTextTable,
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
    dealloc_QTextTable,
    0,
    0,
    0,
    release_QTextTable,
    cast_QTextTable,
    0,
    0,
    0
},
    &QTextTable::staticMetaObject,
    0,
    0
};