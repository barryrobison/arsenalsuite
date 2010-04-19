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

#line 69 "sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 39 "sipQtGuiQPaintEnginePaintEngineFeatures.cpp"

#line 69 "sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 43 "sipQtGuiQPaintEnginePaintEngineFeatures.cpp"


extern "C" {static int slot_QPaintEngine_PaintEngineFeatures___bool__(PyObject *sipSelf);}
static int slot_QPaintEngine_PaintEngineFeatures___bool__(PyObject *sipSelf)
{
    QPaintEngine::PaintEngineFeatures *sipCpp = reinterpret_cast<QPaintEngine::PaintEngineFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPaintEngine_PaintEngineFeatures));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 319 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 61 "sipQtGuiQPaintEnginePaintEngineFeatures.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QPaintEngine_PaintEngineFeatures___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QPaintEngine_PaintEngineFeatures___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QPaintEngine::PaintEngineFeatures *sipCpp = reinterpret_cast<QPaintEngine::PaintEngineFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPaintEngine_PaintEngineFeatures));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QPaintEngine::PaintEngineFeatures * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QPaintEngine_PaintEngineFeatures,&a0,&a0State))
        {
            bool sipRes = 0;

#line 314 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 89 "sipQtGuiQPaintEnginePaintEngineFeatures.cpp"

            sipReleaseType(const_cast<QPaintEngine::PaintEngineFeatures *>(a0),sipType_QPaintEngine_PaintEngineFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QPaintEngine_PaintEngineFeatures,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QPaintEngine_PaintEngineFeatures___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QPaintEngine_PaintEngineFeatures___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QPaintEngine::PaintEngineFeatures *sipCpp = reinterpret_cast<QPaintEngine::PaintEngineFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPaintEngine_PaintEngineFeatures));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QPaintEngine::PaintEngineFeatures * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QPaintEngine_PaintEngineFeatures,&a0,&a0State))
        {
            bool sipRes = 0;

#line 309 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 121 "sipQtGuiQPaintEnginePaintEngineFeatures.cpp"

            sipReleaseType(const_cast<QPaintEngine::PaintEngineFeatures *>(a0),sipType_QPaintEngine_PaintEngineFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QPaintEngine_PaintEngineFeatures,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QPaintEngine_PaintEngineFeatures___invert__(PyObject *sipSelf);}
static PyObject *slot_QPaintEngine_PaintEngineFeatures___invert__(PyObject *sipSelf)
{
    QPaintEngine::PaintEngineFeatures *sipCpp = reinterpret_cast<QPaintEngine::PaintEngineFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPaintEngine_PaintEngineFeatures));

    if (!sipCpp)
        return 0;


    {
        {
            QPaintEngine::PaintEngineFeatures *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPaintEngine::PaintEngineFeatures(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPaintEngine_PaintEngineFeatures,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QPaintEngine_PaintEngineFeatures___and__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QPaintEngine_PaintEngineFeatures___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        QPaintEngine::PaintEngineFeatures * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1i",sipType_QPaintEngine_PaintEngineFeatures,&a0,&a0State,&a1))
        {
            QPaintEngine::PaintEngineFeatures *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPaintEngine::PaintEngineFeatures((*a0 & a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QPaintEngine_PaintEngineFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPaintEngine_PaintEngineFeatures,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QPaintEngine_PaintEngineFeatures___xor__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QPaintEngine_PaintEngineFeatures___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        QPaintEngine::PaintEngineFeatures * a0;
        int a0State = 0;
        QPaintEngine::PaintEngineFeatures * a1;
        int a1State = 0;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1J1",sipType_QPaintEngine_PaintEngineFeatures,&a0,&a0State,sipType_QPaintEngine_PaintEngineFeatures,&a1,&a1State))
        {
            QPaintEngine::PaintEngineFeatures *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPaintEngine::PaintEngineFeatures((*a0 ^ *a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QPaintEngine_PaintEngineFeatures,a0State);
            sipReleaseType(a1,sipType_QPaintEngine_PaintEngineFeatures,a1State);

            return sipConvertFromNewType(sipRes,sipType_QPaintEngine_PaintEngineFeatures,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QPaintEngine_PaintEngineFeatures___or__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QPaintEngine_PaintEngineFeatures___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        QPaintEngine::PaintEngineFeatures * a0;
        int a0State = 0;
        QPaintEngine::PaintEngineFeatures * a1;
        int a1State = 0;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1J1",sipType_QPaintEngine_PaintEngineFeatures,&a0,&a0State,sipType_QPaintEngine_PaintEngineFeatures,&a1,&a1State))
        {
            QPaintEngine::PaintEngineFeatures *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPaintEngine::PaintEngineFeatures((*a0 | *a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QPaintEngine_PaintEngineFeatures,a0State);
            sipReleaseType(a1,sipType_QPaintEngine_PaintEngineFeatures,a1State);

            return sipConvertFromNewType(sipRes,sipType_QPaintEngine_PaintEngineFeatures,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QPaintEngine_PaintEngineFeatures___int__(PyObject *sipSelf);}
static PyObject *slot_QPaintEngine_PaintEngineFeatures___int__(PyObject *sipSelf)
{
    QPaintEngine::PaintEngineFeatures *sipCpp = reinterpret_cast<QPaintEngine::PaintEngineFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPaintEngine_PaintEngineFeatures));

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


extern "C" {static PyObject *slot_QPaintEngine_PaintEngineFeatures___ixor__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QPaintEngine_PaintEngineFeatures___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPaintEngine_PaintEngineFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QPaintEngine::PaintEngineFeatures *sipCpp = reinterpret_cast<QPaintEngine::PaintEngineFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPaintEngine_PaintEngineFeatures));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        QPaintEngine::PaintEngineFeatures * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QPaintEngine_PaintEngineFeatures,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QPaintEngine::PaintEngineFeatures::operator^=(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QPaintEngine_PaintEngineFeatures,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QPaintEngine_PaintEngineFeatures___ior__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QPaintEngine_PaintEngineFeatures___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPaintEngine_PaintEngineFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QPaintEngine::PaintEngineFeatures *sipCpp = reinterpret_cast<QPaintEngine::PaintEngineFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPaintEngine_PaintEngineFeatures));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        QPaintEngine::PaintEngineFeatures * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QPaintEngine_PaintEngineFeatures,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QPaintEngine::PaintEngineFeatures::operator|=(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QPaintEngine_PaintEngineFeatures,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QPaintEngine_PaintEngineFeatures___iand__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QPaintEngine_PaintEngineFeatures___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPaintEngine_PaintEngineFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QPaintEngine::PaintEngineFeatures *sipCpp = reinterpret_cast<QPaintEngine::PaintEngineFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPaintEngine_PaintEngineFeatures));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        int a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1i",&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QPaintEngine::PaintEngineFeatures::operator&=(a0);
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
extern "C" {static void *cast_QPaintEngine_PaintEngineFeatures(void *, const sipTypeDef *);}
static void *cast_QPaintEngine_PaintEngineFeatures(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QPaintEngine_PaintEngineFeatures)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPaintEngine_PaintEngineFeatures(void *, int);}
static void release_QPaintEngine_PaintEngineFeatures(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QPaintEngine::PaintEngineFeatures *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QPaintEngine_PaintEngineFeatures(void *, SIP_SSIZE_T, const void *);}
static void assign_QPaintEngine_PaintEngineFeatures(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPaintEngine::PaintEngineFeatures *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPaintEngine::PaintEngineFeatures *>(sipSrc);
}


extern "C" {static void *array_QPaintEngine_PaintEngineFeatures(SIP_SSIZE_T);}
static void *array_QPaintEngine_PaintEngineFeatures(SIP_SSIZE_T sipNrElem)
{
    return new QPaintEngine::PaintEngineFeatures[sipNrElem];
}


extern "C" {static void *copy_QPaintEngine_PaintEngineFeatures(const void *, SIP_SSIZE_T);}
static void *copy_QPaintEngine_PaintEngineFeatures(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPaintEngine::PaintEngineFeatures(reinterpret_cast<const QPaintEngine::PaintEngineFeatures *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPaintEngine_PaintEngineFeatures(sipSimpleWrapper *);}
static void dealloc_QPaintEngine_PaintEngineFeatures(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QPaintEngine_PaintEngineFeatures(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QPaintEngine_PaintEngineFeatures(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QPaintEngine_PaintEngineFeatures(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QPaintEngine::PaintEngineFeatures *sipCpp = 0;

    if (!sipCpp)
    {
        const QPaintEngine::PaintEngineFeatures * a0;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1",sipType_QPaintEngine_PaintEngineFeatures,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QPaintEngine::PaintEngineFeatures(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QPaintEngine::PaintEngineFeatures *>(a0),sipType_QPaintEngine_PaintEngineFeatures,a0State);
        }
    }

    if (!sipCpp)
    {
        int a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"i",&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QPaintEngine::PaintEngineFeatures(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QPaintEngine::PaintEngineFeatures();
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


extern "C" {static int convertTo_QPaintEngine_PaintEngineFeatures(PyObject *, void **, int *, PyObject *);}
static int convertTo_QPaintEngine_PaintEngineFeatures(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QPaintEngine::PaintEngineFeatures **sipCppPtr = reinterpret_cast<QPaintEngine::PaintEngineFeatures **>(sipCppPtrV);

#line 324 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QPaintEngine::PaintEngineFeatures is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QPaintEngine_PaintEngineFeature)) ||
            sipCanConvertToType(sipPy, sipType_QPaintEngine_PaintEngineFeatures, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QPaintEngine_PaintEngineFeature)))
{
    *sipCppPtr = new QPaintEngine::PaintEngineFeatures(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QPaintEngine::PaintEngineFeatures *>(sipConvertToType(sipPy, sipType_QPaintEngine_PaintEngineFeatures, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 506 "sipQtGuiQPaintEnginePaintEngineFeatures.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QPaintEngine_PaintEngineFeatures[] = {
    {(void *)slot_QPaintEngine_PaintEngineFeatures___bool__, bool_slot},
    {(void *)slot_QPaintEngine_PaintEngineFeatures___ne__, ne_slot},
    {(void *)slot_QPaintEngine_PaintEngineFeatures___eq__, eq_slot},
    {(void *)slot_QPaintEngine_PaintEngineFeatures___invert__, invert_slot},
    {(void *)slot_QPaintEngine_PaintEngineFeatures___and__, and_slot},
    {(void *)slot_QPaintEngine_PaintEngineFeatures___xor__, xor_slot},
    {(void *)slot_QPaintEngine_PaintEngineFeatures___or__, or_slot},
    {(void *)slot_QPaintEngine_PaintEngineFeatures___int__, int_slot},
    {(void *)slot_QPaintEngine_PaintEngineFeatures___ixor__, ixor_slot},
    {(void *)slot_QPaintEngine_PaintEngineFeatures___ior__, ior_slot},
    {(void *)slot_QPaintEngine_PaintEngineFeatures___iand__, iand_slot},
    {0, (sipPySlotType)0}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QPaintEngine_PaintEngineFeatures = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QPaintEngine__PaintEngineFeatures,
        {0}
    },
    {
        sipNameNr_PaintEngineFeatures,
        {320, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QPaintEngine_PaintEngineFeatures,
    init_QPaintEngine_PaintEngineFeatures,
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
    dealloc_QPaintEngine_PaintEngineFeatures,
    assign_QPaintEngine_PaintEngineFeatures,
    array_QPaintEngine_PaintEngineFeatures,
    copy_QPaintEngine_PaintEngineFeatures,
    release_QPaintEngine_PaintEngineFeatures,
    cast_QPaintEngine_PaintEngineFeatures,
    convertTo_QPaintEngine_PaintEngineFeatures,
    0,
    0
},
    0,
    1,
    0
};