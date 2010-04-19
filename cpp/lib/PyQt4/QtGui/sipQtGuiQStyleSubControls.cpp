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

#line 41 "sip/QtGui/qstyle.sip"
#include <qstyle.h>
#line 39 "sipQtGuiQStyleSubControls.cpp"

#line 41 "sip/QtGui/qstyle.sip"
#include <qstyle.h>
#line 43 "sipQtGuiQStyleSubControls.cpp"


extern "C" {static int slot_QStyle_SubControls___bool__(PyObject *sipSelf);}
static int slot_QStyle_SubControls___bool__(PyObject *sipSelf)
{
    QStyle::SubControls *sipCpp = reinterpret_cast<QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 319 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 61 "sipQtGuiQStyleSubControls.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QStyle_SubControls___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QStyle_SubControls___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QStyle::SubControls *sipCpp = reinterpret_cast<QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QStyle::SubControls * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QStyle_SubControls,&a0,&a0State))
        {
            bool sipRes = 0;

#line 314 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 89 "sipQtGuiQStyleSubControls.cpp"

            sipReleaseType(const_cast<QStyle::SubControls *>(a0),sipType_QStyle_SubControls,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QStyle_SubControls,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStyle_SubControls___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QStyle_SubControls___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QStyle::SubControls *sipCpp = reinterpret_cast<QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QStyle::SubControls * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QStyle_SubControls,&a0,&a0State))
        {
            bool sipRes = 0;

#line 309 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 121 "sipQtGuiQStyleSubControls.cpp"

            sipReleaseType(const_cast<QStyle::SubControls *>(a0),sipType_QStyle_SubControls,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QStyle_SubControls,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStyle_SubControls___invert__(PyObject *sipSelf);}
static PyObject *slot_QStyle_SubControls___invert__(PyObject *sipSelf)
{
    QStyle::SubControls *sipCpp = reinterpret_cast<QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

    if (!sipCpp)
        return 0;


    {
        {
            QStyle::SubControls *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStyle::SubControls(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStyle_SubControls,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QStyle_SubControls___and__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QStyle_SubControls___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        QStyle::SubControls * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1i",sipType_QStyle_SubControls,&a0,&a0State,&a1))
        {
            QStyle::SubControls *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStyle::SubControls((*a0 & a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QStyle_SubControls,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyle_SubControls,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyle_SubControls___xor__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QStyle_SubControls___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        QStyle::SubControls * a0;
        int a0State = 0;
        QStyle::SubControls * a1;
        int a1State = 0;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1J1",sipType_QStyle_SubControls,&a0,&a0State,sipType_QStyle_SubControls,&a1,&a1State))
        {
            QStyle::SubControls *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStyle::SubControls((*a0 ^ *a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QStyle_SubControls,a0State);
            sipReleaseType(a1,sipType_QStyle_SubControls,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStyle_SubControls,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyle_SubControls___or__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QStyle_SubControls___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        QStyle::SubControls * a0;
        int a0State = 0;
        QStyle::SubControls * a1;
        int a1State = 0;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1J1",sipType_QStyle_SubControls,&a0,&a0State,sipType_QStyle_SubControls,&a1,&a1State))
        {
            QStyle::SubControls *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStyle::SubControls((*a0 | *a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QStyle_SubControls,a0State);
            sipReleaseType(a1,sipType_QStyle_SubControls,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStyle_SubControls,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyle_SubControls___int__(PyObject *sipSelf);}
static PyObject *slot_QStyle_SubControls___int__(PyObject *sipSelf)
{
    QStyle::SubControls *sipCpp = reinterpret_cast<QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

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


extern "C" {static PyObject *slot_QStyle_SubControls___ixor__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QStyle_SubControls___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyle_SubControls)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyle::SubControls *sipCpp = reinterpret_cast<QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        QStyle::SubControls * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QStyle_SubControls,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QStyle::SubControls::operator^=(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QStyle_SubControls,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QStyle_SubControls___ior__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QStyle_SubControls___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyle_SubControls)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyle::SubControls *sipCpp = reinterpret_cast<QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        QStyle::SubControls * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QStyle_SubControls,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QStyle::SubControls::operator|=(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QStyle_SubControls,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QStyle_SubControls___iand__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QStyle_SubControls___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyle_SubControls)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyle::SubControls *sipCpp = reinterpret_cast<QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        int a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1i",&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QStyle::SubControls::operator&=(a0);
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
extern "C" {static void *cast_QStyle_SubControls(void *, const sipTypeDef *);}
static void *cast_QStyle_SubControls(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QStyle_SubControls)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyle_SubControls(void *, int);}
static void release_QStyle_SubControls(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyle::SubControls *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyle_SubControls(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyle_SubControls(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyle::SubControls *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyle::SubControls *>(sipSrc);
}


extern "C" {static void *array_QStyle_SubControls(SIP_SSIZE_T);}
static void *array_QStyle_SubControls(SIP_SSIZE_T sipNrElem)
{
    return new QStyle::SubControls[sipNrElem];
}


extern "C" {static void *copy_QStyle_SubControls(const void *, SIP_SSIZE_T);}
static void *copy_QStyle_SubControls(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyle::SubControls(reinterpret_cast<const QStyle::SubControls *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyle_SubControls(sipSimpleWrapper *);}
static void dealloc_QStyle_SubControls(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyle_SubControls(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QStyle_SubControls(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QStyle_SubControls(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QStyle::SubControls *sipCpp = 0;

    if (!sipCpp)
    {
        const QStyle::SubControls * a0;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1",sipType_QStyle_SubControls,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyle::SubControls(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QStyle::SubControls *>(a0),sipType_QStyle_SubControls,a0State);
        }
    }

    if (!sipCpp)
    {
        int a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"i",&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyle::SubControls(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyle::SubControls();
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


extern "C" {static int convertTo_QStyle_SubControls(PyObject *, void **, int *, PyObject *);}
static int convertTo_QStyle_SubControls(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QStyle::SubControls **sipCppPtr = reinterpret_cast<QStyle::SubControls **>(sipCppPtrV);

#line 324 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QStyle::SubControls is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyle_SubControl)) ||
            sipCanConvertToType(sipPy, sipType_QStyle_SubControls, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyle_SubControl)))
{
    *sipCppPtr = new QStyle::SubControls(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QStyle::SubControls *>(sipConvertToType(sipPy, sipType_QStyle_SubControls, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 506 "sipQtGuiQStyleSubControls.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QStyle_SubControls[] = {
    {(void *)slot_QStyle_SubControls___bool__, bool_slot},
    {(void *)slot_QStyle_SubControls___ne__, ne_slot},
    {(void *)slot_QStyle_SubControls___eq__, eq_slot},
    {(void *)slot_QStyle_SubControls___invert__, invert_slot},
    {(void *)slot_QStyle_SubControls___and__, and_slot},
    {(void *)slot_QStyle_SubControls___xor__, xor_slot},
    {(void *)slot_QStyle_SubControls___or__, or_slot},
    {(void *)slot_QStyle_SubControls___int__, int_slot},
    {(void *)slot_QStyle_SubControls___ixor__, ixor_slot},
    {(void *)slot_QStyle_SubControls___ior__, ior_slot},
    {(void *)slot_QStyle_SubControls___iand__, iand_slot},
    {0, (sipPySlotType)0}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyle_SubControls = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QStyle__SubControls,
        {0}
    },
    {
        sipNameNr_SubControls,
        {416, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QStyle_SubControls,
    init_QStyle_SubControls,
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
    dealloc_QStyle_SubControls,
    assign_QStyle_SubControls,
    array_QStyle_SubControls,
    copy_QStyle_SubControls,
    release_QStyle_SubControls,
    cast_QStyle_SubControls,
    convertTo_QStyle_SubControls,
    0,
    0
},
    0,
    1,
    0
};