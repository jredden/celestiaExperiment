/****************************************************************************
** Meta object code from reading C++ file 'qteventfinder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/celestia/qt/qteventfinder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qteventfinder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EventFinder_t {
    QByteArrayData data[9];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EventFinder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EventFinder_t qt_meta_stringdata_EventFinder = {
    {
QT_MOC_LITERAL(0, 0, 11), // "EventFinder"
QT_MOC_LITERAL(1, 12, 16), // "slotFindEclipses"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "slotContextMenu"
QT_MOC_LITERAL(4, 46, 18), // "slotSetEclipseTime"
QT_MOC_LITERAL(5, 65, 20), // "slotViewNearEclipsed"
QT_MOC_LITERAL(6, 86, 23), // "slotViewEclipsedSurface"
QT_MOC_LITERAL(7, 110, 23), // "slotViewOccluderSurface"
QT_MOC_LITERAL(8, 134, 22) // "slotViewBehindOccluder"

    },
    "EventFinder\0slotFindEclipses\0\0"
    "slotContextMenu\0slotSetEclipseTime\0"
    "slotViewNearEclipsed\0slotViewEclipsedSurface\0"
    "slotViewOccluderSurface\0slotViewBehindOccluder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EventFinder[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    1,   50,    2, 0x0a /* Public */,
       4,    0,   53,    2, 0x0a /* Public */,
       5,    0,   54,    2, 0x0a /* Public */,
       6,    0,   55,    2, 0x0a /* Public */,
       7,    0,   56,    2, 0x0a /* Public */,
       8,    0,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EventFinder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EventFinder *_t = static_cast<EventFinder *>(_o);
        Q_UNUSED(_t)
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

const QMetaObject EventFinder::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_EventFinder.data,
      qt_meta_data_EventFinder,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EventFinder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EventFinder::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EventFinder.stringdata0))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
