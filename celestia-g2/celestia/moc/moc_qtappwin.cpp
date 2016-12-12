/****************************************************************************
** Meta object code from reading C++ file 'qtappwin.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/celestia/qt/qtappwin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtappwin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CelestiaAppWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   19,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      64,   18,   18,   18, 0x0a,
      88,   80,   18,   18, 0x0a,
     136,   18,   18,   18, 0x08,
     152,   18,   18,   18, 0x08,
     171,   18,   18,   18, 0x08,
     187,   18,   18,   18, 0x08,
     201,   18,   18,   18, 0x08,
     216,   18,   18,   18, 0x08,
     234,   18,   18,   18, 0x08,
     250,   18,   18,   18, 0x08,
     262,   18,   18,   18, 0x08,
     280,   18,   18,   18, 0x08,
     306,   18,   18,   18, 0x08,
     334,   18,   18,   18, 0x08,
     350,   18,   18,   18, 0x08,
     367,   18,   18,   18, 0x08,
     384,   18,   18,   18, 0x08,
     410,   18,   18,   18, 0x08,
     441,   18,   18,   18, 0x08,
     466,  462,   18,   18, 0x08,
     497,   18,   18,   18, 0x08,
     520,   18,   18,   18, 0x08,
     537,   18,   18,   18, 0x08,
     558,   18,   18,   18, 0x08,
     581,   18,   18,   18, 0x08,
     597,   18,   18,   18, 0x08,
     614,   18,   18,   18, 0x08,
     632,   18,   18,   18, 0x08,
     660,  656,   18,   18, 0x08,
     691,  656,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CelestiaAppWindow[] = {
    "CelestiaAppWindow\0\0s,align,c\0"
    "progressUpdate(QString,int,QColor)\0"
    "celestia_tick()\0pos,sel\0"
    "slotShowSelectionContextMenu(QPoint,Selection&)\0"
    "slotGrabImage()\0slotCaptureVideo()\0"
    "slotCopyImage()\0slotCopyURL()\0"
    "slotPasteURL()\0centerSelection()\0"
    "gotoSelection()\0selectSun()\0"
    "slotPreferences()\0slotSplitViewVertically()\0"
    "slotSplitViewHorizontally()\0slotCycleView()\0"
    "slotSingleView()\0slotDeleteView()\0"
    "slotToggleFramesVisible()\0"
    "slotToggleActiveFrameVisible()\0"
    "slotToggleSyncTime()\0sel\0"
    "slotShowObjectInfo(Selection&)\0"
    "slotOpenScriptDialog()\0slotOpenScript()\0"
    "slotShowTimeDialog()\0slotToggleFullScreen()\0"
    "slotShowAbout()\0slotShowGLInfo()\0"
    "slotAddBookmark()\0slotOrganizeBookmarks()\0"
    "url\0slotBookmarkTriggered(QString)\0"
    "handleCelUrl(QUrl)\0"
};

void CelestiaAppWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CelestiaAppWindow *_t = static_cast<CelestiaAppWindow *>(_o);
        switch (_id) {
        case 0: _t->progressUpdate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3]))); break;
        case 1: _t->celestia_tick(); break;
        case 2: _t->slotShowSelectionContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< Selection(*)>(_a[2]))); break;
        case 3: _t->slotGrabImage(); break;
        case 4: _t->slotCaptureVideo(); break;
        case 5: _t->slotCopyImage(); break;
        case 6: _t->slotCopyURL(); break;
        case 7: _t->slotPasteURL(); break;
        case 8: _t->centerSelection(); break;
        case 9: _t->gotoSelection(); break;
        case 10: _t->selectSun(); break;
        case 11: _t->slotPreferences(); break;
        case 12: _t->slotSplitViewVertically(); break;
        case 13: _t->slotSplitViewHorizontally(); break;
        case 14: _t->slotCycleView(); break;
        case 15: _t->slotSingleView(); break;
        case 16: _t->slotDeleteView(); break;
        case 17: _t->slotToggleFramesVisible(); break;
        case 18: _t->slotToggleActiveFrameVisible(); break;
        case 19: _t->slotToggleSyncTime(); break;
        case 20: _t->slotShowObjectInfo((*reinterpret_cast< Selection(*)>(_a[1]))); break;
        case 21: _t->slotOpenScriptDialog(); break;
        case 22: _t->slotOpenScript(); break;
        case 23: _t->slotShowTimeDialog(); break;
        case 24: _t->slotToggleFullScreen(); break;
        case 25: _t->slotShowAbout(); break;
        case 26: _t->slotShowGLInfo(); break;
        case 27: _t->slotAddBookmark(); break;
        case 28: _t->slotOrganizeBookmarks(); break;
        case 29: _t->slotBookmarkTriggered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->handleCelUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CelestiaAppWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CelestiaAppWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CelestiaAppWindow,
      qt_meta_data_CelestiaAppWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CelestiaAppWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CelestiaAppWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CelestiaAppWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CelestiaAppWindow))
        return static_cast<void*>(const_cast< CelestiaAppWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CelestiaAppWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void CelestiaAppWindow::progressUpdate(const QString & _t1, int _t2, const QColor & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
