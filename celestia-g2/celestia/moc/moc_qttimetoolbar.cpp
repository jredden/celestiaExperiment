/****************************************************************************
** Meta object code from reading C++ file 'qttimetoolbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/celestia/qt/qttimetoolbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qttimetoolbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TimeToolBar_t {
    QByteArrayData data[10];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TimeToolBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TimeToolBar_t qt_meta_stringdata_TimeToolBar = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TimeToolBar"
QT_MOC_LITERAL(1, 12, 13), // "slotPauseTime"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "slotReverseTime"
QT_MOC_LITERAL(4, 43, 12), // "slotRealTime"
QT_MOC_LITERAL(5, 56, 14), // "slotDoubleTime"
QT_MOC_LITERAL(6, 71, 12), // "slotHalfTime"
QT_MOC_LITERAL(7, 84, 10), // "slotFaster"
QT_MOC_LITERAL(8, 95, 10), // "slotSlower"
QT_MOC_LITERAL(9, 106, 15) // "slotCurrentTime"

    },
    "TimeToolBar\0slotPauseTime\0\0slotReverseTime\0"
    "slotRealTime\0slotDoubleTime\0slotHalfTime\0"
    "slotFaster\0slotSlower\0slotCurrentTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimeToolBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,

 // slots: parameters
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

void TimeToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TimeToolBar *_t = static_cast<TimeToolBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotPauseTime(); break;
        case 1: _t->slotReverseTime(); break;
        case 2: _t->slotRealTime(); break;
        case 3: _t->slotDoubleTime(); break;
        case 4: _t->slotHalfTime(); break;
        case 5: _t->slotFaster(); break;
        case 6: _t->slotSlower(); break;
        case 7: _t->slotCurrentTime(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TimeToolBar::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_TimeToolBar.data,
      qt_meta_data_TimeToolBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TimeToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimeToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TimeToolBar.stringdata0))
        return static_cast<void*>(const_cast< TimeToolBar*>(this));
    return QToolBar::qt_metacast(_clname);
}

int TimeToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
