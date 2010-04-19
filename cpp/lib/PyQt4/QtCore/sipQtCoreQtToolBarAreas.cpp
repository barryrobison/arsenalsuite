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

#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 39 "sipQtCoreQtToolBarAreas.cpp"

#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 43 "sipQtCoreQtToolBarAreas.cpp"


extern "C" {static int slot_Qt_ToolBarAreas___bool__(PyObject *sipSelf);}
static int slot_Qt_ToolBarAreas___bool__(PyObject *sipSelf)
{
    Qt::ToolBarAreas *sipCpp = reinterpret_cast<Qt::ToolBarAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ToolBarAreas));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 319 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 61 "sipQtCoreQtToolBarAreas.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_Qt_ToolBarAreas___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Qt_ToolBarAreas___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::ToolBarAreas *sipCpp = reinterpret_cast<Qt::ToolBarAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ToolBarAreas));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Qt::ToolBarAreas * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_Qt_ToolBarAreas,&a0,&a0State))
        {
            bool sipRes = 0;

#line 314 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 89 "sipQtCoreQtToolBarAreas.cpp"

            sipReleaseType(const_cast<Qt::ToolBarAreas *>(a0),sipType_Qt_ToolBarAreas,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_Qt_ToolBarAreas,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_ToolBarAreas___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Qt_ToolBarAreas___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::ToolBarAreas *sipCpp = reinterpret_cast<Qt::ToolBarAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ToolBarAreas));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Qt::ToolBarAreas * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_Qt_ToolBarAreas,&a0,&a0State))
        {
            bool sipRes = 0;

#line 309 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 121 "sipQtCoreQtToolBarAreas.cpp"

            sipReleaseType(const_cast<Qt::ToolBarAreas *>(a0),sipType_Qt_ToolBarAreas,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_Qt_ToolBarAreas,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_ToolBarAreas___invert__(PyObject *sipSelf);}
static PyObject *slot_Qt_ToolBarAreas___invert__(PyObject *sipSelf)
{
    Qt::ToolBarAreas *sipCpp = reinterpret_cast<Qt::ToolBarAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ToolBarAreas));

    if (!sipCpp)
        return 0;


    {
        {
            Qt::ToolBarAreas *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::ToolBarAreas(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_ToolBarAreas,NULL);
        }
    }
}


