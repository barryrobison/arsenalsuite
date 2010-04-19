/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:37 2010
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

#include "sipAPIQtXml.h"

#line 197 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 39 "sipQtXmlQDomDocumentType.cpp"

#line 69 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 43 "sipQtXmlQDomDocumentType.cpp"
#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 46 "sipQtXmlQDomDocumentType.cpp"
#line 261 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 49 "sipQtXmlQDomDocumentType.cpp"
#line 340 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 52 "sipQtXmlQDomDocumentType.cpp"
#line 41 "sip/QtCore/qtextstream.sip"
#include <qtextstream.h>
#line 55 "sipQtXmlQDomDocumentType.cpp"
#line 394 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 58 "sipQtXmlQDomDocumentType.cpp"
#line 301 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 61 "sipQtXmlQDomDocumentType.cpp"
#line 464 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 64 "sipQtXmlQDomDocumentType.cpp"
#line 420 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 67 "sipQtXmlQDomDocumentType.cpp"
#line 435 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 70 "sipQtXmlQDomDocumentType.cpp"
#line 380 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 73 "sipQtXmlQDomDocumentType.cpp"
#line 451 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 76 "sipQtXmlQDomDocumentType.cpp"
#line 216 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 79 "sipQtXmlQDomDocumentType.cpp"
#line 288 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 82 "sipQtXmlQDomDocumentType.cpp"
#line 407 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 85 "sipQtXmlQDomDocumentType.cpp"
#line 322 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 88 "sipQtXmlQDomDocumentType.cpp"
#line 176 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 91 "sipQtXmlQDomDocumentType.cpp"


extern "C" {static PyObject *meth_QDomDocumentType_name(PyObject *, PyObject *);}
static PyObject *meth_QDomDocumentType_name(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QDomDocumentType *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QDomDocumentType,&sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomDocumentType,sipName_name);

    return NULL;
}


extern "C" {static PyObject *meth_QDomDocumentType_entities(PyObject *, PyObject *);}
static PyObject *meth_QDomDocumentType_entities(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QDomDocumentType *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QDomDocumentType,&sipCpp))
        {
            QDomNamedNodeMap *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDomNamedNodeMap(sipCpp->entities());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDomNamedNodeMap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomDocumentType,sipName_entities);

    return NULL;
}


extern "C" {static PyObject *meth_QDomDocumentType_notations(PyObject *, PyObject *);}
static PyObject *meth_QDomDocumentType_notations(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QDomDocumentType *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QDomDocumentType,&sipCpp))
        {
            QDomNamedNodeMap *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDomNamedNodeMap(sipCpp->notations());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDomNamedNodeMap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomDocumentType,sipName_notations);

    return NULL;
}


extern "C" {static PyObject *meth_QDomDocumentType_publicId(PyObject *, PyObject *);}
static PyObject *meth_QDomDocumentType_publicId(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QDomDocumentType *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QDomDocumentType,&sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->publicId());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomDocumentType,sipName_publicId);

    return NULL;
}


extern "C" {static PyObject *meth_QDomDocumentType_systemId(PyObject *, PyObject *);}
static PyObject *meth_QDomDocumentType_systemId(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QDomDocumentType *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QDomDocumentType,&sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->systemId());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomDocumentType,sipName_systemId);

    return NULL;
}


extern "C" {static PyObject *meth_QDomDocumentType_internalSubset(PyObject *, PyObject *);}
static PyObject *meth_QDomDocumentType_internalSubset(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QDomDocumentType *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QDomDocumentType,&sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->internalSubset());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomDocumentType,sipName_internalSubset);

    return NULL;
}


extern "C" {static PyObject *meth_QDomDocumentType_nodeType(PyObject *, PyObject *);}
static PyObject *meth_QDomDocumentType_nodeType(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QDomDocumentType *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QDomDocumentType,&sipCpp))
        {
            QDomNode::NodeType sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->nodeType();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QDomNode_NodeType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomDocumentType,sipName_nodeType);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDomDocumentType(void *, const sipTypeDef *);}
static void *cast_QDomDocumentType(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QDomDocumentType)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QDomNode)->ctd_cast((QDomNode *)(QDomDocumentType *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDomDocumentType(void *, int);}
static void release_QDomDocumentType(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QDomDocumentType *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QDomDocumentType(void *, SIP_SSIZE_T, const void *);}
static void assign_QDomDocumentType(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDomDocumentType *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDomDocumentType *>(sipSrc);
}


extern "C" {static void *array_QDomDocumentType(SIP_SSIZE_T);}
static void *array_QDomDocumentType(SIP_SSIZE_T sipNrElem)
{
    return new QDomDocumentType[sipNrElem];
}


extern "C" {static void *copy_QDomDocumentType(const void *, SIP_SSIZE_T);}
static void *copy_QDomDocumentType(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDomDocumentType(reinterpret_cast<const QDomDocumentType *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDomDocumentType(sipSimpleWrapper *);}
static void dealloc_QDomDocumentType(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDomDocumentType(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QDomDocumentType(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QDomDocumentType(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QDomDocumentType *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDomDocumentType();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QDomDocumentType * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QDomDocumentType,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDomDocumentType(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDomDocumentType[] = {{13, 255, 1}};


static PyMethodDef methods_QDomDocumentType[] = {
    {SIP_MLNAME_CAST(sipName_entities), meth_QDomDocumentType_entities, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_internalSubset), meth_QDomDocumentType_internalSubset, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_name), meth_QDomDocumentType_name, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_nodeType), meth_QDomDocumentType_nodeType, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_notations), meth_QDomDocumentType_notations, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_publicId), meth_QDomDocumentType_publicId, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_systemId), meth_QDomDocumentType_systemId, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtXml_QDomDocumentType = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QDomDocumentType,
        {0}
    },
    {
        sipNameNr_QDomDocumentType,
        {0, 0, 1},
        7, methods_QDomDocumentType,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QDomDocumentType,
    0,
    init_QDomDocumentType,
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
    dealloc_QDomDocumentType,
    assign_QDomDocumentType,
    array_QDomDocumentType,
    copy_QDomDocumentType,
    release_QDomDocumentType,
    cast_QDomDocumentType,
    0,
    0,
    0
},
    0,
    0,
    0
};