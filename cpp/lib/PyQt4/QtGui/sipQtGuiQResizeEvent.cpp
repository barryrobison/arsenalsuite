/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:24 2010
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

#line 369 "sip/QtGui/qevent.sip"
#include <qevent.h>
#line 39 "sipQtGuiQResizeEvent.cpp"

#line 41 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 43 "sipQtGuiQResizeEvent.cpp"
#line 37 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 46 "sipQtGuiQResizeEvent.cpp"


class sipQResizeEvent : public QResizeEvent
{
public:
    sipQResizeEvent(const QSize&,const QSize&);
    sipQResizeEvent(const QResizeEvent&);
    ~sipQResizeEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQResizeEvent(const sipQResizeEvent &);
    sipQResizeEvent &operator = (const sipQResizeEvent &);
};

sipQResizeEvent::sipQResizeEvent(const QSize& a0,const QSize& a1): QResizeEvent(a0,a1), sipPySelf(0)
{
}

sipQResizeEvent::sipQResizeEvent(const QResizeEvent& a0): QResizeEvent(a0), sipPySelf(0)
{
}

sipQResizeEvent::~sipQResizeEvent()
{
    sipCommonDtor(sipPySelf);
}


extern "C" {static PyObject *meth_QResizeEvent_size(PyObject *, PyObject *);}
static PyObject *meth_QResizeEvent_size(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QResizeEvent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QResizeEvent,&sipCpp))
        {
            QSize *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSize(sipCpp->size());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QResizeEvent,sipName_size);

    return NULL;
}


extern "C" {static PyObject *meth_QResizeEvent_oldSize(PyObject *, PyObject *);}
static PyObject *meth_QResizeEvent_oldSize(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QResizeEvent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QResizeEvent,&sipCpp))
        {
            QSize *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSize(sipCpp->oldSize());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QResizeEvent,sipName_oldSize);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QResizeEvent(void *, const sipTypeDef *);}
static void *cast_QResizeEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QResizeEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QResizeEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QResizeEvent(void *, int);}
static void release_QResizeEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQResizeEvent *>(sipCppV);
    else
        delete reinterpret_cast<QResizeEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QResizeEvent(sipSimpleWrapper *);}
static void dealloc_QResizeEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQResizeEvent *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QResizeEvent(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QResizeEvent(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QResizeEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    sipQResizeEvent *sipCpp = 0;

    if (!sipCpp)
    {
        const QSize * a0;
        const QSize * a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9J9",sipType_QSize,&a0,sipType_QSize,&a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQResizeEvent(*a0,*a1);
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QResizeEvent * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QResizeEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQResizeEvent(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QResizeEvent[] = {{46, 0, 1}};


static PyMethodDef methods_QResizeEvent[] = {
    {SIP_MLNAME_CAST(sipName_oldSize), meth_QResizeEvent_oldSize, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_size), meth_QResizeEvent_size, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QResizeEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QResizeEvent,
        {0}
    },
    {
        sipNameNr_QResizeEvent,
        {0, 0, 1},
        2, methods_QResizeEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QResizeEvent,
    0,
    init_QResizeEvent,
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
    dealloc_QResizeEvent,
    0,
    0,
    0,
    release_QResizeEvent,
    cast_QResizeEvent,
    0,
    0,
    0
},
    0,
    0,
    0
};