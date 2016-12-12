/****************************************************************************
** Meta object code from reading C++ file 'qttimetoolbar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/celestia/qt/qttimetoolbar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qttimetoolbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TimeToolBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      29,   12,   12,   12, 0x0a,
      47,   12,   12,   12, 0x0a,
      62,   12,   12,   12, 0x0a,
      79,   12,   12,   12, 0x0a,
      94,   12,   12,   12, 0x0a,
     107,   12,   12,   12, 0x0a,
     120,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TimeToolBar[] = {
    "TimeToolBar\0\0slotPauseTime()\0"
    "slotReverseTime()\0slotRealTime()\0"
    "slotDoubleTime()\0slotHalfTime()\0"
    "slotFaster()\0slotSlower()\0slotCurrentTime()\0"
};

void TimeToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TimeToolBar *_t = static_cast<TimeToolBar *>(_o);
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

const QMetaObjectExtraData TimeToolBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TimeToolBar::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_TimeToolBar,
      qt_meta_data_TimeToolBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TimeToolBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TimeToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TimeToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TimeToolBar))
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
    }
    return _id;
}
QT_END_MOC_NAMESPACE
