/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:29 2010
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

#include "sipAPIQtOpenGL.h"

#line 44 "sip/QtOpenGL/qgl.sip"
#include <qgl.h>
#line 39 "sipQtOpenGLQGLFormatOptions.cpp"

#line 44 "sip/QtOpenGL/qgl.sip"
#include <qgl.h>
#line 43 "sipQtOpenGLQGLFormatOptions.cpp"


extern "C" {static int slot_QGL_FormatOptions___bool__(PyObject *sipSelf);}
static int slot_QGL_FormatOptions___bool__(PyObject *sipSelf)
{
    QGL::FormatOptions *sipCpp = reinterpret_cast<QGL::FormatOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGL_FormatOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 319 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 61 "sipQtOpenGLQGLFormatOptions.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QGL_FormatOptions___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QGL_FormatOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGL::FormatOptions *sipCpp = reinterpret_cast<QGL::FormatOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGL_FormatOptions));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QGL::FormatOptions * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QGL_FormatOptions,&a0,&a0State))
        {
            bool sipRes = 0;

#line 314 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 89 "sipQtOpenGLQGLFormatOptions.cpp"

            sipReleaseType(const_cast<QGL::FormatOptions *>(a0),sipType_QGL_FormatOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,ne_slot,sipType_QGL_FormatOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGL_FormatOptions___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QGL_FormatOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGL::FormatOptions *sipCpp = reinterpret_cast<QGL::FormatOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGL_FormatOptions));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QGL::FormatOptions * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QGL_FormatOptions,&a0,&a0State))
        {
            bool sipRes = 0;

#line 309 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 121 "sipQtOpenGLQGLFormatOptions.cpp"

            sipReleaseType(const_cast<QGL::FormatOptions *>(a0),sipType_QGL_FormatOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,eq_slot,sipType_QGL_FormatOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGL_FormatOptions___invert__(PyObject *sipSelf);}
static PyObject *slot_QGL_FormatOptions___invert__(PyObject *sipSelf)
{
    QGL::FormatOptions *sipCpp = reinterpret_cast<QGL::FormatOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGL_FormatOptions));

    if (!sipCpp)
        return 0;


    {
        {
            QGL::FormatOptions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGL::FormatOptions(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QGL_FormatOptions,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QGL_FormatOptions___and__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QGL_FormatOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        QGL::FormatOptions * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1i",sipType_QGL_FormatOptions,&a0,&a0State,&a1))
        {
            QGL::FormatOptions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGL::FormatOptions((*a0 & a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QGL_FormatOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGL_FormatOptions,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGL_FormatOptions___xor__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QGL_FormatOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        QGL::FormatOptions * a0;
        int a0State = 0;
        QGL::FormatOptions * a1;
        int a1State = 0;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1J1",sipType_QGL_FormatOptions,&a0,&a0State,sipType_QGL_FormatOptions,&a1,&a1State))
        {
            QGL::FormatOptions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGL::FormatOptions((*a0 ^ *a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QGL_FormatOptions,a0State);
            sipReleaseType(a1,sipType_QGL_FormatOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGL_FormatOptions,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGL_FormatOptions___or__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QGL_FormatOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        QGL::FormatOptions * a0;
        int a0State = 0;
        QGL::FormatOptions * a1;
        int a1State = 0;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1J1",sipType_QGL_FormatOptions,&a0,&a0State,sipType_QGL_FormatOptions,&a1,&a1State))
        {
            QGL::FormatOptions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGL::FormatOptions((*a0 | *a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QGL_FormatOptions,a0State);
            sipReleaseType(a1,sipType_QGL_FormatOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGL_FormatOptions,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGL_FormatOptions___int__(PyObject *sipSelf);}
static PyObject *slot_QGL_FormatOptions___int__(PyObject *sipSelf)
{
    QGL::FormatOptions *sipCpp = reinterpret_cast<QGL::FormatOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGL_FormatOptions));

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


extern "C" {static PyObject *slot_QGL_FormatOptions___ixor__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QGL_FormatOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGL_FormatOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGL::FormatOptions *sipCpp = reinterpret_cast<QGL::FormatOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGL_FormatOptions));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        QGL::FormatOptions * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QGL_FormatOptions,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGL::FormatOptions::operator^=(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QGL_FormatOptions,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QGL_FormatOptions___ior__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QGL_FormatOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGL_FormatOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGL::FormatOptions *sipCpp = reinterpret_cast<QGL::FormatOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGL_FormatOptions));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        QGL::FormatOptions * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J1",sipType_QGL_FormatOptions,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGL::FormatOptions::operator|=(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QGL_FormatOptions,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QGL_FormatOptions___iand__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QGL_FormatOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGL_FormatOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGL::FormatOptions *sipCpp = reinterpret_cast<QGL::FormatOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGL_FormatOptions));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        int a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1i",&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGL::FormatOptions::operator&=(a0);
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
extern "C" {static void *cast_QGL_FormatOptions(void *, const sipTypeDef *);}
static void *cast_QGL_FormatOptions(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QGL_FormatOptions)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGL_FormatOptions(void *, int);}
static void release_QGL_FormatOptions(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QGL::FormatOptions *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QGL_FormatOptions(void *, SIP_SSIZE_T, const void *);}
static void assign_QGL_FormatOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGL::FormatOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGL::FormatOptions *>(sipSrc);
}


extern "C" {static void *array_QGL_FormatOptions(SIP_SSIZE_T);}
static void *array_QGL_FormatOptions(SIP_SSIZE_T sipNrElem)
{
    return new QGL::FormatOptions[sipNrElem];
}


extern "C" {static void *copy_QGL_FormatOptions(const void *, SIP_SSIZE_T);}
static void *copy_QGL_FormatOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGL::FormatOptions(reinterpret_cast<const QGL::FormatOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGL_FormatOptions(sipSimpleWrapper *);}
static void dealloc_QGL_FormatOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGL_FormatOptions(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QGL_FormatOptions(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QGL_FormatOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QGL::FormatOptions *sipCpp = 0;

    if (!sipCpp)
    {
        const QGL::FormatOptions * a0;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1",sipType_QGL_FormatOptions,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGL::FormatOptions(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QGL::FormatOptions *>(a0),sipType_QGL_FormatOptions,a0State);
        }
    }

    if (!sipCpp)
    {
        int a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"i",&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGL::FormatOptions(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGL::FormatOptions();
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


extern "C" {static int convertTo_QGL_FormatOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QGL_FormatOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QGL::FormatOptions **sipCppPtr = reinterpret_cast<QGL::FormatOptions **>(sipCppPtrV);

#line 324 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QGL::FormatOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGL_FormatOption)) ||
            sipCanConvertToType(sipPy, sipType_QGL_FormatOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGL_FormatOption)))
{
    *sipCppPtr = new QGL::FormatOptions(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QGL::FormatOptions *>(sipConvertToType(sipPy, sipType_QGL_FormatOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 506 "sipQtOpenGLQGLFormatOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGL_FormatOptions[] = {
    {(void *)slot_QGL_FormatOptions___bool__, bool_slot},
    {(void *)slot_QGL_FormatOptions___ne__, ne_slot},
    {(void *)slot_QGL_FormatOptions___eq__, eq_slot},
    {(void *)slot_QGL_FormatOptions___invert__, invert_slot},
    {(void *)slot_QGL_FormatOptions___and__, and_slot},
    {(void *)slot_QGL_FormatOptions___xor__, xor_slot},
    {(void *)slot_QGL_FormatOptions___or__, or_slot},
    {(void *)slot_QGL_FormatOptions___int__, int_slot},
    {(void *)slot_QGL_FormatOptions___ixor__, ixor_slot},
    {(void *)slot_QGL_FormatOptions___ior__, ior_slot},
    {(void *)slot_QGL_FormatOptions___iand__, iand_slot},
    {0, (sipPySlotType)0}
};


pyqt4ClassTypeDef sipTypeDef_QtOpenGL_QGL_FormatOptions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QGL__FormatOptions,
        {0}
    },
    {
        sipNameNr_FormatOptions,
        {0, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGL_FormatOptions,
    init_QGL_FormatOptions,
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
    dealloc_QGL_FormatOptions,
    assign_QGL_FormatOptions,
    array_QGL_FormatOptions,
    copy_QGL_FormatOptions,
    release_QGL_FormatOptions,
    cast_QGL_FormatOptions,
    convertTo_QGL_FormatOptions,
    0,
    0
},
    0,
    1,
    0
};