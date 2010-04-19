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

#line 41 "sip/QtGui/qfiledialog.sip"
#include <qfiledialog.h>
#line 39 "sipQtGuiQFileDialogOptions.cpp"

#line 41 "sip/QtGui/qfiledialog.sip"
#include <qfiledialog.h>
#line 43 "sipQtGuiQFileDialogOptions.cpp"


extern "C" {static int slot_QFileDialog_Options___bool__(PyObject *sipSelf);}
static int slot_QFileDialog_Options___bool__(PyObject *sipSelf)
{
    QFileDialog::Options *sipCpp = reinterpret_cast<QFileDialog::Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDialog_Options));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 319 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 61 "sipQtGuiQFileDialogOptions.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QFileDialog_Options___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QFileDialog_Options___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QFileDialog::Options *sipCpp = reinterpret_cast<QFileDialog::Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDialog_Options));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QFileDialog::Options * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QFileDialog_Options,&a0,&a0State))
        {
            bool sipRes = 0;

#line 314 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 89 "sipQtGuiQFileDialogOptions.cpp"

            sipReleaseType(const_cast<QFileDialog::Options *>(a0),sipType_QFileDialog_Options,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QFileDialog_Options,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QFileDialog_Options___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QFileDialog_Options___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QFileDialog::Options *sipCpp = reinterpret_cast<QFileDialog::Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDialog_Options));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QFileDialog::Options * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QFileDialog_Options,&a0,&a0State))
        {
            bool sipRes = 0;

#line 309 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 121 "sipQtGuiQFileDialogOptions.cpp"

            sipReleaseType(const_cast<QFileDialog::Options *>(a0),sipType_QFileDialog_Options,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QFileDialog_Options,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QFileDialog_Options___invert__(PyObject *sipSelf);}
static PyObject *slot_QFileDialog_Options___invert__(PyObject *sipSelf)
{
    QFileDialog::Options *sipCpp = reinterpret_cast<QFileDialog::Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDialog_Options));

    if (!sipCpp)
        return 0;


    {
        {
            QFileDialog::Options *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QFileDialog::Options(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QFileDialog_Options,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QFileDialog_Options___and__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QFileDialog_Options___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        QFileDialog::Options * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1i",sipType_QFileDialog_Options,&a0,&a0State,&a1))
        {
            QFileDialog::Options *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QFileDialog::Options((*a0 & a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QFileDialog_Options,a0State);

            return sipConvertFromNewType(sipRes,sipType_QFileDialog_Options,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QFileDialog_Options___xor__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QFileDialog_Options___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        QFileDialog::Options * a0;
        int a0State = 0;
        QFileDialog::Options * a1;
        int a1State = 0;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1J1",sipType_QFileDialog_Options,&a0,&a0State,sipType_QFileDialog_Options,&a1,&a1State))
        {
            QFileDialog::Options *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QFileDialog::Options((*a0 ^ *a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QFileDialog_Options,a0State);
            sipReleaseType(a1,sipType_QFileDialog_Options,a1State);

            return sipConvertFromNewType(sipRes,sipType_QFileDialog_Options,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QFileDialog_Options___or__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QFileDialog_Options___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        QFileDialog::Options * a0;
        int a0State = 0;
        QFileDialog::Options * a1;
        int a1State = 0;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1J1",sipType_QFileDialog_Options,&a0,&a0State,sipType_QFileDialog_Options,&a1,&a1State))
        {
            QFileDialog::Options *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QFileDialog::Options((*a0 | *a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QFileDialog_Options,a0State);
            sipReleaseType(a1,sipType_QFileDialog_Options,a1State);

            return sipConvertFromNewType(sipRes,sipType_QFileDialog_Options,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QFileDialog_Options___int__(PyObject *sipSelf);}
static PyObject *slot_QFileDialog_Options___int__(PyObject *sipSelf)
{
    QFileDialog::Options *sipCpp = reinterpret_cast<QFileDialog::Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDialog_Options));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }
}


extern "C" {static PyObject *slot_QFileDialog_Options___ixor__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QFileDialog_Options___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QFileDialog_Options)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QFileDialog::Options *sipCpp = reinterpret_cast<QFileDialog::Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDialog_Options));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        QFileDialog::Options * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QFileDialog_Options,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QFileDialog::Options::operator^=(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QFileDialog_Options,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QFileDialog_Options___ior__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QFileDialog_Options___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QFileDialog_Options)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QFileDialog::Options *sipCpp = reinterpret_cast<QFileDialog::Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDialog_Options));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        QFileDialog::Options * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QFileDialog_Options,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QFileDialog::Options::operator|=(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QFileDialog_Options,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QFileDialog_Options___iand__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QFileDialog_Options___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QFileDialog_Options)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QFileDialog::Options *sipCpp = reinterpret_cast<QFileDialog::Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFileDialog_Options));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        int a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1i",&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QFileDialog::Options::operator&=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QFileDialog_Options(void *, const sipTypeDef *);}
static void *cast_QFileDialog_Options(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QFileDialog_Options)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QFileDialog_Options(void *, int);}
static void release_QFileDialog_Options(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QFileDialog::Options *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QFileDialog_Options(void *, SIP_SSIZE_T, const void *);}
static void assign_QFileDialog_Options(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QFileDialog::Options *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QFileDialog::Options *>(sipSrc);
}


extern "C" {static void *array_QFileDialog_Options(SIP_SSIZE_T);}
static void *array_QFileDialog_Options(SIP_SSIZE_T sipNrElem)
{
    return new QFileDialog::Options[sipNrElem];
}


extern "C" {static void *copy_QFileDialog_Options(const void *, SIP_SSIZE_T);}
static void *copy_QFileDialog_Options(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QFileDialog::Options(reinterpret_cast<const QFileDialog::Options *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QFileDialog_Options(sipSimpleWrapper *);}
static void dealloc_QFileDialog_Options(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QFileDialog_Options(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QFileDialog_Options(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QFileDialog_Options(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QFileDialog::Options *sipCpp = 0;

    if (!sipCpp)
    {
        const QFileDialog::Options * a0;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1",sipType_QFileDialog_Options,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QFileDialog::Options(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QFileDialog::Options *>(a0),sipType_QFileDialog_Options,a0State);
        }
    }

    if (!sipCpp)
    {
        int a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"i",&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QFileDialog::Options(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QFileDialog::Options();
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


extern "C" {static int convertTo_QFileDialog_Options(PyObject *, void **, int *, PyObject *);}
static int convertTo_QFileDialog_Options(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QFileDialog::Options **sipCppPtr = reinterpret_cast<QFileDialog::Options **>(sipCppPtrV);

#line 324 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QFileDialog::Options is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QFileDialog_Option)) ||
            sipCanConvertToType(sipPy, sipType_QFileDialog_Options, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QFileDialog_Option)))
{
    *sipCppPtr = new QFileDialog::Options(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QFileDialog::Options *>(sipConvertToType(sipPy, sipType_QFileDialog_Options, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 506 "sipQtGuiQFileDialogOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QFileDialog_Options[] = {
    {(void *)slot_QFileDialog_Options___bool__, bool_slot},
    {(void *)slot_QFileDialog_Options___ne__, ne_slot},
    {(void *)slot_QFileDialog_Options___eq__, eq_slot},
    {(void *)slot_QFileDialog_Options___invert__, invert_slot},
    {(void *)slot_QFileDialog_Options___and__, and_slot},
    {(void *)slot_QFileDialog_Options___xor__, xor_slot},
    {(void *)slot_QFileDialog_Options___or__, or_slot},
    {(void *)slot_QFileDialog_Options___int__, int_slot},
    {(void *)slot_QFileDialog_Options___ixor__, ixor_slot},
    {(void *)slot_QFileDialog_Options___ior__, ior_slot},
    {(void *)slot_QFileDialog_Options___iand__, iand_slot},
    {0, (sipPySlotType)0}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QFileDialog_Options = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QFileDialog__Options,
        {0}
    },
    {
        sipNameNr_Options,
        {102, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QFileDialog_Options,
    init_QFileDialog_Options,
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
    dealloc_QFileDialog_Options,
    assign_QFileDialog_Options,
    array_QFileDialog_Options,
    copy_QFileDialog_Options,
    release_QFileDialog_Options,
    cast_QFileDialog_Options,
    convertTo_QFileDialog_Options,
    0,
    0
},
    0,
    1,
    0
};