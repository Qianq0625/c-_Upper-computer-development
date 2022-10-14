/****************************************************************************
** Meta object code from reading C++ file 'move_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Program_UI/robort_tree_ui/move_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'move_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_move_widget_t {
    QByteArrayData data[12];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_move_widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_move_widget_t qt_meta_stringdata_move_widget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "move_widget"
QT_MOC_LITERAL(1, 12, 23), // "setTrajectoryTypeSignal"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 17), // "Trajectory_Type_E"
QT_MOC_LITERAL(4, 55, 9), // "traj_type"
QT_MOC_LITERAL(5, 65, 13), // "update_widget"
QT_MOC_LITERAL(6, 79, 33), // "on_moveTypeCB_currentIndexCha..."
QT_MOC_LITERAL(7, 113, 5), // "index"
QT_MOC_LITERAL(8, 119, 22), // "onUpDateTrajectoryType"
QT_MOC_LITERAL(9, 142, 12), // "control_init"
QT_MOC_LITERAL(10, 155, 21), // "on_btn_resert_clicked"
QT_MOC_LITERAL(11, 177, 23) // "on_btn_resert_l_clicked"

    },
    "move_widget\0setTrajectoryTypeSignal\0"
    "\0Trajectory_Type_E\0traj_type\0update_widget\0"
    "on_moveTypeCB_currentIndexChanged\0"
    "index\0onUpDateTrajectoryType\0control_init\0"
    "on_btn_resert_clicked\0on_btn_resert_l_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_move_widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   52,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       8,    1,   56,    2, 0x08 /* Private */,
       9,    0,   59,    2, 0x08 /* Private */,
      10,    0,   60,    2, 0x08 /* Private */,
      11,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void move_widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        move_widget *_t = static_cast<move_widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setTrajectoryTypeSignal((*reinterpret_cast< Trajectory_Type_E(*)>(_a[1]))); break;
        case 1: _t->update_widget(); break;
        case 2: _t->on_moveTypeCB_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onUpDateTrajectoryType((*reinterpret_cast< Trajectory_Type_E(*)>(_a[1]))); break;
        case 4: _t->control_init(); break;
        case 5: _t->on_btn_resert_clicked(); break;
        case 6: _t->on_btn_resert_l_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (move_widget::*_t)(Trajectory_Type_E );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&move_widget::setTrajectoryTypeSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject move_widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_move_widget.data,
      qt_meta_data_move_widget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *move_widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *move_widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_move_widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int move_widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void move_widget::setTrajectoryTypeSignal(Trajectory_Type_E _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
