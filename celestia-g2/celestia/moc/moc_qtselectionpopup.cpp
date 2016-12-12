/****************************************************************************
** Meta object code from reading C++ file 'qtselectionpopup.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/celestia/qt/qtselectionpopup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtselectionpopup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SelectionPopup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   15,   15,   15, 0x0a,
      68,   15,   15,   15, 0x0a,
      90,   15,   15,   15, 0x0a,
     110,   15,   15,   15, 0x0a,
     132,   15,   15,   15, 0x0a,
     157,   15,   15,   15, 0x0a,
     186,   15,   15,   15, 0x0a,
     210,   15,   15,   15, 0x0a,
     221,   15,   15,   15, 0x0a,
     242,   15,   15,   15, 0x0a,
     264,   15,   15,   15, 0x0a,
     289,   15,   15,   15, 0x0a,
     316,   15,   15,   15, 0x0a,
     339,   15,   15,   15, 0x0a,
     372,   15,   15,   15, 0x0a,
     403,   15,   15,   15, 0x0a,
     426,   15,   15,   15, 0x0a,
     446,   15,   15,   15, 0x0a,
     464,   15,   15,   15, 0x0a,
     475,   15,   15,   15, 0x0a,
     504,  502,   15,   15, 0x0a,
     524,  502,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SelectionPopup[] = {
    "SelectionPopup\0\0sel\0"
    "selectionInfoRequested(Selection&)\0"
    "slotSelect()\0slotCenterSelection()\0"
    "slotGotoSelection()\0slotFollowSelection()\0"
    "slotSyncOrbitSelection()\0"
    "slotSelectAlternateSurface()\0"
    "slotSelectChildObject()\0slotMark()\0"
    "slotToggleBodyAxes()\0slotToggleFrameAxes()\0"
    "slotToggleSunDirection()\0"
    "slotToggleVelocityVector()\0"
    "slotToggleSpinVector()\0"
    "slotToggleFrameCenterDirection()\0"
    "slotTogglePlanetographicGrid()\0"
    "slotToggleTerminator()\0slotGotoStartDate()\0"
    "slotGotoEndDate()\0slotInfo()\0"
    "slotToggleVisibility(bool)\0p\0"
    "popupAtGoto(QPoint)\0popupAtCenter(QPoint)\0"
};

void SelectionPopup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SelectionPopup *_t = static_cast<SelectionPopup *>(_o);
        switch (_id) {
        case 0: _t->selectionInfoRequested((*reinterpret_cast< Selection(*)>(_a[1]))); break;
        case 1: _t->slotSelect(); break;
        case 2: _t->slotCenterSelection(); break;
        case 3: _t->slotGotoSelection(); break;
        case 4: _t->slotFollowSelection(); break;
        case 5: _t->slotSyncOrbitSelection(); break;
        case 6: _t->slotSelectAlternateSurface(); break;
        case 7: _t->slotSelectChildObject(); break;
        case 8: _t->slotMark(); break;
        case 9: _t->slotToggleBodyAxes(); break;
        case 10: _t->slotToggleFrameAxes(); break;
        case 11: _t->slotToggleSunDirection(); break;
        case 12: _t->slotToggleVelocityVector(); break;
        case 13: _t->slotToggleSpinVector(); break;
        case 14: _t->slotToggleFrameCenterDirection(); break;
        case 15: _t->slotTogglePlanetographicGrid(); break;
        case 16: _t->slotToggleTerminator(); break;
        case 17: _t->slotGotoStartDate(); break;
        case 18: _t->slotGotoEndDate(); break;
        case 19: _t->slotInfo(); break;
        case 20: _t->slotToggleVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->popupAtGoto((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 22: _t->popupAtCenter((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SelectionPopup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SelectionPopup::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_SelectionPopup,
      qt_meta_data_SelectionPopup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SelectionPopup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SelectionPopup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SelectionPopup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SelectionPopup))
        return static_cast<void*>(const_cast< SelectionPopup*>(this));
    return QMenu::qt_metacast(_clname);
}

int SelectionPopup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void SelectionPopup::selectionInfoRequested(Selection & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
