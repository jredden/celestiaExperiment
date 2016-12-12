/****************************************************************************
** Meta object code from reading C++ file 'qteventfinder.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/celestia/qt/qteventfinder.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qteventfinder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EventFinder[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      32,   12,   12,   12, 0x0a,
      56,   12,   12,   12, 0x0a,
      77,   12,   12,   12, 0x0a,
     100,   12,   12,   12, 0x0a,
     126,   12,   12,   12, 0x0a,
     152,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EventFinder[] = {
    "EventFinder\0\0slotFindEclipses()\0"
    "slotContextMenu(QPoint)\0slotSetEclipseTime()\0"
    "slotViewNearEclipsed()\0slotViewEclipsedSurface()\0"
    "slotViewOccluderSurface()\0"
    "slotViewBehindOccluder()\0"
};

void EventFinder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EventFinder *_t = static_cast<EventFinder *>(_o);
        switch (_id) {
        case 0: _t->slotFindEclipses(); break;
        case 1: _t->slotContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->slotSetEclipseTime(); break;
        case 3: _t->slotViewNearEclipsed(); break;
        case 4: _t->slotViewEclipsedSurface(); break;
        case 5: _t->slotViewOccluderSurface(); break;
        case 6: _t->slotViewBehindOccluder(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EventFinder::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EventFinder::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_EventFinder,
      qt_meta_data_EventFinder, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EventFinder::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EventFinder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EventFinder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EventFinder))
        return static_cast<void*>(const_cast< EventFinder*>(this));
    if (!strcmp(_clname, "EclipseFinderWatcher"))
        return static_cast< EclipseFinderWatcher*>(const_cast< EventFinder*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int EventFinder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
