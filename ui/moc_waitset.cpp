/****************************************************************************
** Meta object code from reading C++ file 'waitset.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Program_UI/robort_tree_ui/waitset.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'waitset.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_waitSet_t {
    QByteArrayData data[25];
    char stringdata0[491];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_waitSet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_waitSet_t qt_meta_stringdata_waitSet = {
    {
QT_MOC_LITERAL(0, 0, 7), // "waitSet"
QT_MOC_LITERAL(1, 8, 17), // "setWaitTimeSignal"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "time"
QT_MOC_LITERAL(4, 32, 17), // "setWaitTypeSignal"
QT_MOC_LITERAL(5, 50, 11), // "Wait_Type_E"
QT_MOC_LITERAL(6, 62, 9), // "wait_type"
QT_MOC_LITERAL(7, 72, 24), // "setWaitDigitalInputIndex"
QT_MOC_LITERAL(8, 97, 13), // "IO_Input_Id_E"
QT_MOC_LITERAL(9, 111, 11), // "input_index"
QT_MOC_LITERAL(10, 123, 25), // "setWaitDigitalInputStatus"
QT_MOC_LITERAL(11, 149, 19), // "Digital_IO_Status_E"
QT_MOC_LITERAL(12, 169, 9), // "io_status"
QT_MOC_LITERAL(13, 179, 16), // "onUpDateWaitTime"
QT_MOC_LITERAL(14, 196, 16), // "onUpdateWaitType"
QT_MOC_LITERAL(15, 213, 29), // "on_WaitTimeLE_editingFinished"
QT_MOC_LITERAL(16, 243, 19), // "on_waitNoRB_clicked"
QT_MOC_LITERAL(17, 263, 21), // "on_waitTimeRB_clicked"
QT_MOC_LITERAL(18, 285, 29), // "on_waitDigitalInputRB_clicked"
QT_MOC_LITERAL(19, 315, 47), // "on_digitalinputIndex_waitCB_c..."
QT_MOC_LITERAL(20, 363, 5), // "index"
QT_MOC_LITERAL(21, 369, 48), // "on_digitalInputStatus_waitCB_..."
QT_MOC_LITERAL(22, 418, 32), // "onUpDateWaitIODigitalInputStatus"
QT_MOC_LITERAL(23, 451, 19), // "on_time_sub_clicked"
QT_MOC_LITERAL(24, 471, 19) // "on_time_add_clicked"

    },
    "waitSet\0setWaitTimeSignal\0\0time\0"
    "setWaitTypeSignal\0Wait_Type_E\0wait_type\0"
    "setWaitDigitalInputIndex\0IO_Input_Id_E\0"
    "input_index\0setWaitDigitalInputStatus\0"
    "Digital_IO_Status_E\0io_status\0"
    "onUpDateWaitTime\0onUpdateWaitType\0"
    "on_WaitTimeLE_editingFinished\0"
    "on_waitNoRB_clicked\0on_waitTimeRB_clicked\0"
    "on_waitDigitalInputRB_clicked\0"
    "on_digitalinputIndex_waitCB_currentIndexChanged\0"
    "index\0on_digitalInputStatus_waitCB_currentIndexChanged\0"
    "onUpDateWaitIODigitalInputStatus\0"
    "on_time_sub_clicked\0on_time_add_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_waitSet[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,
       7,    1,   95,    2, 0x06 /* Public */,
      10,    1,   98,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  101,    2, 0x08 /* Private */,
      14,    1,  104,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x08 /* Private */,
      16,    0,  108,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,
      18,    0,  110,    2, 0x08 /* Private */,
      19,    1,  111,    2, 0x08 /* Private */,
      21,    1,  114,    2, 0x08 /* Private */,
      22,    2,  117,    2, 0x08 /* Private */,
      23,    0,  122,    2, 0x08 /* Private */,
      24,    0,  123,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 11,    9,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void waitSet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        waitSet *_t = static_cast<waitSet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setWaitTimeSignal((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->setWaitTypeSignal((*reinterpret_cast< Wait_Type_E(*)>(_a[1]))); break;
        case 2: _t->setWaitDigitalInputIndex((*reinterpret_cast< IO_Input_Id_E(*)>(_a[1]))); break;
        case 3: _t->setWaitDigitalInputStatus((*reinterpret_cast< Digital_IO_Status_E(*)>(_a[1]))); break;
        case 4: _t->onUpDateWaitTime((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->onUpdateWaitType((*reinterpret_cast< Wait_Type_E(*)>(_a[1]))); break;
        case 6: _t->on_WaitTimeLE_editingFinished(); break;
        case 7: _t->on_waitNoRB_clicked(); break;
        case 8: _t->on_waitTimeRB_clicked(); break;
        case 9: _t->on_waitDigitalInputRB_clicked(); break;
        case 10: _t->on_digitalinputIndex_waitCB_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_digitalInputStatus_waitCB_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->onUpDateWaitIODigitalInputStatus((*reinterpret_cast< IO_Input_Id_E(*)>(_a[1])),(*reinterpret_cast< Digital_IO_Status_E(*)>(_a[2]))); break;
        case 13: _t->on_time_sub_clicked(); break;
        case 14: _t->on_time_add_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (waitSet::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&waitSet::setWaitTimeSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (waitSet::*_t)(Wait_Type_E );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&waitSet::setWaitTypeSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (waitSet::*_t)(IO_Input_Id_E );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&waitSet::setWaitDigitalInputIndex)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (waitSet::*_t)(Digital_IO_Status_E );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&waitSet::setWaitDigitalInputStatus)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject waitSet::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_waitSet.data,
      qt_meta_data_waitSet,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *waitSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *waitSet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_waitSet.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int waitSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void waitSet::setWaitTimeSignal(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void waitSet::setWaitTypeSignal(Wait_Type_E _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void waitSet::setWaitDigitalInputIndex(IO_Input_Id_E _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void waitSet::setWaitDigitalInputStatus(Digital_IO_Status_E _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
