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

#line 41 "sip/QtGui/qsizepolicy.sip"
#include <qsizepolicy.h>
#line 39 "sipQtGuiQSizePolicyControlTypes.cpp"

#line 41 "sip/QtGui/qsizepolicy.sip"
#include <qsizepolicy.h>
#line 43 "sipQtGuiQSizePolicyControlTypes.cpp"


extern "C" {static int slot_QSizePolicy_ControlTypes___bool__(PyObject *sipSelf);}
static int slot_QSizePolicy_ControlTypes___bool__(PyObject *sipSelf)
{
    QSizePolicy::ControlTypes *sipCpp = reinterpret_cast<QSizePolicy::ControlTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy_ControlTypes));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 319 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 61 "sipQtGuiQSizePolicyControlTypes.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QSizePolicy_ControlTypes___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSizePolicy::ControlTypes *sipCpp = reinterpret_cast<QSizePolicy::ControlTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy_ControlTypes));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QSizePolicy::ControlTypes * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QSizePolicy_ControlTypes,&a0,&a0State))
        {
            bool sipRes = 0;

#line 314 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 89 "sipQtGuiQSizePolicyControlTypes.cpp"

            sipReleaseType(const_cast<QSizePolicy::ControlTypes *>(a0),sipType_QSizePolicy_ControlTypes,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QSizePolicy_ControlTypes,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QSizePolicy_ControlTypes___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSizePolicy::ControlTypes *sipCpp = reinterpret_cast<QSizePolicy::ControlTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy_ControlTypes));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QSizePolicy::ControlTypes * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QSizePolicy_ControlTypes,&a0,&a0State))
        {
            bool sipRes = 0;

#line 309 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 121 "sipQtGuiQSizePolicyControlTypes.cpp"

            sipReleaseType(const_cast<QSizePolicy::ControlTypes *>(a0),sipType_QSizePolicy_ControlTypes,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QSizePolicy_ControlTypes,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___invert__(PyObject *sipSelf);}
static PyObject *slot_QSizePolicy_ControlTypes___invert__(PyObject *sipSelf)
{
    QSizePolicy::ControlTypes *sipCpp = reinterpret_cast<QSizePolicy::ControlTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy_ControlTypes));

    if (!sipCpp)
        return 0;


    {
        {
            QSizePolicy::ControlTypes *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSizePolicy::ControlTypes(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSizePolicy_ControlTypes,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___and__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QSizePolicy_ControlTypes___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        QSizePolicy::ControlTypes * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1i",sipType_QSizePolicy_ControlTypes,&a0,&a0State,&a1))
        {
            QSizePolicy::ControlTypes *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSizePolicy::ControlTypes((*a0 & a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QSizePolicy_ControlTypes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSizePolicy_ControlTypes,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___xor__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QSizePolicy_ControlTypes___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        QSizePolicy::ControlTypes * a0;
        int a0State = 0;
        QSizePolicy::ControlTypes * a1;
        int a1State = 0;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1J1",sipType_QSizePolicy_ControlTypes,&a0,&a0State,sipType_QSizePolicy_ControlTypes,&a1,&a1State))
        {
            QSizePolicy::ControlTypes *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSizePolicy::ControlTypes((*a0 ^ *a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QSizePolicy_ControlTypes,a0State);
            sipReleaseType(a1,sipType_QSizePolicy_ControlTypes,a1State);

            return sipConvertFromNewType(sipRes,sipType_QSizePolicy_ControlTypes,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___or__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QSizePolicy_ControlTypes___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        QSizePolicy::ControlTypes * a0;
        int a0State = 0;
        QSizePolicy::ControlTypes * a1;
        int a1State = 0;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1J1",sipType_QSizePolicy_ControlTypes,&a0,&a0State,sipType_QSizePolicy_ControlTypes,&a1,&a1State))
        {
            QSizePolicy::ControlTypes *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSizePolicy::ControlTypes((*a0 | *a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QSizePolicy_ControlTypes,a0State);
            sipReleaseType(a1,sipType_QSizePolicy_ControlTypes,a1State);

            return sipConvertFromNewType(sipRes,sipType_QSizePolicy_ControlTypes,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___int__(PyObject *sipSelf);}
static PyObject *slot_QSizePolicy_ControlTypes___int__(PyObject *sipSelf)
{
    QSizePolicy::ControlTypes *sipCpp = reinterpret_cast<QSizePolicy::ControlTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy_ControlTypes));

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


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___ixor__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QSizePolicy_ControlTypes___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSizePolicy_ControlTypes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSizePolicy::ControlTypes *sipCpp = reinterpret_cast<QSizePolicy::ControlTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy_ControlTypes));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        QSizePolicy::ControlTypes * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QSizePolicy_ControlTypes,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QSizePolicy::ControlTypes::operator^=(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QSizePolicy_ControlTypes,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___ior__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QSizePolicy_ControlTypes___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSizePolicy_ControlTypes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSizePolicy::ControlTypes *sipCpp = reinterpret_cast<QSizePolicy::ControlTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy_ControlTypes));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        QSizePolicy::ControlTypes * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QSizePolicy_ControlTypes,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QSizePolicy::ControlTypes::operator|=(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QSizePolicy_ControlTypes,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___iand__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QSizePolicy_ControlTypes___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSizePolicy_ControlTypes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSizePolicy::ControlTypes *sipCpp = reinterpret_cast<QSizePolicy::ControlTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy_ControlTypes));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        int a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1i",&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QSizePolicy::ControlTypes::operator&=(a0);
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
extern "C" {static void *cast_QSizePolicy_ControlTypes(void *, const sipTypeDef *);}
static void *cast_QSizePolicy_ControlTypes(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSizePolicy_ControlTypes)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSizePolicy_ControlTypes(void *, int);}
static void release_QSizePolicy_ControlTypes(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QSizePolicy::ControlTypes *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QSizePolicy_ControlTypes(void *, SIP_SSIZE_T, const void *);}
static void assign_QSizePolicy_ControlTypes(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSizePolicy::ControlTypes *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSizePolicy::ControlTypes *>(sipSrc);
}


extern "C" {static void *array_QSizePolicy_ControlTypes(SIP_SSIZE_T);}
static void *array_QSizePolicy_ControlTypes(SIP_SSIZE_T sipNrElem)
{
    return new QSizePolicy::ControlTypes[sipNrElem];
}


extern "C" {static void *copy_QSizePolicy_ControlTypes(const void *, SIP_SSIZE_T);}
static void *copy_QSizePolicy_ControlTypes(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSizePolicy::ControlTypes(reinterpret_cast<const QSizePolicy::ControlTypes *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSizePolicy_ControlTypes(sipSimpleWrapper *);}
static void dealloc_QSizePolicy_ControlTypes(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSizePolicy_ControlTypes(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QSizePolicy_ControlTypes(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QSizePolicy_ControlTypes(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QSizePolicy::ControlTypes *sipCpp = 0;

    if (!sipCpp)
    {
        const QSizePolicy::ControlTypes * a0;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1",sipType_QSizePolicy_ControlTypes,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSizePolicy::ControlTypes(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QSizePolicy::ControlTypes *>(a0),sipType_QSizePolicy_ControlTypes,a0State);
        }
    }

    if (!sipCpp)
    {
        int a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"i",&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSizePolicy::ControlTypes(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSizePolicy::ControlTypes();
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


extern "C" {static int convertTo_QSizePolicy_ControlTypes(PyObject *, void **, int *, PyObject *);}
static int convertTo_QSizePolicy_ControlTypes(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QSizePolicy::ControlTypes **sipCppPtr = reinterpret_cast<QSizePolicy::ControlTypes **>(sipCppPtrV);

#line 324 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QSizePolicy::ControlTypes is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSizePolicy_ControlType)) ||
            sipCanConvertToType(sipPy, sipType_QSizePolicy_ControlTypes, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSizePolicy_ControlType)))
{
    *sipCppPtr = new QSizePolicy::ControlTypes(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QSizePolicy::ControlTypes *>(sipConvertToType(sipPy, sipType_QSizePolicy_ControlTypes, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 506 "sipQtGuiQSizePolicyControlTypes.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSizePolicy_ControlTypes[] = {
    {(void *)slot_QSizePolicy_ControlTypes___bool__, bool_slot},
    {(void *)slot_QSizePolicy_ControlTypes___ne__, ne_slot},
    {(void *)slot_QSizePolicy_ControlTypes___eq__, eq_slot},
    {(void *)slot_QSizePolicy_ControlTypes___invert__, invert_slot},
    {(void *)slot_QSizePolicy_ControlTypes___and__, and_slot},
    {(void *)slot_QSizePolicy_ControlTypes___xor__, xor_slot},
    {(void *)slot_QSizePolicy_ControlTypes___or__, or_slot},
    {(void *)slot_QSizePolicy_ControlTypes___int__, int_slot},
    {(void *)slot_QSizePolicy_ControlTypes___ixor__, ixor_slot},
    {(void *)slot_QSizePolicy_ControlTypes___ior__, ior_slot},
    {(void *)slot_QSizePolicy_ControlTypes___iand__, iand_slot},
    {0, (sipPySlotType)0}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QSizePolicy_ControlTypes = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QSizePolicy__ControlTypes,
        {0}
    },
    {
        sipNameNr_ControlTypes,
        {393, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSizePolicy_ControlTypes,
    init_QSizePolicy_ControlTypes,
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
    dealloc_QSizePolicy_ControlTypes,
    assign_QSizePolicy_ControlTypes,
    array_QSizePolicy_ControlTypes,
    copy_QSizePolicy_ControlTypes,
    release_QSizePolicy_ControlTypes,
    cast_QSizePolicy_ControlTypes,
    convertTo_QSizePolicy_ControlTypes,
    0,
    0
},
    0,
    1,
    0
};