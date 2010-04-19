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

#include "sipAPIQtXmlPatterns.h"

#line 39 "sip/QtXmlPatterns/qabstractxmlreceiver.sip"
#include <qabstractxmlreceiver.h>
#line 39 "sipQtXmlPatternsQAbstractXmlReceiver.cpp"

#line 39 "sip/QtXmlPatterns/qxmlname.sip"
#include <qxmlname.h>
#line 43 "sipQtXmlPatternsQAbstractXmlReceiver.cpp"
#line 41 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 46 "sipQtXmlPatternsQAbstractXmlReceiver.cpp"
#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 49 "sipQtXmlPatternsQAbstractXmlReceiver.cpp"
#line 646 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 52 "sipQtXmlPatternsQAbstractXmlReceiver.cpp"


class sipQAbstractXmlReceiver : public QAbstractXmlReceiver
{
public:
    sipQAbstractXmlReceiver();
    virtual ~sipQAbstractXmlReceiver();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void startElement(const QXmlName&);
    void endElement();
    void attribute(const QXmlName&,const QStringRef&);
    void comment(const QString&);
    void characters(const QStringRef&);
    void startDocument();
    void endDocument();
    void processingInstruction(const QXmlName&,const QString&);
    void atomicValue(const QVariant&);
    void namespaceBinding(const QXmlName&);
    void startOfSequence();
    void endOfSequence();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQAbstractXmlReceiver(const sipQAbstractXmlReceiver &);
    sipQAbstractXmlReceiver &operator = (const sipQAbstractXmlReceiver &);

    char sipPyMethods[12];
};

sipQAbstractXmlReceiver::sipQAbstractXmlReceiver(): QAbstractXmlReceiver(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAbstractXmlReceiver::~sipQAbstractXmlReceiver()
{
    sipCommonDtor(sipPySelf);
}

void sipQAbstractXmlReceiver::startElement(const QXmlName& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QAbstractXmlReceiver,sipName_startElement);

    if (!meth)
        return;

    extern void sipVH_QtXmlPatterns_3(sip_gilstate_t,PyObject *,bool*,const QXmlName&);

    sipVH_QtXmlPatterns_3(sipGILState,meth,0,a0);
}

void sipQAbstractXmlReceiver::endElement()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QAbstractXmlReceiver,sipName_endElement);

    if (!meth)
        return;

    typedef void (*sipVH_QtCore_5)(sip_gilstate_t,PyObject *,bool*);

    ((sipVH_QtCore_5)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[5]))(sipGILState,meth,0);
}

void sipQAbstractXmlReceiver::attribute(const QXmlName& a0,const QStringRef& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,sipName_QAbstractXmlReceiver,sipName_attribute);

    if (!meth)
        return;

    extern void sipVH_QtXmlPatterns_2(sip_gilstate_t,PyObject *,bool*,const QXmlName&,const QStringRef&);

    sipVH_QtXmlPatterns_2(sipGILState,meth,0,a0,a1);
}

void sipQAbstractXmlReceiver::comment(const QString& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,sipName_QAbstractXmlReceiver,sipName_comment);

    if (!meth)
        return;

    typedef void (*sipVH_QtCore_28)(sip_gilstate_t,PyObject *,bool*,const QString&);

    ((sipVH_QtCore_28)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[28]))(sipGILState,meth,0,a0);
}

void sipQAbstractXmlReceiver::characters(const QStringRef& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,sipName_QAbstractXmlReceiver,sipName_characters);

    if (!meth)
        return;

    extern void sipVH_QtXmlPatterns_4(sip_gilstate_t,PyObject *,bool*,const QStringRef&);

    sipVH_QtXmlPatterns_4(sipGILState,meth,0,a0);
}

void sipQAbstractXmlReceiver::startDocument()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,sipName_QAbstractXmlReceiver,sipName_startDocument);

    if (!meth)
        return;

    typedef void (*sipVH_QtCore_5)(sip_gilstate_t,PyObject *,bool*);

    ((sipVH_QtCore_5)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[5]))(sipGILState,meth,0);
}

void sipQAbstractXmlReceiver::endDocument()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,sipName_QAbstractXmlReceiver,sipName_endDocument);

    if (!meth)
        return;

    typedef void (*sipVH_QtCore_5)(sip_gilstate_t,PyObject *,bool*);

    ((sipVH_QtCore_5)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[5]))(sipGILState,meth,0);
}

