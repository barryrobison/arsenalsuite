/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:27 2010
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

#include "sipAPIQtNetwork.h"

#line 99 "sip/QtNetwork/qhttp.sip"
#include <qhttp.h>
#line 39 "sipQtNetworkQHttpRequestHeader.cpp"

#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 43 "sipQtNetworkQHttpRequestHeader.cpp"
#line 41 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 46 "sipQtNetworkQHttpRequestHeader.cpp"
#line 205 "sip/QtCore/qlist.sip"
#include <qlist.h>
#include <qpair.h>
#line 50 "sipQtNetworkQHttpRequestHeader.cpp"
#line 89 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 53 "sipQtNetworkQHttpRequestHeader.cpp"


class sipQHttpRequestHeader : public QHttpRequestHeader
{
public:
    sipQHttpRequestHeader();
    sipQHttpRequestHeader(const QString&,const QString&,int,int);
    sipQHttpRequestHeader(const QHttpRequestHeader&);
    sipQHttpRequestHeader(const QString&);
    virtual ~sipQHttpRequestHeader();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    bool sipProtect_parse(const QString&);
    void sipProtect_setValid(bool);
    bool sipProtectVirt_parseLine(bool,const QString&,int);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    int majorVersion() const;
    int minorVersion() const;
    QString toString() const;
    bool parseLine(const QString&,int);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQHttpRequestHeader(const sipQHttpRequestHeader &);
    sipQHttpRequestHeader &operator = (const sipQHttpRequestHeader &);

    char sipPyMethods[4];
};

sipQHttpRequestHeader::sipQHttpRequestHeader(): QHttpRequestHeader(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQHttpRequestHeader::sipQHttpRequestHeader(const QString& a0,const QString& a1,int a2,int a3): QHttpRequestHeader(a0,a1,a2,a3), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQHttpRequestHeader::sipQHttpRequestHeader(const QHttpRequestHeader& a0): QHttpRequestHeader(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQHttpRequestHeader::sipQHttpRequestHeader(const QString& a0): QHttpRequestHeader(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQHttpRequestHeader::~sipQHttpRequestHeader()
{
    sipCommonDtor(sipPySelf);
}

int sipQHttpRequestHeader::majorVersion() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_majorVersion);

    if (!meth)
        return QHttpRequestHeader::majorVersion();

    typedef int (*sipVH_QtCore_7)(sip_gilstate_t,PyObject *,bool*);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[7]))(sipGILState,meth,0);
}

int sipQHttpRequestHeader::minorVersion() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_minorVersion);

    if (!meth)
        return QHttpRequestHeader::minorVersion();

    typedef int (*sipVH_QtCore_7)(sip_gilstate_t,PyObject *,bool*);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[7]))(sipGILState,meth,0);
}

QString sipQHttpRequestHeader::toString() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_toString);

    if (!meth)
        return QHttpRequestHeader::toString();

    typedef QString (*sipVH_QtCore_57)(sip_gilstate_t,PyObject *,bool*);

    return ((sipVH_QtCore_57)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[57]))(sipGILState,meth,0);
}

bool sipQHttpRequestHeader::parseLine(const QString& a0,int a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_parseLine);

    if (!meth)
        return QHttpRequestHeader::parseLine(a0,a1);

    extern bool sipVH_QtNetwork_17(sip_gilstate_t,PyObject *,bool*,const QString&,int);

    return sipVH_QtNetwork_17(sipGILState,meth,0,a0,a1);
}

bool sipQHttpRequestHeader::sipProtect_parse(const QString& a0)
{
    return QHttpHeader::parse(a0);
}

void sipQHttpRequestHeader::sipProtect_setValid(bool a0)
{
    QHttpHeader::setValid(a0);
}

bool sipQHttpRequestHeader::sipProtectVirt_parseLine(bool sipSelfWasArg,const QString& a0,int a1)
{
    return (sipSelfWasArg ? QHttpRequestHeader::parseLine(a0,a1) : parseLine(a0,a1));
}