extern "C" {static PyObject *slot_Qt_ToolBarAreas___and__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_Qt_ToolBarAreas___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        Qt::ToolBarAreas * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1i",sipType_Qt_ToolBarAreas,&a0,&a0State,&a1))
        {
            Qt::ToolBarAreas *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::ToolBarAreas((*a0 & a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_Qt_ToolBarAreas,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ToolBarAreas,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_ToolBarAreas___xor__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_Qt_ToolBarAreas___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        Qt::ToolBarAreas * a0;
        int a0State = 0;
        Qt::ToolBarAreas * a1;
        int a1State = 0;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1J1",sipType_Qt_ToolBarAreas,&a0,&a0State,sipType_Qt_ToolBarAreas,&a1,&a1State))
        {
            Qt::ToolBarAreas *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::ToolBarAreas((*a0 ^ *a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_Qt_ToolBarAreas,a0State);
            sipReleaseType(a1,sipType_Qt_ToolBarAreas,a1State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ToolBarAreas,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_ToolBarAreas___or__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_Qt_ToolBarAreas___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        Qt::ToolBarAreas * a0;
        int a0State = 0;
        Qt::ToolBarAreas * a1;
        int a1State = 0;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1J1",sipType_Qt_ToolBarAreas,&a0,&a0State,sipType_Qt_ToolBarAreas,&a1,&a1State))
        {
            Qt::ToolBarAreas *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::ToolBarAreas((*a0 | *a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_Qt_ToolBarAreas,a0State);
            sipReleaseType(a1,sipType_Qt_ToolBarAreas,a1State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ToolBarAreas,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_ToolBarAreas___int__(PyObject *sipSelf);}
static PyObject *slot_Qt_ToolBarAreas___int__(PyObject *sipSelf)
{
    Qt::ToolBarAreas *sipCpp = reinterpret_cast<Qt::ToolBarAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ToolBarAreas));

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


extern "C" {static PyObject *slot_Qt_ToolBarAreas___ixor__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Qt_ToolBarAreas___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_ToolBarAreas)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::ToolBarAreas *sipCpp = reinterpret_cast<Qt::ToolBarAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ToolBarAreas));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Qt::ToolBarAreas * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_Qt_ToolBarAreas,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->Qt::ToolBarAreas::operator^=(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_Qt_ToolBarAreas,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_Qt_ToolBarAreas___ior__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Qt_ToolBarAreas___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_ToolBarAreas)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::ToolBarAreas *sipCpp = reinterpret_cast<Qt::ToolBarAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ToolBarAreas));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Qt::ToolBarAreas * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_Qt_ToolBarAreas,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->Qt::ToolBarAreas::operator|=(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_Qt_ToolBarAreas,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_Qt_ToolBarAreas___iand__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Qt_ToolBarAreas___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_ToolBarAreas)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::ToolBarAreas *sipCpp = reinterpret_cast<Qt::ToolBarAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ToolBarAreas));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        int a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1i",&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->Qt::ToolBarAreas::operator&=(a0);
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
extern "C" {static void *cast_Qt_ToolBarAreas(void *, const sipTypeDef *);}
static void *cast_Qt_ToolBarAreas(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_Qt_ToolBarAreas)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Qt_ToolBarAreas(void *, int);}
static void release_Qt_ToolBarAreas(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<Qt::ToolBarAreas *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_Qt_ToolBarAreas(void *, SIP_SSIZE_T, const void *);}
static void assign_Qt_ToolBarAreas(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<Qt::ToolBarAreas *>(sipDst)[sipDstIdx] = *reinterpret_cast<const Qt::ToolBarAreas *>(sipSrc);
}


extern "C" {static void *array_Qt_ToolBarAreas(SIP_SSIZE_T);}
static void *array_Qt_ToolBarAreas(SIP_SSIZE_T sipNrElem)
{
    return new Qt::ToolBarAreas[sipNrElem];
}


extern "C" {static void *copy_Qt_ToolBarAreas(const void *, SIP_SSIZE_T);}
static void *copy_Qt_ToolBarAreas(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new Qt::ToolBarAreas(reinterpret_cast<const Qt::ToolBarAreas *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_ToolBarAreas(sipSimpleWrapper *);}
static void dealloc_Qt_ToolBarAreas(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Qt_ToolBarAreas(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Qt_ToolBarAreas(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_Qt_ToolBarAreas(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    Qt::ToolBarAreas *sipCpp = 0;

    if (!sipCpp)
    {
        const Qt::ToolBarAreas * a0;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1",sipType_Qt_ToolBarAreas,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Qt::ToolBarAreas(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<Qt::ToolBarAreas *>(a0),sipType_Qt_ToolBarAreas,a0State);
        }
    }

    if (!sipCpp)
    {
        int a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"i",&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Qt::ToolBarAreas(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Qt::ToolBarAreas();
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


extern "C" {static int convertTo_Qt_ToolBarAreas(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_ToolBarAreas(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    Qt::ToolBarAreas **sipCppPtr = reinterpret_cast<Qt::ToolBarAreas **>(sipCppPtrV);

#line 324 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::ToolBarAreas is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_ToolBarArea)) ||
            sipCanConvertToType(sipPy, sipType_Qt_ToolBarAreas, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_ToolBarArea)))
{
    *sipCppPtr = new Qt::ToolBarAreas(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::ToolBarAreas *>(sipConvertToType(sipPy, sipType_Qt_ToolBarAreas, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 506 "sipQtCoreQtToolBarAreas.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_ToolBarAreas[] = {
    {(void *)slot_Qt_ToolBarAreas___bool__, bool_slot},
    {(void *)slot_Qt_ToolBarAreas___ne__, ne_slot},
    {(void *)slot_Qt_ToolBarAreas___eq__, eq_slot},
    {(void *)slot_Qt_ToolBarAreas___invert__, invert_slot},
    {(void *)slot_Qt_ToolBarAreas___and__, and_slot},
    {(void *)slot_Qt_ToolBarAreas___xor__, xor_slot},
    {(void *)slot_Qt_ToolBarAreas___or__, or_slot},
    {(void *)slot_Qt_ToolBarAreas___int__, int_slot},
    {(void *)slot_Qt_ToolBarAreas___ixor__, ixor_slot},
    {(void *)slot_Qt_ToolBarAreas___ior__, ior_slot},
    {(void *)slot_Qt_ToolBarAreas___iand__, iand_slot},
    {0, (sipPySlotType)0}
};


pyqt4ClassTypeDef sipTypeDef_QtCore_Qt_ToolBarAreas = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_Qt__ToolBarAreas,
        {0}
    },
    {
        sipNameNr_ToolBarAreas,
        {219, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Qt_ToolBarAreas,
    init_Qt_ToolBarAreas,
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
    dealloc_Qt_ToolBarAreas,
    assign_Qt_ToolBarAreas,
    array_Qt_ToolBarAreas,
    copy_Qt_ToolBarAreas,
    release_Qt_ToolBarAreas,
    cast_Qt_ToolBarAreas,
    convertTo_Qt_ToolBarAreas,
    0,
    0
},
    0,
    1,
    0
};