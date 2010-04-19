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

#line 340 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 39 "sipQtXmlQDomElement.cpp"

#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 43 "sipQtXmlQDomElement.cpp"
#line 69 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 46 "sipQtXmlQDomElement.cpp"
#line 261 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 49 "sipQtXmlQDomElement.cpp"
#line 176 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 52 "sipQtXmlQDomElement.cpp"
#line 322 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 55 "sipQtXmlQDomElement.cpp"
#line 41 "sip/QtCore/qtextstream.sip"
#include <qtextstream.h>
#line 58 "sipQtXmlQDomElement.cpp"
#line 394 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 61 "sipQtXmlQDomElement.cpp"
#line 301 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 64 "sipQtXmlQDomElement.cpp"
#line 464 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 67 "sipQtXmlQDomElement.cpp"
#line 420 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 70 "sipQtXmlQDomElement.cpp"
#line 435 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 73 "sipQtXmlQDomElement.cpp"
#line 380 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 76 "sipQtXmlQDomElement.cpp"
#line 451 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 79 "sipQtXmlQDomElement.cpp"
#line 197 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 82 "sipQtXmlQDomElement.cpp"
#line 216 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 85 "sipQtXmlQDomElement.cpp"
#line 288 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 88 "sipQtXmlQDomElement.cpp"
#line 407 "sip/QtXml/qdom.sip"
#include <qdom.h>
#line 91 "sipQtXmlQDomElement.cpp"


