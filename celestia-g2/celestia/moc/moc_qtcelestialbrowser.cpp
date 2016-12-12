/****************************************************************************
** Meta object code from reading C++ file 'qtcelestialbrowser.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/celestia/qt/qtcelestialbrowser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtcelestialbrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CelestialBrowser[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      75,   17,   17,   17, 0x0a,
      98,   94,   17,   17, 0x0a,
     122,   17,   17,   17, 0x0a,
     141,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CelestialBrowser[] = {
    "CelestialBrowser\0\0pos,sel\0"
    "selectionContextMenuRequested(QPoint,Selection&)\0"
    "slotRefreshTable()\0pos\0slotContextMenu(QPoint)\0"
    "slotMarkSelected()\0slotClearMarkers()\0"
};

void CelestialBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CelestialBrowser *_t = static_cast<CelestialBrowser *>(_o);
        switch (_id) {
        case 0: _t->selectionContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< Selection(*)>(_a[2]))); break;
        case 1: _t->slotRefreshTable(); break;
        case 2: _t->slotContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->slotMarkSelected(); break;
        case 4: _t->slotClearMarkers(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CelestialBrowser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CelestialBrowser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CelestialBrowser,
      qt_meta_data_CelestialBrowser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CelestialBrowser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CelestialBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CelestialBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CelestialBrowser))
        return static_cast<void*>(const_cast< CelestialBrowser*>(this));
    return QWidget::qt_metacast(_clname);
}

int CelestialBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CelestialBrowser::selectionContextMenuRequested(const QPoint & _t1, Selection & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
