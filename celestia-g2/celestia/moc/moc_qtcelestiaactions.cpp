/****************************************************************************
** Meta object code from reading C++ file 'qtcelestiaactions.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/celestia/qt/qtcelestiaactions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtcelestiaactions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CelestiaActions[] = {

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
      17,   16,   16,   16, 0x08,
      40,   16,   16,   16, 0x08,
      58,   16,   16,   16, 0x08,
      76,   16,   16,   16, 0x08,
      95,   16,   16,   16, 0x08,
     122,   16,   16,   16, 0x08,
     152,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CelestiaActions[] = {
    "CelestiaActions\0\0slotToggleRenderFlag()\0"
    "slotToggleLabel()\0slotToggleOrbit()\0"
    "slotSetStarStyle()\0slotSetTextureResolution()\0"
    "slotAdjustLimitingMagnitude()\0"
    "slotSetLightTimeDelay()\0"
};

void CelestiaActions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CelestiaActions *_t = static_cast<CelestiaActions *>(_o);
        switch (_id) {
        case 0: _t->slotToggleRenderFlag(); break;
        case 1: _t->slotToggleLabel(); break;
        case 2: _t->slotToggleOrbit(); break;
        case 3: _t->slotSetStarStyle(); break;
        case 4: _t->slotSetTextureResolution(); break;
        case 5: _t->slotAdjustLimitingMagnitude(); break;
        case 6: _t->slotSetLightTimeDelay(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CelestiaActions::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CelestiaActions::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CelestiaActions,
      qt_meta_data_CelestiaActions, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CelestiaActions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CelestiaActions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CelestiaActions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CelestiaActions))
        return static_cast<void*>(const_cast< CelestiaActions*>(this));
    if (!strcmp(_clname, "RendererWatcher"))
        return static_cast< RendererWatcher*>(const_cast< CelestiaActions*>(this));
    return QObject::qt_metacast(_clname);
}

int CelestiaActions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
