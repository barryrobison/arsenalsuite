/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:22 2010
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

#line 37 "sip/QtGui/qtexttable.sip"
#include <qtexttable.h>
#line 39 "sipQtGuiQTextTableCell.cpp"

#line 37 "sip/QtGui/qtextcursor.sip"
#include <qtextcursor.h>
#line 43 "sipQtGuiQTextTableCell.cpp"
#line 312 "sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 46 "sipQtGuiQTextTableCell.cpp"


extern "C" {static PyObject *meth_QTextTableCell_format(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_format(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QTextTableCell *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QTextTableCell,&sipCpp))
        {
            QTextCharFormat *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextCharFormat(sipCpp->format());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextCharFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTableCell,sipName_format);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTableCell_setFormat(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_setFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QTextCharFormat * a0;
        QTextTableCell *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QTextTableCell,&sipCpp,sipType_QTextCharFormat,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFormat(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTableCell,sipName_setFormat);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTableCell_row(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_row(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QTextTableCell *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QTextTableCell,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->row();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTableCell,sipName_row);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTableCell_column(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_column(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QTextTableCell *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QTextTableCell,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->column();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTableCell,sipName_column);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTableCell_rowSpan(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_rowSpan(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QTextTableCell *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QTextTableCell,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->rowSpan();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTableCell,sipName_rowSpan);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTableCell_columnSpan(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_columnSpan(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QTextTableCell *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QTextTableCell,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->columnSpan();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTableCell,sipName_columnSpan);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTableCell_isValid(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QTextTableCell *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QTextTableCell,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTableCell,sipName_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTableCell_firstCursorPosition(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_firstCursorPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QTextTableCell *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QTextTableCell,&sipCpp))
        {
            QTextCursor *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextCursor(sipCpp->firstCursorPosition());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextCursor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTableCell,sipName_firstCursorPosition);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTableCell_lastCursorPosition(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_lastCursorPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QTextTableCell *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QTextTableCell,&sipCpp))
        {
            QTextCursor *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextCursor(sipCpp->lastCursorPosition());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextCursor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTableCell,sipName_lastCursorPosition);

    return NULL;
}


extern "C" {static PyObject *meth_QTextTableCell_tableCellFormatIndex(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_tableCellFormatIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QTextTableCell *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QTextTableCell,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->tableCellFormatIndex();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTextTableCell,sipName_tableCellFormatIndex);

    return NULL;
}


extern "C" {static PyObject *slot_QTextTableCell___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QTextTableCell___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextTableCell *sipCpp = reinterpret_cast<QTextTableCell *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextTableCell));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QTextTableCell * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J9",sipType_QTextTableCell,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTextTableCell::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QTextTableCell,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextTableCell___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QTextTableCell___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextTableCell *sipCpp = reinterpret_cast<QTextTableCell *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextTableCell));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QTextTableCell * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J9",sipType_QTextTableCell,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTextTableCell::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QTextTableCell,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTextTableCell(void *, const sipTypeDef *);}
static void *cast_QTextTableCell(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTextTableCell)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextTableCell(void *, int);}
static void release_QTextTableCell(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextTableCell *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextTableCell(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextTableCell(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextTableCell *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextTableCell *>(sipSrc);
}


extern "C" {static void *array_QTextTableCell(SIP_SSIZE_T);}
static void *array_QTextTableCell(SIP_SSIZE_T sipNrElem)
{
    return new QTextTableCell[sipNrElem];
}


extern "C" {static void *copy_QTextTableCell(const void *, SIP_SSIZE_T);}
static void *copy_QTextTableCell(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextTableCell(reinterpret_cast<const QTextTableCell *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextTableCell(sipSimpleWrapper *);}
static void dealloc_QTextTableCell(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextTableCell(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QTextTableCell(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QTextTableCell(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QTextTableCell *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextTableCell();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QTextTableCell * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QTextTableCell,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextTableCell(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextTableCell[] = {
    {(void *)slot_QTextTableCell___ne__, ne_slot},
    {(void *)slot_QTextTableCell___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QTextTableCell[] = {
    {SIP_MLNAME_CAST(sipName_column), meth_QTextTableCell_column, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_columnSpan), meth_QTextTableCell_columnSpan, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_firstCursorPosition), meth_QTextTableCell_firstCursorPosition, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_format), meth_QTextTableCell_format, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QTextTableCell_isValid, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_lastCursorPosition), meth_QTextTableCell_lastCursorPosition, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_row), meth_QTextTableCell_row, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_rowSpan), meth_QTextTableCell_rowSpan, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setFormat), meth_QTextTableCell_setFormat, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_tableCellFormatIndex), meth_QTextTableCell_tableCellFormatIndex, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextTableCell = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextTableCell,
        {0}
    },
    {
        sipNameNr_QTextTableCell,
        {0, 0, 1},
        10, methods_QTextTableCell,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTextTableCell,
    init_QTextTableCell,
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
    dealloc_QTextTableCell,
    assign_QTextTableCell,
    array_QTextTableCell,
    copy_QTextTableCell,
    release_QTextTableCell,
    cast_QTextTableCell,
    0,
    0,
    0
},
    0,
    0,
    0
};