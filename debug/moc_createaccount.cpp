/****************************************************************************
** Meta object code from reading C++ file 'createaccount.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bank-main/createaccount.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createaccount.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_createaccount_t {
    QByteArrayData data[8];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_createaccount_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_createaccount_t qt_meta_stringdata_createaccount = {
    {
QT_MOC_LITERAL(0, 0, 13), // "createaccount"
QT_MOC_LITERAL(1, 14, 27), // "on_login_backButton_clicked"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 25), // "on_login_okButton_clicked"
QT_MOC_LITERAL(4, 69, 38), // "on_login_confirmPasswdInput_t..."
QT_MOC_LITERAL(5, 108, 4), // "arg1"
QT_MOC_LITERAL(6, 113, 41), // "on_login_typeCombobox_current..."
QT_MOC_LITERAL(7, 155, 5) // "index"

    },
    "createaccount\0on_login_backButton_clicked\0"
    "\0on_login_okButton_clicked\0"
    "on_login_confirmPasswdInput_textEdited\0"
    "arg1\0on_login_typeCombobox_currentIndexChanged\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_createaccount[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void createaccount::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        createaccount *_t = static_cast<createaccount *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_login_backButton_clicked(); break;
        case 1: _t->on_login_okButton_clicked(); break;
        case 2: _t->on_login_confirmPasswdInput_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_login_typeCombobox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject createaccount::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_createaccount.data,
      qt_meta_data_createaccount,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *createaccount::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *createaccount::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_createaccount.stringdata0))
        return static_cast<void*>(const_cast< createaccount*>(this));
    return QDialog::qt_metacast(_clname);
}

int createaccount::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