extern "C" {static PyObject *meth_QHttpRequestHeader_parse(PyObject *, PyObject *);}
static PyObject *meth_QHttpRequestHeader_parse(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        sipQHttpRequestHeader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ1",&sipSelf,sipType_QHttpRequestHeader,&sipCpp,sipType_QString,&a0,&a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtect_parse(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QHttpRequestHeader,sipName_parse);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpRequestHeader_setValid(PyObject *, PyObject *);}
static PyObject *meth_QHttpRequestHeader_setValid(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        sipQHttpRequestHeader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pb",&sipSelf,sipType_QHttpRequestHeader,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtect_setValid(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QHttpRequestHeader,sipName_setValid);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpRequestHeader_setRequest(PyObject *, PyObject *);}
static PyObject *meth_QHttpRequestHeader_setRequest(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        int a2 = 1;
        int a3 = 1;
        QHttpRequestHeader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1|ii",&sipSelf,sipType_QHttpRequestHeader,&sipCpp,sipType_QString,&a0,&a0State,sipType_QString,&a1,&a1State,&a2,&a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setRequest(*a0,*a1,a2,a3);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QHttpRequestHeader,sipName_setRequest);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpRequestHeader_method(PyObject *, PyObject *);}
static PyObject *meth_QHttpRequestHeader_method(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QHttpRequestHeader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QHttpRequestHeader,&sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->method());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QHttpRequestHeader,sipName_method);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpRequestHeader_path(PyObject *, PyObject *);}
static PyObject *meth_QHttpRequestHeader_path(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QHttpRequestHeader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QHttpRequestHeader,&sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->path());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QHttpRequestHeader,sipName_path);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpRequestHeader_majorVersion(PyObject *, PyObject *);}
static PyObject *meth_QHttpRequestHeader_majorVersion(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QHttpRequestHeader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QHttpRequestHeader,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QHttpRequestHeader::majorVersion() : sipCpp->majorVersion());
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QHttpRequestHeader,sipName_majorVersion);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpRequestHeader_minorVersion(PyObject *, PyObject *);}
static PyObject *meth_QHttpRequestHeader_minorVersion(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QHttpRequestHeader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QHttpRequestHeader,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QHttpRequestHeader::minorVersion() : sipCpp->minorVersion());
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QHttpRequestHeader,sipName_minorVersion);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpRequestHeader_toString(PyObject *, PyObject *);}
static PyObject *meth_QHttpRequestHeader_toString(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QHttpRequestHeader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QHttpRequestHeader,&sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString((sipSelfWasArg ? sipCpp->QHttpRequestHeader::toString() : sipCpp->toString()));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QHttpRequestHeader,sipName_toString);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpRequestHeader_parseLine(PyObject *, PyObject *);}
static PyObject *meth_QHttpRequestHeader_parseLine(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QString * a0;
        int a0State = 0;
        int a1;
        sipQHttpRequestHeader *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ1i",&sipSelf,sipType_QHttpRequestHeader,&sipCpp,sipType_QString,&a0,&a0State,&a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtectVirt_parseLine(sipSelfWasArg,*a0,a1);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QHttpRequestHeader,sipName_parseLine);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QHttpRequestHeader(void *, const sipTypeDef *);}
static void *cast_QHttpRequestHeader(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QHttpRequestHeader)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QHttpHeader)->ctd_cast((QHttpHeader *)(QHttpRequestHeader *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QHttpRequestHeader(void *, int);}
static void release_QHttpRequestHeader(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQHttpRequestHeader *>(sipCppV);
    else
        delete reinterpret_cast<QHttpRequestHeader *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QHttpRequestHeader(void *, SIP_SSIZE_T, const void *);}
static void assign_QHttpRequestHeader(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QHttpRequestHeader *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QHttpRequestHeader *>(sipSrc);
}


extern "C" {static void *array_QHttpRequestHeader(SIP_SSIZE_T);}
static void *array_QHttpRequestHeader(SIP_SSIZE_T sipNrElem)
{
    return new QHttpRequestHeader[sipNrElem];
}


extern "C" {static void *copy_QHttpRequestHeader(const void *, SIP_SSIZE_T);}
static void *copy_QHttpRequestHeader(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QHttpRequestHeader(reinterpret_cast<const QHttpRequestHeader *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QHttpRequestHeader(sipSimpleWrapper *);}
static void dealloc_QHttpRequestHeader(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQHttpRequestHeader *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QHttpRequestHeader(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QHttpRequestHeader(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QHttpRequestHeader(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    sipQHttpRequestHeader *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQHttpRequestHeader();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        int a2 = 1;
        int a3 = 1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1J1|ii",sipType_QString,&a0,&a0State,sipType_QString,&a1,&a1State,&a2,&a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQHttpRequestHeader(*a0,*a1,a2,a3);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
        }
    }

    if (!sipCpp)
    {
        const QHttpRequestHeader * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QHttpRequestHeader,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQHttpRequestHeader(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QString * a0;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1",sipType_QString,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQHttpRequestHeader(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QHttpRequestHeader[] = {{22, 255, 1}};


static PyMethodDef methods_QHttpRequestHeader[] = {
    {SIP_MLNAME_CAST(sipName_majorVersion), meth_QHttpRequestHeader_majorVersion, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_method), meth_QHttpRequestHeader_method, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_minorVersion), meth_QHttpRequestHeader_minorVersion, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_parse), meth_QHttpRequestHeader_parse, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_parseLine), meth_QHttpRequestHeader_parseLine, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_path), meth_QHttpRequestHeader_path, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setRequest), meth_QHttpRequestHeader_setRequest, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setValid), meth_QHttpRequestHeader_setValid, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_toString), meth_QHttpRequestHeader_toString, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QHttpRequestHeader = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QHttpRequestHeader,
        {0}
    },
    {
        sipNameNr_QHttpRequestHeader,
        {0, 0, 1},
        9, methods_QHttpRequestHeader,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QHttpRequestHeader,
    0,
    init_QHttpRequestHeader,
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
    dealloc_QHttpRequestHeader,
    assign_QHttpRequestHeader,
    array_QHttpRequestHeader,
    copy_QHttpRequestHeader,
    release_QHttpRequestHeader,
    cast_QHttpRequestHeader,
    0,
    0,
    0
},
    0,
    0,
    0
};