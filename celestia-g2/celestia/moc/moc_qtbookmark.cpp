/****************************************************************************
** Meta object code from reading C++ file 'qtbookmark.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/celestia/qt/qtbookmark.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtbookmark.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BookmarkManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BookmarkManager[] = {
    "BookmarkManager\0\0url\0bookmarkTriggered(QString)\0"
    "bookmarkMenuItemTriggered()\0"
};

void BookmarkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BookmarkManager *_t = static_cast<BookmarkManager *>(_o);
        switch (_id) {
        case 0: _t->bookmarkTriggered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->bookmarkMenuItemTriggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BookmarkManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BookmarkManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BookmarkManager,
      qt_meta_data_BookmarkManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BookmarkManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BookmarkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BookmarkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarkManager))
        return static_cast<void*>(const_cast< BookmarkManager*>(this));
    return QObject::qt_metacast(_clname);
}

int BookmarkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void BookmarkManager::bookmarkTriggered(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_BookmarkToolBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_BookmarkToolBar[] = {
    "BookmarkToolBar\0"
};

void BookmarkToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData BookmarkToolBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BookmarkToolBar::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_BookmarkToolBar,
      qt_meta_data_BookmarkToolBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BookmarkToolBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BookmarkToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BookmarkToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarkToolBar))
        return static_cast<void*>(const_cast< BookmarkToolBar*>(this));
    return QToolBar::qt_metacast(_clname);
}

int BookmarkToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_AddBookmarkDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AddBookmarkDialog[] = {
    "AddBookmarkDialog\0\0accept()\0"
};

void AddBookmarkDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddBookmarkDialog *_t = static_cast<AddBookmarkDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AddBookmarkDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddBookmarkDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddBookmarkDialog,
      qt_meta_data_AddBookmarkDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddBookmarkDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddBookmarkDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddBookmarkDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddBookmarkDialog))
        return static_cast<void*>(const_cast< AddBookmarkDialog*>(this));
    if (!strcmp(_clname, "Ui_addBookmarkDialog"))
        return static_cast< Ui_addBookmarkDialog*>(const_cast< AddBookmarkDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddBookmarkDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_NewBookmarkFolderDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NewBookmarkFolderDialog[] = {
    "NewBookmarkFolderDialog\0\0accept()\0"
};

void NewBookmarkFolderDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NewBookmarkFolderDialog *_t = static_cast<NewBookmarkFolderDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData NewBookmarkFolderDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NewBookmarkFolderDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_NewBookmarkFolderDialog,
      qt_meta_data_NewBookmarkFolderDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NewBookmarkFolderDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NewBookmarkFolderDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NewBookmarkFolderDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NewBookmarkFolderDialog))
        return static_cast<void*>(const_cast< NewBookmarkFolderDialog*>(this));
    if (!strcmp(_clname, "Ui_newBookmarkFolderDialog"))
        return static_cast< Ui_newBookmarkFolderDialog*>(const_cast< NewBookmarkFolderDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int NewBookmarkFolderDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_OrganizeBookmarksDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x0a,
      34,   24,   24,   24, 0x0a,
      63,   24,   24,   24, 0x0a,
      95,   24,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OrganizeBookmarksDialog[] = {
    "OrganizeBookmarksDialog\0\0accept()\0"
    "on_newFolderButton_clicked()\0"
    "on_newSeparatorButton_clicked()\0"
    "on_removeItemButton_clicked()\0"
};

void OrganizeBookmarksDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OrganizeBookmarksDialog *_t = static_cast<OrganizeBookmarksDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->on_newFolderButton_clicked(); break;
        case 2: _t->on_newSeparatorButton_clicked(); break;
        case 3: _t->on_removeItemButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData OrganizeBookmarksDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OrganizeBookmarksDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OrganizeBookmarksDialog,
      qt_meta_data_OrganizeBookmarksDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OrganizeBookmarksDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OrganizeBookmarksDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OrganizeBookmarksDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OrganizeBookmarksDialog))
        return static_cast<void*>(const_cast< OrganizeBookmarksDialog*>(this));
    if (!strcmp(_clname, "Ui_organizeBookmarksDialog"))
        return static_cast< Ui_organizeBookmarksDialog*>(const_cast< OrganizeBookmarksDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int OrganizeBookmarksDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
