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

#include "sipAPIQtHelp.h"

#line 60 "sip/QtHelp/qhelpcontentwidget.sip"
#include <qhelpcontentwidget.h>
#line 39 "sipQtHelpQHelpContentModel.cpp"

#line 37 "sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 43 "sipQtHelpQHelpContentModel.cpp"
#line 41 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 46 "sipQtHelpQHelpContentModel.cpp"
#line 39 "sip/QtHelp/qhelpcontentwidget.sip"
#include <qhelpcontentwidget.h>
#line 49 "sipQtHelpQHelpContentModel.cpp"
#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 52 "sipQtHelpQHelpContentModel.cpp"
#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 55 "sipQtHelpQHelpContentModel.cpp"
#line 38 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 58 "sipQtHelpQHelpContentModel.cpp"
#line 37 "sip/QtCore/qdatastream.sip"
#include <qdatastream.h>
#line 61 "sipQtHelpQHelpContentModel.cpp"
#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 64 "sipQtHelpQHelpContentModel.cpp"
#line 41 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 67 "sipQtHelpQHelpContentModel.cpp"
#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 70 "sipQtHelpQHelpContentModel.cpp"
#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 73 "sipQtHelpQHelpContentModel.cpp"
#line 37 "sip/QtCore/qmimedata.sip"
#include <qmimedata.h>
#line 76 "sipQtHelpQHelpContentModel.cpp"
#line 41 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 79 "sipQtHelpQHelpContentModel.cpp"
#line 149 "sip/QtCore/qmap.sip"
#include <qmap.h>
#line 82 "sipQtHelpQHelpContentModel.cpp"
#line 131 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 85 "sipQtHelpQHelpContentModel.cpp"
#line 37 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 88 "sipQtHelpQHelpContentModel.cpp"
#line 292 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 91 "sipQtHelpQHelpContentModel.cpp"
#line 279 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 94 "sipQtHelpQHelpContentModel.cpp"
#line 40 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 97 "sipQtHelpQHelpContentModel.cpp"
#line 38 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 100 "sipQtHelpQHelpContentModel.cpp"
#line 43 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 103 "sipQtHelpQHelpContentModel.cpp"
#line 125 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 106 "sipQtHelpQHelpContentModel.cpp"
#line 37 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 109 "sipQtHelpQHelpContentModel.cpp"
#line 41 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 112 "sipQtHelpQHelpContentModel.cpp"
#line 37 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 115 "sipQtHelpQHelpContentModel.cpp"


extern "C" {static PyObject *meth_QHelpContentModel_createContents(PyObject *, PyObject *);}
static PyObject *meth_QHelpContentModel_createContents(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        QHelpContentModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QHelpContentModel,&sipCpp,sipType_QString,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->createContents(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QHelpContentModel,sipName_createContents);

    return NULL;
}


extern "C" {static PyObject *meth_QHelpContentModel_contentItemAt(PyObject *, PyObject *);}
static PyObject *meth_QHelpContentModel_contentItemAt(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QModelIndex * a0;
        QHelpContentModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QHelpContentModel,&sipCpp,sipType_QModelIndex,&a0))
        {
            QHelpContentItem *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->contentItemAt(*a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QHelpContentItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QHelpContentModel,sipName_contentItemAt);

    return NULL;
}


