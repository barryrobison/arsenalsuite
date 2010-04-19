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

#line 205 "sip/QtCore/qlist.sip"
#include <qlist.h>
#include <qpair.h>
#line 40 "sipQtCoreQList0600QPair0100QByteArray0100QByteArray.cpp"

#line 43 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 44 "sipQtCoreQList0600QPair0100QByteArray0100QByteArray.cpp"


extern "C" {static void assign_QList_0600QPair_0100QByteArray_0100QByteArray(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0600QPair_0100QByteArray_0100QByteArray(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QPair<QByteArray,QByteArray> > *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QPair<QByteArray,QByteArray> > *>(sipSrc);
}


extern "C" {static void *array_QList_0600QPair_0100QByteArray_0100QByteArray(SIP_SSIZE_T);}
static void *array_QList_0600QPair_0100QByteArray_0100QByteArray(SIP_SSIZE_T sipNrElem)
{
    return new QList<QPair<QByteArray,QByteArray> >[sipNrElem];
}


extern "C" {static void *copy_QList_0600QPair_0100QByteArray_0100QByteArray(const void *, SIP_SSIZE_T);}
static void *copy_QList_0600QPair_0100QByteArray_0100QByteArray(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QPair<QByteArray,QByteArray> >(reinterpret_cast<const QList<QPair<QByteArray,QByteArray> > *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0600QPair_0100QByteArray_0100QByteArray(void *, int);}
static void release_QList_0600QPair_0100QByteArray_0100QByteArray(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<QPair<QByteArray,QByteArray> > *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0600QPair_0100QByteArray_0100QByteArray(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0600QPair_0100QByteArray_0100QByteArray(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QPair<QByteArray,QByteArray> > **sipCppPtr = reinterpret_cast<QList<QPair<QByteArray,QByteArray> > **>(sipCppPtrV);

#line 240 "sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *seq = PySequence_ITEM(sipPy, i);

            if (!seq || !PySequence_Check(seq) || PySequence_Size(seq) != 2)
            {
                Py_XDECREF(seq);
                return 0;
            }

            PyObject *itm0 = PySequence_ITEM(seq, 0);
            PyObject *itm1 = PySequence_ITEM(seq, 1);

            if (!itm0 || !itm1)
            {
                Py_XDECREF(itm0);
                Py_XDECREF(itm1);
                Py_DECREF(seq);
                return 0;
            }

            if (!sipCanConvertToType(itm0, sipType_QByteArray, SIP_NOT_NONE) ||
                !sipCanConvertToType(itm1, sipType_QByteArray, SIP_NOT_NONE))
            {
                Py_DECREF(itm0);
                Py_DECREF(itm1);
                Py_DECREF(seq);
                return 0;
            }
        }

        return 1;
    }

    QList<QPair<QByteArray, QByteArray> > *ql = new QList<QPair<QByteArray, QByteArray> >;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *seq = PySequence_ITEM(sipPy, i);
        PyObject *itm0 = PySequence_ITEM(seq, 0);
        PyObject *itm1 = PySequence_ITEM(seq, 1);
        int state1, state2;

        QByteArray *s1 = reinterpret_cast<QByteArray *>(sipConvertToType(itm0, sipType_QByteArray, sipTransferObj, SIP_NOT_NONE, &state1, sipIsErr));
        QByteArray *s2 = reinterpret_cast<QByteArray *>(sipConvertToType(itm1, sipType_QByteArray, sipTransferObj, SIP_NOT_NONE, &state2, sipIsErr));
 
        Py_DECREF(itm0);
        Py_DECREF(itm1);
        Py_DECREF(seq);

        if (*sipIsErr)
        {
            sipReleaseType(s1, sipType_QByteArray, state1);
            sipReleaseType(s2, sipType_QByteArray, state2);

            delete ql;
            return 0;
        }

        ql->append(QPair<QByteArray, QByteArray>(*s1, *s2));

        sipReleaseType(s1, sipType_QByteArray, state1);
        sipReleaseType(s2, sipType_QByteArray, state2);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 162 "sipQtCoreQList0600QPair0100QByteArray0100QByteArray.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0600QPair_0100QByteArray_0100QByteArray(void *, PyObject *);}
static PyObject *convertFrom_QList_0600QPair_0100QByteArray_0100QByteArray(void *sipCppV,PyObject *sipTransferObj)
{
   QList<QPair<QByteArray,QByteArray> > *sipCpp = reinterpret_cast<QList<QPair<QByteArray,QByteArray> > *>(sipCppV);

#line 210 "sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        const QPair<QByteArray, QByteArray> &p = sipCpp->at(i);
        QByteArray *s1 = new QByteArray(p.first);
        QByteArray *s2 = new QByteArray(p.second);
        PyObject *pobj;

        if ((pobj = sipBuildResult(NULL, "(NN)", s1, sipType_QByteArray, sipTransferObj, s2, sipType_QByteArray, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete s1;
            delete s2;

            return NULL;
        }

        PyList_SET_ITEM(l, i, pobj);
    }

    return l;
#line 199 "sipQtCoreQList0600QPair0100QByteArray0100QByteArray.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QList_0600QPair_0100QByteArray_0100QByteArray = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_157,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QList_0600QPair_0100QByteArray_0100QByteArray,
    array_QList_0600QPair_0100QByteArray_0100QByteArray,
    copy_QList_0600QPair_0100QByteArray_0100QByteArray,
    release_QList_0600QPair_0100QByteArray_0100QByteArray,
    convertTo_QList_0600QPair_0100QByteArray_0100QByteArray,
    convertFrom_QList_0600QPair_0100QByteArray_0100QByteArray
};