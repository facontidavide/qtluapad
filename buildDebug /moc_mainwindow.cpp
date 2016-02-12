/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EditorConsolePairWidget_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditorConsolePairWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditorConsolePairWidget_t qt_meta_stringdata_EditorConsolePairWidget = {
    {
QT_MOC_LITERAL(0, 0, 23) // "EditorConsolePairWidget"

    },
    "EditorConsolePairWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditorConsolePairWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void EditorConsolePairWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject EditorConsolePairWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EditorConsolePairWidget.data,
      qt_meta_data_EditorConsolePairWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EditorConsolePairWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditorConsolePairWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EditorConsolePairWidget.stringdata0))
        return static_cast<void*>(const_cast< EditorConsolePairWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int EditorConsolePairWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[31];
    char stringdata0[594];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 9), // "_openFile"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 4), // "file"
QT_MOC_LITERAL(4, 27, 28), // "on_actionGoto_Line_triggered"
QT_MOC_LITERAL(5, 56, 23), // "on_actionFind_triggered"
QT_MOC_LITERAL(6, 80, 26), // "on_actionDebuger_triggered"
QT_MOC_LITERAL(7, 107, 24), // "on_actionPrint_triggered"
QT_MOC_LITERAL(8, 132, 32), // "on_actionQuest_Creator_triggered"
QT_MOC_LITERAL(9, 165, 26), // "on_actionOptions_triggered"
QT_MOC_LITERAL(10, 192, 29), // "on_actionSelect_All_triggered"
QT_MOC_LITERAL(11, 222, 34), // "on_actionDelete_Selected_trig..."
QT_MOC_LITERAL(12, 257, 30), // "on_actionDelete_Line_triggered"
QT_MOC_LITERAL(13, 288, 24), // "on_actionPaste_triggered"
QT_MOC_LITERAL(14, 313, 23), // "on_actionCopy_triggered"
QT_MOC_LITERAL(15, 337, 22), // "on_actionCut_triggered"
QT_MOC_LITERAL(16, 360, 23), // "on_actionRedo_triggered"
QT_MOC_LITERAL(17, 384, 23), // "on_actionUndo_triggered"
QT_MOC_LITERAL(18, 408, 24), // "on_actionClose_triggered"
QT_MOC_LITERAL(19, 433, 26), // "on_actionSave_As_triggered"
QT_MOC_LITERAL(20, 460, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(21, 484, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(22, 508, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(23, 531, 7), // "newFile"
QT_MOC_LITERAL(24, 539, 8), // "openFile"
QT_MOC_LITERAL(25, 548, 8), // "saveFile"
QT_MOC_LITERAL(26, 557, 8), // "showFind"
QT_MOC_LITERAL(27, 566, 12), // "showGotoLine"
QT_MOC_LITERAL(28, 579, 3), // "cut"
QT_MOC_LITERAL(29, 583, 4), // "copy"
QT_MOC_LITERAL(30, 588, 5) // "paste"

    },
    "MainWindow\0_openFile\0\0file\0"
    "on_actionGoto_Line_triggered\0"
    "on_actionFind_triggered\0"
    "on_actionDebuger_triggered\0"
    "on_actionPrint_triggered\0"
    "on_actionQuest_Creator_triggered\0"
    "on_actionOptions_triggered\0"
    "on_actionSelect_All_triggered\0"
    "on_actionDelete_Selected_triggered\0"
    "on_actionDelete_Line_triggered\0"
    "on_actionPaste_triggered\0"
    "on_actionCopy_triggered\0on_actionCut_triggered\0"
    "on_actionRedo_triggered\0on_actionUndo_triggered\0"
    "on_actionClose_triggered\0"
    "on_actionSave_As_triggered\0"
    "on_actionSave_triggered\0on_actionOpen_triggered\0"
    "on_actionNew_triggered\0newFile\0openFile\0"
    "saveFile\0showFind\0showGotoLine\0cut\0"
    "copy\0paste"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  154,    2, 0x0a /* Public */,
       4,    0,  157,    2, 0x08 /* Private */,
       5,    0,  158,    2, 0x08 /* Private */,
       6,    0,  159,    2, 0x08 /* Private */,
       7,    0,  160,    2, 0x08 /* Private */,
       8,    0,  161,    2, 0x08 /* Private */,
       9,    0,  162,    2, 0x08 /* Private */,
      10,    0,  163,    2, 0x08 /* Private */,
      11,    0,  164,    2, 0x08 /* Private */,
      12,    0,  165,    2, 0x08 /* Private */,
      13,    0,  166,    2, 0x08 /* Private */,
      14,    0,  167,    2, 0x08 /* Private */,
      15,    0,  168,    2, 0x08 /* Private */,
      16,    0,  169,    2, 0x08 /* Private */,
      17,    0,  170,    2, 0x08 /* Private */,
      18,    0,  171,    2, 0x08 /* Private */,
      19,    0,  172,    2, 0x08 /* Private */,
      20,    0,  173,    2, 0x08 /* Private */,
      21,    0,  174,    2, 0x08 /* Private */,
      22,    0,  175,    2, 0x08 /* Private */,
      23,    0,  176,    2, 0x08 /* Private */,
      24,    0,  177,    2, 0x08 /* Private */,
      25,    0,  178,    2, 0x08 /* Private */,
      26,    0,  179,    2, 0x08 /* Private */,
      27,    0,  180,    2, 0x08 /* Private */,
      28,    0,  181,    2, 0x08 /* Private */,
      29,    0,  182,    2, 0x08 /* Private */,
      30,    0,  183,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_openFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_actionGoto_Line_triggered(); break;
        case 2: _t->on_actionFind_triggered(); break;
        case 3: _t->on_actionDebuger_triggered(); break;
        case 4: _t->on_actionPrint_triggered(); break;
        case 5: _t->on_actionQuest_Creator_triggered(); break;
        case 6: _t->on_actionOptions_triggered(); break;
        case 7: _t->on_actionSelect_All_triggered(); break;
        case 8: _t->on_actionDelete_Selected_triggered(); break;
        case 9: _t->on_actionDelete_Line_triggered(); break;
        case 10: _t->on_actionPaste_triggered(); break;
        case 11: _t->on_actionCopy_triggered(); break;
        case 12: _t->on_actionCut_triggered(); break;
        case 13: _t->on_actionRedo_triggered(); break;
        case 14: _t->on_actionUndo_triggered(); break;
        case 15: _t->on_actionClose_triggered(); break;
        case 16: _t->on_actionSave_As_triggered(); break;
        case 17: _t->on_actionSave_triggered(); break;
        case 18: _t->on_actionOpen_triggered(); break;
        case 19: _t->on_actionNew_triggered(); break;
        case 20: _t->newFile(); break;
        case 21: _t->openFile(); break;
        case 22: _t->saveFile(); break;
        case 23: _t->showFind(); break;
        case 24: _t->showGotoLine(); break;
        case 25: _t->cut(); break;
        case 26: _t->copy(); break;
        case 27: _t->paste(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 28;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
