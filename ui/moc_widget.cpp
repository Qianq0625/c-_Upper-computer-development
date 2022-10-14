/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[16];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 24), // "confirmSetWayPointSignal"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 9), // "clear_log"
QT_MOC_LITERAL(4, 43, 12), // "WidgetUpdate"
QT_MOC_LITERAL(5, 56, 21), // "on_ConfirmSetWayPoint"
QT_MOC_LITERAL(6, 78, 19), // "onConcelSetWayPoint"
QT_MOC_LITERAL(7, 98, 14), // "consoleTimeout"
QT_MOC_LITERAL(8, 113, 21), // "on_set_button_clicked"
QT_MOC_LITERAL(9, 135, 23), // "on_makeP_button_clicked"
QT_MOC_LITERAL(10, 159, 22), // "on_runP_button_clicked"
QT_MOC_LITERAL(11, 182, 15), // "on_SetWayPoint1"
QT_MOC_LITERAL(12, 198, 21), // "on_Az_Btnpose_clicked"
QT_MOC_LITERAL(13, 220, 21), // "RobortTcp_MoWidg_show"
QT_MOC_LITERAL(14, 242, 18), // "Btn_Cancle_SigSlot"
QT_MOC_LITERAL(15, 261, 13) // "Btn_ResertTcp"

    },
    "Widget\0confirmSetWayPointSignal\0\0"
    "clear_log\0WidgetUpdate\0on_ConfirmSetWayPoint\0"
    "onConcelSetWayPoint\0consoleTimeout\0"
    "on_set_button_clicked\0on_makeP_button_clicked\0"
    "on_runP_button_clicked\0on_SetWayPoint1\0"
    "on_Az_Btnpose_clicked\0RobortTcp_MoWidg_show\0"
    "Btn_Cancle_SigSlot\0Btn_ResertTcp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   85,    2, 0x0a /* Public */,
       4,    0,   86,    2, 0x0a /* Public */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
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

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->confirmSetWayPointSignal(); break;
        case 1: _t->clear_log(); break;
        case 2: _t->WidgetUpdate(); break;
        case 3: _t->on_ConfirmSetWayPoint(); break;
        case 4: _t->onConcelSetWayPoint(); break;
        case 5: _t->consoleTimeout(); break;
        case 6: _t->on_set_button_clicked(); break;
        case 7: _t->on_makeP_button_clicked(); break;
        case 8: _t->on_runP_button_clicked(); break;
        case 9: _t->on_SetWayPoint1(); break;
        case 10: _t->on_Az_Btnpose_clicked(); break;
        case 11: _t->RobortTcp_MoWidg_show(); break;
        case 12: _t->Btn_Cancle_SigSlot(); break;
        case 13: _t->Btn_ResertTcp(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Widget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Widget::confirmSetWayPointSignal)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Widget::confirmSetWayPointSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
