/****************************************************************************
** Meta object code from reading C++ file 'qtsolarsystembrowser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/celestia/qt/qtsolarsystembrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtsolarsystembrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SolarSystemBrowser_t {
    QByteArrayData data[9];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SolarSystemBrowser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SolarSystemBrowser_t qt_meta_stringdata_SolarSystemBrowser = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SolarSystemBrowser"
QT_MOC_LITERAL(1, 19, 29), // "selectionContextMenuRequested"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 3), // "pos"
QT_MOC_LITERAL(4, 54, 10), // "Selection&"
QT_MOC_LITERAL(5, 65, 3), // "sel"
QT_MOC_LITERAL(6, 69, 15), // "slotRefreshTree"
QT_MOC_LITERAL(7, 85, 15), // "slotContextMenu"
QT_MOC_LITERAL(8, 101, 16) // "slotMarkSelected"

    },
    "SolarSystemBrowser\0selectionContextMenuRequested\0"
    "\0pos\0Selection&\0sel\0slotRefreshTree\0"
    "slotContextMenu\0slotMarkSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SolarSystemBrowser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   39,    2, 0x0a /* Public */,
       7,    1,   40,    2, 0x0a /* Public */,
       8,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void,

       0        // eod
};

void SolarSystemBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SolarSystemBrowser *_t = static_cast<SolarSystemBrowser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< Selection(*)>(_a[2]))); break;
        case 1: _t->slotRefreshTree(); break;
        case 2: _t->slotContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->slotMarkSelected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SolarSystemBrowser::*_t)(const QPoint & , Selection & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SolarSystemBrowser::selectionContextMenuRequested)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject SolarSystemBrowser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SolarSystemBrowser.data,
      qt_meta_data_SolarSystemBrowser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SolarSystemBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SolarSystemBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SolarSystemBrowser.stringdata0))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SolarSystemBrowser::selectionContextMenuRequested(const QPoint & _t1, Selection & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
