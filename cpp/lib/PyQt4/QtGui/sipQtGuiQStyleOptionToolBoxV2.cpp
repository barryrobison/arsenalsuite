/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:23 2010
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

#line 1670 "sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 39 "sipQtGuiQStyleOptionToolBoxV2.cpp"

#line 891 "sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 43 "sipQtGuiQStyleOptionToolBoxV2.cpp"
#line 41 "sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 46 "sipQtGuiQStyleOptionToolBoxV2.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionToolBoxV2(void *, const sipTypeDef *);}
static void *cast_QStyleOptionToolBoxV2(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionToolBoxV2)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOptionToolBox)->ctd_cast((QStyleOptionToolBox *)(QStyleOptionToolBoxV2 *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionToolBoxV2(void *, int);}
static void release_QStyleOptionToolBoxV2(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionToolBoxV2 *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionToolBoxV2(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionToolBoxV2(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionToolBoxV2 *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionToolBoxV2 *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionToolBoxV2(SIP_SSIZE_T);}
static void *array_QStyleOptionToolBoxV2(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionToolBoxV2[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionToolBoxV2(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionToolBoxV2(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionToolBoxV2(reinterpret_cast<const QStyleOptionToolBoxV2 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionToolBoxV2(sipSimpleWrapper *);}
static void dealloc_QStyleOptionToolBoxV2(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionToolBoxV2(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QStyleOptionToolBoxV2(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QStyleOptionToolBoxV2(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QStyleOptionToolBoxV2 *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionToolBoxV2();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QStyleOptionToolBoxV2 * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QStyleOptionToolBoxV2,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionToolBoxV2(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QStyleOptionToolBox * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QStyleOptionToolBox,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionToolBoxV2(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionToolBoxV2[] = {{535, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionToolBoxV2[] = {
    {sipName_Beginning, QStyleOptionToolBoxV2::Beginning, 541},
    {sipName_End, QStyleOptionToolBoxV2::End, 541},
    {sipName_Middle, QStyleOptionToolBoxV2::Middle, 541},
    {sipName_NextIsSelected, QStyleOptionToolBoxV2::NextIsSelected, 539},
    {sipName_NotAdjacent, QStyleOptionToolBoxV2::NotAdjacent, 539},
    {sipName_OnlyOneTab, QStyleOptionToolBoxV2::OnlyOneTab, 541},
    {sipName_PreviousIsSelected, QStyleOptionToolBoxV2::PreviousIsSelected, 539},
    {sipName_Version, QStyleOptionToolBoxV2::Version, 540},
};


extern "C" {static PyObject *varget_QStyleOptionToolBoxV2_position(void *, PyObject *);}
static PyObject *varget_QStyleOptionToolBoxV2_position(void *sipSelf, PyObject *)
{
    QStyleOptionToolBoxV2::TabPosition sipVal;
    QStyleOptionToolBoxV2 *sipCpp = reinterpret_cast<QStyleOptionToolBoxV2 *>(sipSelf);

    sipVal = sipCpp->position;

    return sipConvertFromEnum(sipVal, sipType_QStyleOptionToolBoxV2_TabPosition);
}


extern "C" {static int varset_QStyleOptionToolBoxV2_position(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolBoxV2_position(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionToolBoxV2::TabPosition sipVal;
    QStyleOptionToolBoxV2 *sipCpp = reinterpret_cast<QStyleOptionToolBoxV2 *>(sipSelf);

    sipVal = (QStyleOptionToolBoxV2::TabPosition)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->position = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolBoxV2_selectedPosition(void *, PyObject *);}
static PyObject *varget_QStyleOptionToolBoxV2_selectedPosition(void *sipSelf, PyObject *)
{
    QStyleOptionToolBoxV2::SelectedPosition sipVal;
    QStyleOptionToolBoxV2 *sipCpp = reinterpret_cast<QStyleOptionToolBoxV2 *>(sipSelf);

    sipVal = sipCpp->selectedPosition;

    return sipConvertFromEnum(sipVal, sipType_QStyleOptionToolBoxV2_SelectedPosition);
}


extern "C" {static int varset_QStyleOptionToolBoxV2_selectedPosition(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolBoxV2_selectedPosition(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionToolBoxV2::SelectedPosition sipVal;
    QStyleOptionToolBoxV2 *sipCpp = reinterpret_cast<QStyleOptionToolBoxV2 *>(sipSelf);

    sipVal = (QStyleOptionToolBoxV2::SelectedPosition)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->selectedPosition = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionToolBoxV2[] = {
    {sipName_position, varget_QStyleOptionToolBoxV2_position, varset_QStyleOptionToolBoxV2_position, 0},
    {sipName_selectedPosition, varget_QStyleOptionToolBoxV2_selectedPosition, varset_QStyleOptionToolBoxV2_selectedPosition, 0},
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionToolBoxV2 = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionToolBoxV2,
        {0}
    },
    {
        sipNameNr_QStyleOptionToolBoxV2,
        {0, 0, 1},
        0, 0,
        8, enummembers_QStyleOptionToolBoxV2,
        2, variables_QStyleOptionToolBoxV2,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QStyleOptionToolBoxV2,
    0,
    init_QStyleOptionToolBoxV2,
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
    dealloc_QStyleOptionToolBoxV2,
    assign_QStyleOptionToolBoxV2,
    array_QStyleOptionToolBoxV2,
    copy_QStyleOptionToolBoxV2,
    release_QStyleOptionToolBoxV2,
    cast_QStyleOptionToolBoxV2,
    0,
    0,
    0
},
    0,
    0,
    0
};