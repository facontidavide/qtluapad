/****************************************************************************
** Meta object code from reading C++ file 'questcreator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../questcreator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'questcreator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QuestCreator_t {
    QByteArrayData data[9];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QuestCreator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QuestCreator_t qt_meta_stringdata_QuestCreator = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QuestCreator"
QT_MOC_LITERAL(1, 13, 15), // "onBrowseClicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 23), // "onItemsContainerClicked"
QT_MOC_LITERAL(4, 54, 16), // "onAddItemClicked"
QT_MOC_LITERAL(5, 71, 19), // "onRemoveItemClicked"
QT_MOC_LITERAL(6, 91, 18), // "onClearListClicked"
QT_MOC_LITERAL(7, 110, 18), // "onSaveQuestClicked"
QT_MOC_LITERAL(8, 129, 20) // "onCloseWindowClicked"

    },
    "QuestCreator\0onBrowseClicked\0\0"
    "onItemsContainerClicked\0onAddItemClicked\0"
    "onRemoveItemClicked\0onClearListClicked\0"
    "onSaveQuestClicked\0onCloseWindowClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QuestCreator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QuestCreator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QuestCreator *_t = static_cast<QuestCreator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onBrowseClicked(); break;
        case 1: _t->onItemsContainerClicked(); break;
        case 2: _t->onAddItemClicked(); break;
        case 3: _t->onRemoveItemClicked(); break;
        case 4: _t->onClearListClicked(); break;
        case 5: _t->onSaveQuestClicked(); break;
        case 6: _t->onCloseWindowClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QuestCreator::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QuestCreator.data,
      qt_meta_data_QuestCreator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QuestCreator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QuestCreator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QuestCreator.stringdata0))
        return static_cast<void*>(const_cast< QuestCreator*>(this));
    return QDialog::qt_metacast(_clname);
}

int QuestCreator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
