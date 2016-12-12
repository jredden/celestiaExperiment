/****************************************************************************
** Meta object code from reading C++ file 'qtsettimedialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/celestia/qt/qtsettimedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtsettimedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SetTimeDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   14,   14,   14, 0x0a,
      68,   14,   14,   14, 0x0a,
      86,   14,   14,   14, 0x0a,
     108,   14,   14,   14, 0x0a,
     130,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SetTimeDialog[] = {
    "SetTimeDialog\0\0tdb\0setTimeTriggered(double)\0"
    "slotSetSimulationTime()\0slotSetDateTime()\0"
    "slotDateTimeChanged()\0slotTimeZoneChanged()\0"
    "accept()\0"
};

void SetTimeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SetTimeDialog *_t = static_cast<SetTimeDialog *>(_o);
        switch (_id) {
        case 0: _t->setTimeTriggered((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->slotSetSimulationTime(); break;
        case 2: _t->slotSetDateTime(); break;
        case 3: _t->slotDateTimeChanged(); break;
        case 4: _t->slotTimeZoneChanged(); break;
        case 5: _t->accept(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SetTimeDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SetTimeDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SetTimeDialog,
      qt_meta_data_SetTimeDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SetTimeDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SetTimeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SetTimeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SetTimeDialog))
        return static_cast<void*>(const_cast< SetTimeDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SetTimeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SetTimeDialog::setTimeTriggered(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
