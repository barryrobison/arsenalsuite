/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:39 2010
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

#include "sipAPIphonon.h"

#line 38 "sip/phonon/abstractaudiooutput.sip"
#include <abstractaudiooutput.h>
#line 45 "sip/phonon/abstractaudiooutput.sip"
#include <abstractaudiooutput.h>
#line 38 "sip/phonon/abstractvideooutput.sip"
#include <abstractvideooutput.h>
#line 45 "sip/phonon/abstractvideooutput.sip"
#include <abstractvideooutput.h>
#line 38 "sip/phonon/audiooutput.sip"
#include <audiooutput.h>
#line 45 "sip/phonon/audiooutput.sip"
#include <audiooutput.h>
#line 38 "sip/phonon/backendcapabilities.sip"
#include <backendcapabilities.h>
#line 44 "sip/phonon/backendcapabilities.sip"
#include <backendcapabilities.h>
#line 51 "sip/phonon/backendcapabilities.sip"
#include <backendcapabilities.h>
#line 38 "sip/phonon/effect.sip"
#include <effect.h>
#line 45 "sip/phonon/effect.sip"
#include <effect.h>
#line 44 "sip/phonon/effectparameter.sip"
#include <effectparameter.h>
#line 51 "sip/phonon/effectparameter.sip"
#include <effectparameter.h>
#line 38 "sip/phonon/effectwidget.sip"
#include <effectwidget.h>
#line 45 "sip/phonon/effectwidget.sip"
#include <effectwidget.h>
#line 44 "sip/phonon/mediacontroller.sip"
#include <mediacontroller.h>
#line 51 "sip/phonon/mediacontroller.sip"
#include <mediacontroller.h>
#line 38 "sip/phonon/medianode.sip"
#include <medianode.h>
#line 45 "sip/phonon/medianode.sip"
#include <medianode.h>
#line 38 "sip/phonon/mediaobject.sip"
#include <mediaobject.h>
#line 45 "sip/phonon/mediaobject.sip"
#include <mediaobject.h>
#line 38 "sip/phonon/mediasource.sip"
#include <mediasource.h>
#line 45 "sip/phonon/mediasource.sip"
#include <mediasource.h>
#line 38 "sip/phonon/objectdescription.sip"
#include <objectdescription.h>
#line 49 "sip/phonon/objectdescription.sip"
#include <objectdescription.h>
#line 87 "sipphononPhononSubtitleDescription.cpp"

#line 38 "sip/QtCore/qhash.sip"
#include <qhash.h>
#line 91 "sipphononPhononSubtitleDescription.cpp"
#line 43 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 94 "sipphononPhononSubtitleDescription.cpp"
#line 131 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 97 "sipphononPhononSubtitleDescription.cpp"
#line 38 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 100 "sipphononPhononSubtitleDescription.cpp"
#line 41 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 103 "sipphononPhononSubtitleDescription.cpp"
#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 106 "sipphononPhononSubtitleDescription.cpp"


extern "C" {static PyObject *meth_Phonon_SubtitleDescription_description(PyObject *, PyObject *);}
static PyObject *meth_Phonon_SubtitleDescription_description(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Phonon::SubtitleDescription *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_Phonon_SubtitleDescription,&sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->description());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_SubtitleDescription,sipName_description);

    return NULL;
}


extern "C" {static PyObject *meth_Phonon_SubtitleDescription_index(PyObject *, PyObject *);}
static PyObject *meth_Phonon_SubtitleDescription_index(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Phonon::SubtitleDescription *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_Phonon_SubtitleDescription,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->index();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_SubtitleDescription,sipName_index);

    return NULL;
}


extern "C" {static PyObject *meth_Phonon_SubtitleDescription_isValid(PyObject *, PyObject *);}
static PyObject *meth_Phonon_SubtitleDescription_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Phonon::SubtitleDescription *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_Phonon_SubtitleDescription,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_SubtitleDescription,sipName_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_Phonon_SubtitleDescription_name(PyObject *, PyObject *);}
static PyObject *meth_Phonon_SubtitleDescription_name(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Phonon::SubtitleDescription *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_Phonon_SubtitleDescription,&sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_SubtitleDescription,sipName_name);

    return NULL;
}


extern "C" {static PyObject *meth_Phonon_SubtitleDescription_property(PyObject *, PyObject *);}
static PyObject *meth_Phonon_SubtitleDescription_property(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const char * a0;
        Phonon::SubtitleDescription *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bs",&sipSelf,sipType_Phonon_SubtitleDescription,&sipCpp,&a0))
        {
            QVariant *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant(sipCpp->property(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_SubtitleDescription,sipName_property);

    return NULL;
}


extern "C" {static PyObject *meth_Phonon_SubtitleDescription_propertyNames(PyObject *, PyObject *);}
static PyObject *meth_Phonon_SubtitleDescription_propertyNames(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Phonon::SubtitleDescription *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_Phonon_SubtitleDescription,&sipCpp))
        {
            QList<QByteArray> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QByteArray>(sipCpp->propertyNames());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_SubtitleDescription,sipName_propertyNames);

    return NULL;
}


