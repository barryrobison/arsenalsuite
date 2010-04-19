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

#line 222 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 39 "sipQtCoreQMetaClassInfo.cpp"



extern "C" {static PyObject *meth_QMetaClassInfo_name(PyObject *, PyObject *);}
static PyObject *meth_QMetaClassInfo_name(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QMetaClassInfo *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QMetaClassInfo,&sipCpp))
        {
            const char *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->name();
            Py_END_ALLOW_THREADS

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QMetaClassInfo,sipName_name);

    return NULL;
}


extern "C" {static PyObject *meth_QMetaClassInfo_value(PyObject *, PyObject *);}
static PyObject *meth_QMetaClassInfo_value(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QMetaClassInfo *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QMetaClassInfo,&sipCpp))
        {
            const char *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->value();
            Py_END_ALLOW_THREADS

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QMetaClassInfo,sipName_value);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QMetaClassInfo(void *, const sipTypeDef *);}
static void *cast_QMetaClassInfo(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QMetaClassInfo)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMetaClassInfo(void *, int);}
static void release_QMetaClassInfo(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QMetaClassInfo *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QMetaClassInfo(void *, SIP_SSIZE_T, const void *);}
static void assign_QMetaClassInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QMetaClassInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QMetaClassInfo *>(sipSrc);
}


extern "C" {static void *array_QMetaClassInfo(SIP_SSIZE_T);}
static void *array_QMetaClassInfo(SIP_SSIZE_T sipNrElem)
{
    return new QMetaClassInfo[sipNrElem];
}


extern "C" {static void *copy_QMetaClassInfo(const void *, SIP_SSIZE_T);}
static void *copy_QMetaClassInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMetaClassInfo(reinterpret_cast<const QMetaClassInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMetaClassInfo(sipSimpleWrapper *);}
static void dealloc_QMetaClassInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QMetaClassInfo(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QMetaClassInfo(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QMetaClassInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QMetaClassInfo *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMetaClassInfo();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QMetaClassInfo * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QMetaClassInfo,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMetaClassInfo(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


static PyMethodDef methods_QMetaClassInfo[] = {
    {SIP_MLNAME_CAST(sipName_name), meth_QMetaClassInfo_name, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_value), meth_QMetaClassInfo_value, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QMetaClassInfo = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QMetaClassInfo,
        {0}
    },
    {
        sipNameNr_QMetaClassInfo,
        {0, 0, 1},
        2, methods_QMetaClassInfo,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QMetaClassInfo,
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
    dealloc_QMetaClassInfo,
    assign_QMetaClassInfo,
    array_QMetaClassInfo,
    copy_QMetaClassInfo,
    release_QMetaClassInfo,
    cast_QMetaClassInfo,
    0,
    0,
    0
},
    0,
    0,
    0
};