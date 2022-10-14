/****************************************************************************
** Meta object code from reading C++ file 'setio.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Program_UI/robort_tree_ui/setio.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setio.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_setIo_t {
    QByteArrayData data[20];
    char stringdata0[398];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_setIo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_setIo_t qt_meta_stringdata_setIo = {
    {
QT_MOC_LITERAL(0, 0, 5), // "setIo"
QT_MOC_LITERAL(1, 6, 16), // "setSetTypeSignal"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "Set_Type_E"
QT_MOC_LITERAL(4, 35, 8), // "set_type"
QT_MOC_LITERAL(5, 44, 21), // "setDigitalOutputIndex"
QT_MOC_LITERAL(6, 66, 14), // "IO_Output_Id_E"
QT_MOC_LITERAL(7, 81, 12), // "output_index"
QT_MOC_LITERAL(8, 94, 22), // "setDigitalOutputStatus"
QT_MOC_LITERAL(9, 117, 19), // "Digital_IO_Status_E"
QT_MOC_LITERAL(10, 137, 9), // "io_status"
QT_MOC_LITERAL(11, 147, 43), // "on_digitalOutputIndexCB_curre..."
QT_MOC_LITERAL(12, 191, 5), // "index"
QT_MOC_LITERAL(13, 197, 44), // "on_digitalOutputStatusCB_curr..."
QT_MOC_LITERAL(14, 242, 20), // "on_setNoneRB_clicked"
QT_MOC_LITERAL(15, 263, 29), // "on_setDigitalOutputRB_clicked"
QT_MOC_LITERAL(16, 293, 28), // "on_setAnalogOutputRB_clicked"
QT_MOC_LITERAL(17, 322, 15), // "onUpDateSetType"
QT_MOC_LITERAL(18, 338, 29), // "onUpdateIODigitalOutputStatus"
QT_MOC_LITERAL(19, 368, 29) // "on_immediateExecutePB_clicked"

    },
    "setIo\0setSetTypeSignal\0\0Set_Type_E\0"
    "set_type\0setDigitalOutputIndex\0"
    "IO_Output_Id_E\0output_index\0"
    "setDigitalOutputStatus\0Digital_IO_Status_E\0"
    "io_status\0on_digitalOutputIndexCB_currentIndexChanged\0"
    "index\0on_digitalOutputStatusCB_currentIndexChanged\0"
    "on_setNoneRB_clicked\0on_setDigitalOutputRB_clicked\0"
    "on_setAnalogOutputRB_clicked\0"
    "onUpDateSetType\0onUpdateIODigitalOutputStatus\0"
    "on_immediateExecutePB_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_setIo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,
       8,    1,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   78,    2, 0x08 /* Private */,
      13,    1,   81,    2, 0x08 /* Private */,
      14,    0,   84,    2, 0x08 /* Private */,
      15,    0,   85,    2, 0x08 /* Private */,
      16,    0,   86,    2, 0x08 /* Private */,
      17,    1,   87,    2, 0x08 /* Private */,
      18,    2,   90,    2, 0x08 /* Private */,
      19,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 9,    7,   10,
    QMetaType::Void,

       0        // eod
};

void setIo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        setIo *_t = static_cast<setIo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setSetTypeSignal((*reinterpret_cast< Set_Type_E(*)>(_a[1]))); break;
        case 1: _t->setDigitalOutputIndex((*reinterpret_cast< IO_Output_Id_E(*)>(_a[1]))); break;
        case 2: _t->setDigitalOutputStatus((*reinterpret_cast< Digital_IO_Status_E(*)>(_a[1]))); break;
        case 3: _t->on_digitalOutputIndexCB_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_digitalOutputStatusCB_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_setNoneRB_clicked(); break;
        case 6: _t->on_setDigitalOutputRB_clicked(); break;
        case 7: _t->on_setAnalogOutputRB_clicked(); break;
        case 8: _t->onUpDateSetType((*reinterpret_cast< Set_Type_E(*)>(_a[1]))); break;
        case 9: _t->onUpdateIODigitalOutputStatus((*reinterpret_cast< IO_Output_Id_E(*)>(_a[1])),(*reinterpret_cast< Digital_IO_Status_E(*)>(_a[2]))); break;
        case 10: _t->on_immediateExecutePB_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (setIo::*_t)(Set_Type_E );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&setIo::setSetTypeSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (setIo::*_t)(IO_Output_Id_E );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&setIo::setDigitalOutputIndex)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (setIo::*_t)(Digital_IO_Status_E );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&setIo::setDigitalOutputStatus)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject setIo::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_setIo.data,
      qt_meta_data_setIo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *setIo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *setIo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_setIo.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int setIo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void setIo::setSetTypeSignal(Set_Type_E _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void setIo::setDigitalOutputIndex(IO_Output_Id_E _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void setIo::setDigitalOutputStatus(Digital_IO_Status_E _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
