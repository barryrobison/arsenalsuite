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

#line 1132 "sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 39 "sipQtGuiQStyleOptionToolButton.cpp"

#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 43 "sipQtGuiQStyleOptionToolButton.cpp"
#line 1132 "sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 46 "sipQtGuiQStyleOptionToolButton.cpp"
#line 41 "sip/QtGui/qfont.sip"
#include <qfont.h>
#line 49 "sipQtGuiQStyleOptionToolButton.cpp"
#line 41 "sip/QtGui/qicon.sip"
#include <qicon.h>
#line 52 "sipQtGuiQStyleOptionToolButton.cpp"
#line 41 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 55 "sipQtGuiQStyleOptionToolButton.cpp"
#line 41 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 58 "sipQtGuiQStyleOptionToolButton.cpp"
#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 61 "sipQtGuiQStyleOptionToolButton.cpp"
#line 41 "sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 64 "sipQtGuiQStyleOptionToolButton.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionToolButton(void *, const sipTypeDef *);}
static void *cast_QStyleOptionToolButton(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionToolButton)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOptionComplex)->ctd_cast((QStyleOptionComplex *)(QStyleOptionToolButton *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionToolButton(void *, int);}
static void release_QStyleOptionToolButton(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionToolButton *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionToolButton(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionToolButton(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionToolButton *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionToolButton *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionToolButton(SIP_SSIZE_T);}
static void *array_QStyleOptionToolButton(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionToolButton[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionToolButton(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionToolButton(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionToolButton(reinterpret_cast<const QStyleOptionToolButton *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionToolButton(sipSimpleWrapper *);}
static void dealloc_QStyleOptionToolButton(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionToolButton(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QStyleOptionToolButton(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QStyleOptionToolButton(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QStyleOptionToolButton *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionToolButton();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QStyleOptionToolButton * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QStyleOptionToolButton,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionToolButton(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionToolButton[] = {{452, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionToolButton[] = {
    {sipName_Arrow, QStyleOptionToolButton::Arrow, 545},
    {sipName_HasMenu, QStyleOptionToolButton::HasMenu, 545},
    {sipName_Menu, QStyleOptionToolButton::Menu, 545},
    {sipName_MenuButtonPopup, QStyleOptionToolButton::MenuButtonPopup, 545},
    {sipName_None, QStyleOptionToolButton::None, 545},
    {sipName_PopupDelay, QStyleOptionToolButton::PopupDelay, 545},
    {sipName_Type, QStyleOptionToolButton::Type, 543},
    {sipName_Version, QStyleOptionToolButton::Version, 544},
};


extern "C" {static PyObject *varget_QStyleOptionToolButton_arrowType(void *, PyObject *);}
static PyObject *varget_QStyleOptionToolButton_arrowType(void *sipSelf, PyObject *)
{
    Qt::ArrowType sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    sipVal = sipCpp->arrowType;

    return sipConvertFromEnum(sipVal, sipType_Qt_ArrowType);
}


extern "C" {static int varset_QStyleOptionToolButton_arrowType(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolButton_arrowType(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::ArrowType sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    sipVal = (Qt::ArrowType)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->arrowType = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolButton_features(void *, PyObject *);}
static PyObject *varget_QStyleOptionToolButton_features(void *sipSelf, PyObject *)
{
    QStyleOptionToolButton::ToolButtonFeatures *sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    sipVal = &sipCpp->features;

    return sipConvertFromType(sipVal,sipType_QStyleOptionToolButton_ToolButtonFeatures, NULL);
}


extern "C" {static int varset_QStyleOptionToolButton_features(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolButton_features(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionToolButton::ToolButtonFeatures *sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures *>(sipForceConvertToType(sipPy,sipType_QStyleOptionToolButton_ToolButtonFeatures,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->features = *sipVal;

    sipReleaseType(sipVal, sipType_QStyleOptionToolButton_ToolButtonFeatures, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolButton_font(void *, PyObject *);}
static PyObject *varget_QStyleOptionToolButton_font(void *sipSelf, PyObject *)
{
    QFont *sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    sipVal = &sipCpp->font;

    return sipConvertFromType(sipVal,sipType_QFont, NULL);
}


extern "C" {static int varset_QStyleOptionToolButton_font(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolButton_font(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QFont *sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QFont *>(sipForceConvertToType(sipPy,sipType_QFont,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->font = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolButton_icon(void *, PyObject *);}
static PyObject *varget_QStyleOptionToolButton_icon(void *sipSelf, PyObject *)
{
    QIcon *sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    sipVal = &sipCpp->icon;

    return sipConvertFromType(sipVal,sipType_QIcon, NULL);
}


extern "C" {static int varset_QStyleOptionToolButton_icon(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolButton_icon(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QIcon *sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QIcon *>(sipForceConvertToType(sipPy,sipType_QIcon,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->icon = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolButton_iconSize(void *, PyObject *);}
static PyObject *varget_QStyleOptionToolButton_iconSize(void *sipSelf, PyObject *)
{
    QSize *sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    sipVal = &sipCpp->iconSize;

    return sipConvertFromType(sipVal,sipType_QSize, NULL);
}


extern "C" {static int varset_QStyleOptionToolButton_iconSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolButton_iconSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QSize *sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QSize *>(sipForceConvertToType(sipPy,sipType_QSize,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->iconSize = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolButton_pos(void *, PyObject *);}
static PyObject *varget_QStyleOptionToolButton_pos(void *sipSelf, PyObject *)
{
    QPoint *sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    sipVal = &sipCpp->pos;

    return sipConvertFromType(sipVal,sipType_QPoint, NULL);
}


extern "C" {static int varset_QStyleOptionToolButton_pos(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolButton_pos(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QPoint *sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QPoint *>(sipForceConvertToType(sipPy,sipType_QPoint,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->pos = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolButton_text(void *, PyObject *);}
static PyObject *varget_QStyleOptionToolButton_text(void *sipSelf, PyObject *)
{
    QString *sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    sipVal = &sipCpp->text;

    return sipConvertFromType(sipVal,sipType_QString, NULL);
}


extern "C" {static int varset_QStyleOptionToolButton_text(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolButton_text(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString *sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->text = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolButton_toolButtonStyle(void *, PyObject *);}
static PyObject *varget_QStyleOptionToolButton_toolButtonStyle(void *sipSelf, PyObject *)
{
    Qt::ToolButtonStyle sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    sipVal = sipCpp->toolButtonStyle;

    return sipConvertFromEnum(sipVal, sipType_Qt_ToolButtonStyle);
}


extern "C" {static int varset_QStyleOptionToolButton_toolButtonStyle(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolButton_toolButtonStyle(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::ToolButtonStyle sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    sipVal = (Qt::ToolButtonStyle)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->toolButtonStyle = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionToolButton[] = {
    {sipName_arrowType, varget_QStyleOptionToolButton_arrowType, varset_QStyleOptionToolButton_arrowType, 0},
    {sipName_features, varget_QStyleOptionToolButton_features, varset_QStyleOptionToolButton_features, 0},
    {sipName_font, varget_QStyleOptionToolButton_font, varset_QStyleOptionToolButton_font, 0},
    {sipName_icon, varget_QStyleOptionToolButton_icon, varset_QStyleOptionToolButton_icon, 0},
    {sipName_iconSize, varget_QStyleOptionToolButton_iconSize, varset_QStyleOptionToolButton_iconSize, 0},
    {sipName_pos, varget_QStyleOptionToolButton_pos, varset_QStyleOptionToolButton_pos, 0},
    {sipName_text, varget_QStyleOptionToolButton_text, varset_QStyleOptionToolButton_text, 0},
    {sipName_toolButtonStyle, varget_QStyleOptionToolButton_toolButtonStyle, varset_QStyleOptionToolButton_toolButtonStyle, 0},
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionToolButton = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionToolButton,
        {0}
    },
    {
        sipNameNr_QStyleOptionToolButton,
        {0, 0, 1},
        0, 0,
        8, enummembers_QStyleOptionToolButton,
        8, variables_QStyleOptionToolButton,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QStyleOptionToolButton,
    0,
    init_QStyleOptionToolButton,
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
    dealloc_QStyleOptionToolButton,
    assign_QStyleOptionToolButton,
    array_QStyleOptionToolButton,
    copy_QStyleOptionToolButton,
    release_QStyleOptionToolButton,
    cast_QStyleOptionToolButton,
    0,
    0,
    0
},
    0,
    0,
    0
};