void sipQAbstractXmlReceiver::processingInstruction(const QXmlName& a0,const QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,sipName_QAbstractXmlReceiver,sipName_processingInstruction);

    if (!meth)
        return;

    extern void sipVH_QtXmlPatterns_1(sip_gilstate_t,PyObject *,bool*,const QXmlName&,const QString&);

    sipVH_QtXmlPatterns_1(sipGILState,meth,0,a0,a1);
}

void sipQAbstractXmlReceiver::atomicValue(const QVariant& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,sipName_QAbstractXmlReceiver,sipName_atomicValue);

    if (!meth)
        return;

    extern void sipVH_QtXmlPatterns_0(sip_gilstate_t,PyObject *,bool*,const QVariant&);

    sipVH_QtXmlPatterns_0(sipGILState,meth,0,a0);
}

void sipQAbstractXmlReceiver::namespaceBinding(const QXmlName& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,sipName_QAbstractXmlReceiver,sipName_namespaceBinding);

    if (!meth)
        return;

    extern void sipVH_QtXmlPatterns_3(sip_gilstate_t,PyObject *,bool*,const QXmlName&);

    sipVH_QtXmlPatterns_3(sipGILState,meth,0,a0);
}

void sipQAbstractXmlReceiver::startOfSequence()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,sipName_QAbstractXmlReceiver,sipName_startOfSequence);

    if (!meth)
        return;

    typedef void (*sipVH_QtCore_5)(sip_gilstate_t,PyObject *,bool*);

    ((sipVH_QtCore_5)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[5]))(sipGILState,meth,0);
}

void sipQAbstractXmlReceiver::endOfSequence()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,sipName_QAbstractXmlReceiver,sipName_endOfSequence);

    if (!meth)
        return;

    typedef void (*sipVH_QtCore_5)(sip_gilstate_t,PyObject *,bool*);

    ((sipVH_QtCore_5)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[5]))(sipGILState,meth,0);
}


