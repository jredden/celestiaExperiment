/****************************************************************************
** Meta object code from reading C++ file 'qtsolarsystembrowser.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/celestia/qt/qtsolarsystembrowser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtsolarsystembrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SolarSystemBrowser[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      77,   19,   19,   19, 0x0a,
      99,   95,   19,   19, 0x0a,
     123,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SolarSystemBrowser[] = {
    "SolarSystemBrowser\0\0pos,sel\0"
    "selectionContextMenuRequested(QPoint,Selection&)\0"
    "slotRefreshTree()\0pos\0slotContextMenu(QPoint)\0"
    "slotMarkSelected()\0"
};

void SolarSystemBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SolarSystemBrowser *_t = static_cast<SolarSystemBrowser *>(_o);
        switch (_id) {
        case 0: _t->selectionContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< Selection(*)>(_a[2]))); break;
        case 1: _t->slotRefreshTree(); break;
        case 2: _t->slotContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->slotMarkSelected(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SolarSystemBrowser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SolarSystemBrowser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SolarSystemBrowser,
      qt_meta_data_SolarSystemBrowser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SolarSystemBrowser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SolarSystemBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SolarSystemBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SolarSystemBrowser))
        return static_cast<void*>(const_cast< SolarSystemBrowser*>(this));
    return QWidget::qt_metacast(_clname);
}

int SolarSystemBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SolarSystemBrowser::selectionContextMenuRequested(const QPoint & _t1, Selection & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
