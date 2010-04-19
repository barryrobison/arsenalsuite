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

#line 125 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 39 "sipQtGuiQList0101QGraphicsWidget.cpp"

#line 39 "sip/QtGui/qgraphicswidget.sip"
#include <qgraphicswidget.h>
#line 43 "sipQtGuiQList0101QGraphicsWidget.cpp"


extern "C" {static void assign_QList_0101QGraphicsWidget(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0101QGraphicsWidget(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QGraphicsWidget *> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QGraphicsWidget *> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QGraphicsWidget(SIP_SSIZE_T);}
static void *array_QList_0101QGraphicsWidget(SIP_SSIZE_T sipNrElem)
{
    return new QList<QGraphicsWidget *>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QGraphicsWidget(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QGraphicsWidget(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QGraphicsWidget *>(reinterpret_cast<const QList<QGraphicsWidget *> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QGraphicsWidget(void *, int);}
static void release_QList_0101QGraphicsWidget(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<QGraphicsWidget *> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0101QGraphicsWidget(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QGraphicsWidget(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QGraphicsWidget *> **sipCppPtr = reinterpret_cast<QList<QGraphicsWidget *> **>(sipCppPtrV);

#line 154 "sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *itm = PySequence_ITEM(sipPy, i);
            bool ok = (itm && sipCanConvertToType(itm, sipType_QGraphicsWidget, 0));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QGraphicsWidget *> *ql = new QList<QGraphicsWidget *>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        QGraphicsWidget *t = reinterpret_cast<QGraphicsWidget *>(sipConvertToType(itm, sipType_QGraphicsWidget, sipTransferObj, 0, 0, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            delete ql;
            return 0;
        }

        ql->append(t);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 128 "sipQtGuiQList0101QGraphicsWidget.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QGraphicsWidget(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QGraphicsWidget(void *sipCppV,PyObject *sipTransferObj)
{
   QList<QGraphicsWidget *> *sipCpp = reinterpret_cast<QList<QGraphicsWidget *> *>(sipCppV);

#line 129 "sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QGraphicsWidget *t = sipCpp->at(i);
        PyObject *tobj;

        if ((tobj = sipConvertFromType(t, sipType_QGraphicsWidget, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 160 "sipQtGuiQList0101QGraphicsWidget.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QList_0101QGraphicsWidget = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_16077,
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
    assign_QList_0101QGraphicsWidget,
    array_QList_0101QGraphicsWidget,
    copy_QList_0101QGraphicsWidget,
    release_QList_0101QGraphicsWidget,
    convertTo_QList_0101QGraphicsWidget,
    convertFrom_QList_0101QGraphicsWidget
};