extern "C" {static PyObject *meth_QHelpContentModel_data(PyObject *, PyObject *);}
static PyObject *meth_QHelpContentModel_data(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QModelIndex * a0;
        int a1;
        QHelpContentModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9i",&sipSelf,sipType_QHelpContentModel,&sipCpp,sipType_QModelIndex,&a0,&a1))
        {
            QVariant *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant((sipSelfWasArg ? sipCpp->QHelpContentModel::data(*a0,a1) : sipCpp->data(*a0,a1)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QHelpContentModel,sipName_data);

    return NULL;
}


extern "C" {static PyObject *meth_QHelpContentModel_index(PyObject *, PyObject *);}
static PyObject *meth_QHelpContentModel_index(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        int a1;
        const QModelIndex& a2def = QModelIndex();
        const QModelIndex * a2 = &a2def;
        QHelpContentModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bii|J9",&sipSelf,sipType_QHelpContentModel,&sipCpp,&a0,&a1,sipType_QModelIndex,&a2))
        {
            QModelIndex *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QModelIndex((sipSelfWasArg ? sipCpp->QHelpContentModel::index(a0,a1,*a2) : sipCpp->index(a0,a1,*a2)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QHelpContentModel,sipName_index);

    return NULL;
}


extern "C" {static PyObject *meth_QHelpContentModel_parent(PyObject *, PyObject *);}
static PyObject *meth_QHelpContentModel_parent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QModelIndex * a0;
        QHelpContentModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QHelpContentModel,&sipCpp,sipType_QModelIndex,&a0))
        {
            QModelIndex *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QModelIndex((sipSelfWasArg ? sipCpp->QHelpContentModel::parent(*a0) : sipCpp->parent(*a0)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QHelpContentModel,sipName_parent);

    return NULL;
}


extern "C" {static PyObject *meth_QHelpContentModel_rowCount(PyObject *, PyObject *);}
static PyObject *meth_QHelpContentModel_rowCount(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QModelIndex& a0def = QModelIndex();
        const QModelIndex * a0 = &a0def;
        QHelpContentModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|J9",&sipSelf,sipType_QHelpContentModel,&sipCpp,sipType_QModelIndex,&a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QHelpContentModel::rowCount(*a0) : sipCpp->rowCount(*a0));
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QHelpContentModel,sipName_rowCount);

    return NULL;
}


extern "C" {static PyObject *meth_QHelpContentModel_columnCount(PyObject *, PyObject *);}
static PyObject *meth_QHelpContentModel_columnCount(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QModelIndex& a0def = QModelIndex();
        const QModelIndex * a0 = &a0def;
        QHelpContentModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|J9",&sipSelf,sipType_QHelpContentModel,&sipCpp,sipType_QModelIndex,&a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QHelpContentModel::columnCount(*a0) : sipCpp->columnCount(*a0));
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QHelpContentModel,sipName_columnCount);

    return NULL;
}


extern "C" {static PyObject *meth_QHelpContentModel_isCreatingContents(PyObject *, PyObject *);}
static PyObject *meth_QHelpContentModel_isCreatingContents(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QHelpContentModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QHelpContentModel,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isCreatingContents();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QHelpContentModel,sipName_isCreatingContents);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QHelpContentModel(void *, const sipTypeDef *);}
static void *cast_QHelpContentModel(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QHelpContentModel)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QAbstractItemModel)->ctd_cast((QAbstractItemModel *)(QHelpContentModel *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QHelpContentModel(void *, int);}
static void release_QHelpContentModel(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QHelpContentModel *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QHelpContentModel(sipSimpleWrapper *);}
static void dealloc_QHelpContentModel(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QHelpContentModel(sipSelf->u.cppPtr,0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QHelpContentModel[] = {{9, 0, 1}};


static PyMethodDef methods_QHelpContentModel[] = {
    {SIP_MLNAME_CAST(sipName_columnCount), meth_QHelpContentModel_columnCount, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_contentItemAt), meth_QHelpContentModel_contentItemAt, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_createContents), meth_QHelpContentModel_createContents, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_data), meth_QHelpContentModel_data, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_index), meth_QHelpContentModel_index, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isCreatingContents), meth_QHelpContentModel_isCreatingContents, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_parent), meth_QHelpContentModel_parent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_rowCount), meth_QHelpContentModel_rowCount, METH_VARARGS, NULL}
};


/* Define this type's PyQt4 signals. */
static const pyqt4QtSignal pyqt4_signals_QHelpContentModel[] = {
    {"contentsCreated()", 0},
    {"contentsCreationStarted()", 0},
    {0, 0}
};


pyqt4ClassTypeDef sipTypeDef_QtHelp_QHelpContentModel = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QHelpContentModel,
        {0}
    },
    {
        sipNameNr_QHelpContentModel,
        {0, 0, 1},
        8, methods_QHelpContentModel,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QHelpContentModel,
    0,
    0,
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
    dealloc_QHelpContentModel,
    0,
    0,
    0,
    release_QHelpContentModel,
    cast_QHelpContentModel,
    0,
    0,
    0
},
    &QHelpContentModel::staticMetaObject,
    0,
    pyqt4_signals_QHelpContentModel
};