extern "C" {static PyObject *meth_QAbstractXmlReceiver_startElement(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlReceiver_startElement(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlName * a0;
        QAbstractXmlReceiver *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QAbstractXmlReceiver,&sipCpp,sipType_QXmlName,&a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlReceiver, sipName_startElement);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->startElement(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractXmlReceiver,sipName_startElement);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractXmlReceiver_endElement(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlReceiver_endElement(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        QAbstractXmlReceiver *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QAbstractXmlReceiver,&sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlReceiver, sipName_endElement);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->endElement();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractXmlReceiver,sipName_endElement);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractXmlReceiver_attribute(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlReceiver_attribute(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlName * a0;
        const QStringRef * a1;
        int a1State = 0;
        QAbstractXmlReceiver *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9J1",&sipSelf,sipType_QAbstractXmlReceiver,&sipCpp,sipType_QXmlName,&a0,sipType_QStringRef,&a1,&a1State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlReceiver, sipName_attribute);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->attribute(*a0,*a1);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QStringRef *>(a1),sipType_QStringRef,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractXmlReceiver,sipName_attribute);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractXmlReceiver_comment(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlReceiver_comment(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString * a0;
        int a0State = 0;
        QAbstractXmlReceiver *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QAbstractXmlReceiver,&sipCpp,sipType_QString,&a0,&a0State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlReceiver, sipName_comment);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->comment(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractXmlReceiver,sipName_comment);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractXmlReceiver_characters(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlReceiver_characters(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QStringRef * a0;
        int a0State = 0;
        QAbstractXmlReceiver *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QAbstractXmlReceiver,&sipCpp,sipType_QStringRef,&a0,&a0State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlReceiver, sipName_characters);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->characters(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QStringRef *>(a0),sipType_QStringRef,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractXmlReceiver,sipName_characters);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractXmlReceiver_startDocument(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlReceiver_startDocument(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        QAbstractXmlReceiver *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QAbstractXmlReceiver,&sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlReceiver, sipName_startDocument);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->startDocument();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractXmlReceiver,sipName_startDocument);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractXmlReceiver_endDocument(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlReceiver_endDocument(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        QAbstractXmlReceiver *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QAbstractXmlReceiver,&sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlReceiver, sipName_endDocument);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->endDocument();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractXmlReceiver,sipName_endDocument);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractXmlReceiver_processingInstruction(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlReceiver_processingInstruction(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlName * a0;
        const QString * a1;
        int a1State = 0;
        QAbstractXmlReceiver *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9J1",&sipSelf,sipType_QAbstractXmlReceiver,&sipCpp,sipType_QXmlName,&a0,sipType_QString,&a1,&a1State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlReceiver, sipName_processingInstruction);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->processingInstruction(*a0,*a1);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractXmlReceiver,sipName_processingInstruction);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractXmlReceiver_atomicValue(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlReceiver_atomicValue(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QVariant * a0;
        int a0State = 0;
        QAbstractXmlReceiver *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QAbstractXmlReceiver,&sipCpp,sipType_QVariant,&a0,&a0State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlReceiver, sipName_atomicValue);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->atomicValue(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QVariant *>(a0),sipType_QVariant,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractXmlReceiver,sipName_atomicValue);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractXmlReceiver_namespaceBinding(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlReceiver_namespaceBinding(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlName * a0;
        QAbstractXmlReceiver *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QAbstractXmlReceiver,&sipCpp,sipType_QXmlName,&a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlReceiver, sipName_namespaceBinding);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->namespaceBinding(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractXmlReceiver,sipName_namespaceBinding);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractXmlReceiver_startOfSequence(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlReceiver_startOfSequence(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        QAbstractXmlReceiver *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QAbstractXmlReceiver,&sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlReceiver, sipName_startOfSequence);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->startOfSequence();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractXmlReceiver,sipName_startOfSequence);

    return NULL;
}


extern "C" {static PyObject *meth_QAbstractXmlReceiver_endOfSequence(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlReceiver_endOfSequence(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        QAbstractXmlReceiver *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QAbstractXmlReceiver,&sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlReceiver, sipName_endOfSequence);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->endOfSequence();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QAbstractXmlReceiver,sipName_endOfSequence);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QAbstractXmlReceiver(void *, const sipTypeDef *);}
static void *cast_QAbstractXmlReceiver(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QAbstractXmlReceiver)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAbstractXmlReceiver(void *, int);}
static void release_QAbstractXmlReceiver(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQAbstractXmlReceiver *>(sipCppV);
    else
        delete reinterpret_cast<QAbstractXmlReceiver *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QAbstractXmlReceiver(sipSimpleWrapper *);}
static void dealloc_QAbstractXmlReceiver(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQAbstractXmlReceiver *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QAbstractXmlReceiver(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QAbstractXmlReceiver(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QAbstractXmlReceiver(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    sipQAbstractXmlReceiver *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQAbstractXmlReceiver();
            Py_END_ALLOW_THREADS
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


static PyMethodDef methods_QAbstractXmlReceiver[] = {
    {SIP_MLNAME_CAST(sipName_atomicValue), meth_QAbstractXmlReceiver_atomicValue, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_attribute), meth_QAbstractXmlReceiver_attribute, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_characters), meth_QAbstractXmlReceiver_characters, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_comment), meth_QAbstractXmlReceiver_comment, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_endDocument), meth_QAbstractXmlReceiver_endDocument, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_endElement), meth_QAbstractXmlReceiver_endElement, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_endOfSequence), meth_QAbstractXmlReceiver_endOfSequence, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_namespaceBinding), meth_QAbstractXmlReceiver_namespaceBinding, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_processingInstruction), meth_QAbstractXmlReceiver_processingInstruction, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_startDocument), meth_QAbstractXmlReceiver_startDocument, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_startElement), meth_QAbstractXmlReceiver_startElement, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_startOfSequence), meth_QAbstractXmlReceiver_startOfSequence, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtXmlPatterns_QAbstractXmlReceiver = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QAbstractXmlReceiver,
        {0}
    },
    {
        sipNameNr_QAbstractXmlReceiver,
        {0, 0, 1},
        12, methods_QAbstractXmlReceiver,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QAbstractXmlReceiver,
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
    dealloc_QAbstractXmlReceiver,
    0,
    0,
    0,
    release_QAbstractXmlReceiver,
    cast_QAbstractXmlReceiver,
    0,
    0,
    0
},
    0,
    0,
    0
};