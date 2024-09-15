/****************************************************************************
** Meta object code from reading C++ file 'options.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bank-main/options.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'options.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_options_t {
    QByteArrayData data[8];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_options_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_options_t qt_meta_stringdata_options = {
    {
QT_MOC_LITERAL(0, 0, 7), // "options"
QT_MOC_LITERAL(1, 8, 32), // "on_options_depositButton_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 31), // "on_options_passwdButton_clicked"
QT_MOC_LITERAL(4, 74, 29), // "on_options_lostButton_clicked"
QT_MOC_LITERAL(5, 104, 33), // "on_options_withdrawButton_cli..."
QT_MOC_LITERAL(6, 138, 29), // "on_options_flowButton_clicked"
QT_MOC_LITERAL(7, 168, 37) // "on_options_interestnoteButton..."

    },
    "options\0on_options_depositButton_clicked\0"
    "\0on_options_passwdButton_clicked\0"
    "on_options_lostButton_clicked\0"
    "on_options_withdrawButton_clicked\0"
    "on_options_flowButton_clicked\0"
    "on_options_interestnoteButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_options[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void options::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        options *_t = static_cast<options *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_options_depositButton_clicked(); break;
        case 1: _t->on_options_passwdButton_clicked(); break;
        case 2: _t->on_options_lostButton_clicked(); break;
        case 3: _t->on_options_withdrawButton_clicked(); break;
        case 4: _t->on_options_flowButton_clicked(); break;
        case 5: _t->on_options_interestnoteButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject options::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_options.data,
      qt_meta_data_options,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *options::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *options::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_options.stringdata0))
        return static_cast<void*>(const_cast< options*>(this));
    return QDialog::qt_metacast(_clname);
}

int options::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