extern "C" {static PyObject *meth_QDomElement_attribute(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_attribute(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        const QString& a1def = QString();
        const QString * a1 = &a1def;
        int a1State = 0;
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1|J1",&sipSelf,sipType_QDomElement,&sipCpp,sipType_QString,&a0,&a0State,sipType_QString,&a1,&a1State))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->attribute(*a0,*a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomElement,sipName_attribute);

    return NULL;
}


extern "C" {static PyObject *meth_QDomElement_setAttribute(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_setAttribute(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipType_QDomElement,&sipCpp,sipType_QString,&a0,&a0State,sipType_QString,&a1,&a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAttribute(*a0,*a1);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        qlonglong a1;
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1n",&sipSelf,sipType_QDomElement,&sipCpp,sipType_QString,&a0,&a0State,&a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAttribute(*a0,a1);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        qulonglong a1;
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1o",&sipSelf,sipType_QDomElement,&sipCpp,sipType_QString,&a0,&a0State,&a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAttribute(*a0,a1);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        double a1;
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1Xd",&sipSelf,sipType_QDomElement,&sipCpp,sipType_QString,&a0,&a0State,&a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAttribute(*a0,a1);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        int a1;
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1i",&sipSelf,sipType_QDomElement,&sipCpp,sipType_QString,&a0,&a0State,&a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAttribute(*a0,a1);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomElement,sipName_setAttribute);

    return NULL;
}


extern "C" {static PyObject *meth_QDomElement_removeAttribute(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_removeAttribute(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QDomElement,&sipCpp,sipType_QString,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->removeAttribute(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomElement,sipName_removeAttribute);

    return NULL;
}


extern "C" {static PyObject *meth_QDomElement_attributeNode(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_attributeNode(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QDomElement,&sipCpp,sipType_QString,&a0,&a0State))
        {
            QDomAttr *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDomAttr(sipCpp->attributeNode(*a0));
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDomAttr,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomElement,sipName_attributeNode);

    return NULL;
}


extern "C" {static PyObject *meth_QDomElement_setAttributeNode(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_setAttributeNode(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QDomAttr * a0;
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QDomElement,&sipCpp,sipType_QDomAttr,&a0))
        {
            QDomAttr *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDomAttr(sipCpp->setAttributeNode(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDomAttr,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomElement,sipName_setAttributeNode);

    return NULL;
}


extern "C" {static PyObject *meth_QDomElement_removeAttributeNode(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_removeAttributeNode(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QDomAttr * a0;
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QDomElement,&sipCpp,sipType_QDomAttr,&a0))
        {
            QDomAttr *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDomAttr(sipCpp->removeAttributeNode(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDomAttr,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomElement,sipName_removeAttributeNode);

    return NULL;
}


extern "C" {static PyObject *meth_QDomElement_elementsByTagName(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_elementsByTagName(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QDomElement,&sipCpp,sipType_QString,&a0,&a0State))
        {
            QDomNodeList *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDomNodeList(sipCpp->elementsByTagName(*a0));
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDomNodeList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomElement,sipName_elementsByTagName);

    return NULL;
}


extern "C" {static PyObject *meth_QDomElement_hasAttribute(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_hasAttribute(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QDomElement,&sipCpp,sipType_QString,&a0,&a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasAttribute(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomElement,sipName_hasAttribute);

    return NULL;
}


extern "C" {static PyObject *meth_QDomElement_attributeNS(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_attributeNS(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        const QString& a2def = QString();
        const QString * a2 = &a2def;
        int a2State = 0;
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1|J1",&sipSelf,sipType_QDomElement,&sipCpp,sipType_QString,&a0,&a0State,sipType_QString,&a1,&a1State,sipType_QString,&a2,&a2State))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->attributeNS(*a0,*a1,*a2));
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomElement,sipName_attributeNS);

    return NULL;
}


extern "C" {static PyObject *meth_QDomElement_setAttributeNS(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_setAttributeNS(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        const QString * a2;
        int a2State = 0;
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1J1",&sipSelf,sipType_QDomElement,&sipCpp,sipType_QString,&a0,&a0State,sipType_QString,&a1,&a1State,sipType_QString,&a2,&a2State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAttributeNS(*a0,*a1,*a2);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        qlonglong a2;
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1n",&sipSelf,sipType_QDomElement,&sipCpp,sipType_QString,&a0,&a0State,sipType_QString,&a1,&a1State,&a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAttributeNS(*a0,*a1,a2);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        qulonglong a2;
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1o",&sipSelf,sipType_QDomElement,&sipCpp,sipType_QString,&a0,&a0State,sipType_QString,&a1,&a1State,&a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAttributeNS(*a0,*a1,a2);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        double a2;
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1Xd",&sipSelf,sipType_QDomElement,&sipCpp,sipType_QString,&a0,&a0State,sipType_QString,&a1,&a1State,&a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAttributeNS(*a0,*a1,a2);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        int a2;
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1i",&sipSelf,sipType_QDomElement,&sipCpp,sipType_QString,&a0,&a0State,sipType_QString,&a1,&a1State,&a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAttributeNS(*a0,*a1,a2);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomElement,sipName_setAttributeNS);

    return NULL;
}


extern "C" {static PyObject *meth_QDomElement_removeAttributeNS(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_removeAttributeNS(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipType_QDomElement,&sipCpp,sipType_QString,&a0,&a0State,sipType_QString,&a1,&a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->removeAttributeNS(*a0,*a1);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomElement,sipName_removeAttributeNS);

    return NULL;
}


extern "C" {static PyObject *meth_QDomElement_attributeNodeNS(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_attributeNodeNS(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipType_QDomElement,&sipCpp,sipType_QString,&a0,&a0State,sipType_QString,&a1,&a1State))
        {
            QDomAttr *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDomAttr(sipCpp->attributeNodeNS(*a0,*a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDomAttr,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomElement,sipName_attributeNodeNS);

    return NULL;
}


extern "C" {static PyObject *meth_QDomElement_setAttributeNodeNS(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_setAttributeNodeNS(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QDomAttr * a0;
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QDomElement,&sipCpp,sipType_QDomAttr,&a0))
        {
            QDomAttr *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDomAttr(sipCpp->setAttributeNodeNS(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDomAttr,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomElement,sipName_setAttributeNodeNS);

    return NULL;
}


extern "C" {static PyObject *meth_QDomElement_elementsByTagNameNS(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_elementsByTagNameNS(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipType_QDomElement,&sipCpp,sipType_QString,&a0,&a0State,sipType_QString,&a1,&a1State))
        {
            QDomNodeList *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDomNodeList(sipCpp->elementsByTagNameNS(*a0,*a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDomNodeList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomElement,sipName_elementsByTagNameNS);

    return NULL;
}


extern "C" {static PyObject *meth_QDomElement_hasAttributeNS(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_hasAttributeNS(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipType_QDomElement,&sipCpp,sipType_QString,&a0,&a0State,sipType_QString,&a1,&a1State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasAttributeNS(*a0,*a1);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomElement,sipName_hasAttributeNS);

    return NULL;
}


extern "C" {static PyObject *meth_QDomElement_tagName(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_tagName(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QDomElement,&sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->tagName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomElement,sipName_tagName);

    return NULL;
}


extern "C" {static PyObject *meth_QDomElement_setTagName(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_setTagName(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QDomElement,&sipCpp,sipType_QString,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setTagName(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomElement,sipName_setTagName);

    return NULL;
}


extern "C" {static PyObject *meth_QDomElement_attributes(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_attributes(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QDomElement,&sipCpp))
        {
            QDomNamedNodeMap *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDomNamedNodeMap(sipCpp->attributes());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDomNamedNodeMap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomElement,sipName_attributes);

    return NULL;
}


extern "C" {static PyObject *meth_QDomElement_nodeType(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_nodeType(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QDomElement,&sipCpp))
        {
            QDomNode::NodeType sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->nodeType();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QDomNode_NodeType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomElement,sipName_nodeType);

    return NULL;
}


extern "C" {static PyObject *meth_QDomElement_text(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_text(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QDomElement *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QDomElement,&sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->text());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QDomElement,sipName_text);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDomElement(void *, const sipTypeDef *);}
static void *cast_QDomElement(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QDomElement)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QDomNode)->ctd_cast((QDomNode *)(QDomElement *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDomElement(void *, int);}
static void release_QDomElement(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QDomElement *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QDomElement(void *, SIP_SSIZE_T, const void *);}
static void assign_QDomElement(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDomElement *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDomElement *>(sipSrc);
}


extern "C" {static void *array_QDomElement(SIP_SSIZE_T);}
static void *array_QDomElement(SIP_SSIZE_T sipNrElem)
{
    return new QDomElement[sipNrElem];
}


extern "C" {static void *copy_QDomElement(const void *, SIP_SSIZE_T);}
static void *copy_QDomElement(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDomElement(reinterpret_cast<const QDomElement *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDomElement(sipSimpleWrapper *);}
static void dealloc_QDomElement(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDomElement(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QDomElement(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QDomElement(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QDomElement *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDomElement();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QDomElement * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QDomElement,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDomElement(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDomElement[] = {{13, 255, 1}};


static PyMethodDef methods_QDomElement[] = {
    {SIP_MLNAME_CAST(sipName_attribute), meth_QDomElement_attribute, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_attributeNS), meth_QDomElement_attributeNS, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_attributeNode), meth_QDomElement_attributeNode, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_attributeNodeNS), meth_QDomElement_attributeNodeNS, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_attributes), meth_QDomElement_attributes, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_elementsByTagName), meth_QDomElement_elementsByTagName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_elementsByTagNameNS), meth_QDomElement_elementsByTagNameNS, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_hasAttribute), meth_QDomElement_hasAttribute, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_hasAttributeNS), meth_QDomElement_hasAttributeNS, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_nodeType), meth_QDomElement_nodeType, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_removeAttribute), meth_QDomElement_removeAttribute, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_removeAttributeNS), meth_QDomElement_removeAttributeNS, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_removeAttributeNode), meth_QDomElement_removeAttributeNode, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setAttribute), meth_QDomElement_setAttribute, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setAttributeNS), meth_QDomElement_setAttributeNS, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setAttributeNode), meth_QDomElement_setAttributeNode, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setAttributeNodeNS), meth_QDomElement_setAttributeNodeNS, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setTagName), meth_QDomElement_setTagName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_tagName), meth_QDomElement_tagName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_text), meth_QDomElement_text, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtXml_QDomElement = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QDomElement,
        {0}
    },
    {
        sipNameNr_QDomElement,
        {0, 0, 1},
        20, methods_QDomElement,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QDomElement,
    0,
    init_QDomElement,
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
    dealloc_QDomElement,
    assign_QDomElement,
    array_QDomElement,
    copy_QDomElement,
    release_QDomElement,
    cast_QDomElement,
    0,
    0,
    0
},
    0,
    0,
    0
};