extern "C" {static PyObject *meth_Phonon_SubtitleDescription_fromIndex(PyObject *, PyObject *);}
static PyObject *meth_Phonon_SubtitleDescription_fromIndex(PyObject *, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"i",&a0))
        {
            Phonon::SubtitleDescription *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Phonon::SubtitleDescription(Phonon::SubtitleDescription::fromIndex(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Phonon_SubtitleDescription,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_SubtitleDescription,sipName_fromIndex);

    return NULL;
}


extern "C" {static PyObject *slot_Phonon_SubtitleDescription___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Phonon_SubtitleDescription___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Phonon::SubtitleDescription *sipCpp = reinterpret_cast<Phonon::SubtitleDescription *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Phonon_SubtitleDescription));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Phonon::SubtitleDescription * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J9",sipType_Phonon_SubtitleDescription,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Phonon::SubtitleDescription::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_phonon,eq_slot,sipType_Phonon_SubtitleDescription,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Phonon_SubtitleDescription___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Phonon_SubtitleDescription___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Phonon::SubtitleDescription *sipCpp = reinterpret_cast<Phonon::SubtitleDescription *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Phonon_SubtitleDescription));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Phonon::SubtitleDescription * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J9",sipType_Phonon_SubtitleDescription,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Phonon::SubtitleDescription::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_phonon,ne_slot,sipType_Phonon_SubtitleDescription,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Phonon_SubtitleDescription(void *, const sipTypeDef *);}
static void *cast_Phonon_SubtitleDescription(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_Phonon_SubtitleDescription)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Phonon_SubtitleDescription(void *, int);}
static void release_Phonon_SubtitleDescription(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<Phonon::SubtitleDescription *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_Phonon_SubtitleDescription(void *, SIP_SSIZE_T, const void *);}
static void assign_Phonon_SubtitleDescription(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<Phonon::SubtitleDescription *>(sipDst)[sipDstIdx] = *reinterpret_cast<const Phonon::SubtitleDescription *>(sipSrc);
}


extern "C" {static void *array_Phonon_SubtitleDescription(SIP_SSIZE_T);}
static void *array_Phonon_SubtitleDescription(SIP_SSIZE_T sipNrElem)
{
    return new Phonon::SubtitleDescription[sipNrElem];
}


extern "C" {static void *copy_Phonon_SubtitleDescription(const void *, SIP_SSIZE_T);}
static void *copy_Phonon_SubtitleDescription(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new Phonon::SubtitleDescription(reinterpret_cast<const Phonon::SubtitleDescription *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Phonon_SubtitleDescription(sipSimpleWrapper *);}
static void dealloc_Phonon_SubtitleDescription(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Phonon_SubtitleDescription(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Phonon_SubtitleDescription(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_Phonon_SubtitleDescription(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    Phonon::SubtitleDescription *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Phonon::SubtitleDescription();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        int a0;
        const QHash<QByteArray,QVariant> * a1;
        int a1State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"iJ1",&a0,sipType_QHash_0100QByteArray_0100QVariant,&a1,&a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Phonon::SubtitleDescription(a0,*a1);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QHash<QByteArray,QVariant> *>(a1),sipType_QHash_0100QByteArray_0100QVariant,a1State);
        }
    }

    if (!sipCpp)
    {
        const Phonon::SubtitleDescription * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_Phonon_SubtitleDescription,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Phonon::SubtitleDescription(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Phonon_SubtitleDescription[] = {
    {(void *)slot_Phonon_SubtitleDescription___eq__, eq_slot},
    {(void *)slot_Phonon_SubtitleDescription___ne__, ne_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Phonon_SubtitleDescription[] = {
    {SIP_MLNAME_CAST(sipName_description), meth_Phonon_SubtitleDescription_description, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_fromIndex), meth_Phonon_SubtitleDescription_fromIndex, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_index), meth_Phonon_SubtitleDescription_index, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isValid), meth_Phonon_SubtitleDescription_isValid, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_name), meth_Phonon_SubtitleDescription_name, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_property), meth_Phonon_SubtitleDescription_property, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_propertyNames), meth_Phonon_SubtitleDescription_propertyNames, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_phonon_Phonon_SubtitleDescription = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_Phonon__SubtitleDescription,
        {0}
    },
    {
        sipNameNr_SubtitleDescription,
        {0, 255, 0},
        7, methods_Phonon_SubtitleDescription,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Phonon_SubtitleDescription,
    init_Phonon_SubtitleDescription,
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
    dealloc_Phonon_SubtitleDescription,
    assign_Phonon_SubtitleDescription,
    array_Phonon_SubtitleDescription,
    copy_Phonon_SubtitleDescription,
    release_Phonon_SubtitleDescription,
    cast_Phonon_SubtitleDescription,
    0,
    0,
    0
},
    0,
    0,
    0
};