/****************************************************************************
** Meta object code from reading C++ file 'qtbookmark.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/celestia/qt/qtbookmark.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtbookmark.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BookmarkManager_t {
    QByteArrayData data[5];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BookmarkManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BookmarkManager_t qt_meta_stringdata_BookmarkManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "BookmarkManager"
QT_MOC_LITERAL(1, 16, 17), // "bookmarkTriggered"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 3), // "url"
QT_MOC_LITERAL(4, 39, 25) // "bookmarkMenuItemTriggered"

    },
    "BookmarkManager\0bookmarkTriggered\0\0"
    "url\0bookmarkMenuItemTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BookmarkManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void BookmarkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BookmarkManager *_t = static_cast<BookmarkManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bookmarkTriggered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->bookmarkMenuItemTriggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BookmarkManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BookmarkManager::bookmarkTriggered)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject BookmarkManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BookmarkManager.data,
      qt_meta_data_BookmarkManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BookmarkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookmarkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarkManager.stringdata0))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void BookmarkManager::bookmarkTriggered(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_BookmarkToolBar_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BookmarkToolBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BookmarkToolBar_t qt_meta_stringdata_BookmarkToolBar = {
    {
QT_MOC_LITERAL(0, 0, 15) // "BookmarkToolBar"

    },
    "BookmarkToolBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BookmarkToolBar[] = {

 // content:
       7,       // revision
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

void BookmarkToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject BookmarkToolBar::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_BookmarkToolBar.data,
      qt_meta_data_BookmarkToolBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BookmarkToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookmarkToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarkToolBar.stringdata0))
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
struct qt_meta_stringdata_AddBookmarkDialog_t {
    QByteArrayData data[3];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddBookmarkDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddBookmarkDialog_t qt_meta_stringdata_AddBookmarkDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AddBookmarkDialog"
QT_MOC_LITERAL(1, 18, 6), // "accept"
QT_MOC_LITERAL(2, 25, 0) // ""

    },
    "AddBookmarkDialog\0accept\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddBookmarkDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void AddBookmarkDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddBookmarkDialog *_t = static_cast<AddBookmarkDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accept(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AddBookmarkDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddBookmarkDialog.data,
      qt_meta_data_AddBookmarkDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddBookmarkDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddBookmarkDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddBookmarkDialog.stringdata0))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_NewBookmarkFolderDialog_t {
    QByteArrayData data[3];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NewBookmarkFolderDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NewBookmarkFolderDialog_t qt_meta_stringdata_NewBookmarkFolderDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "NewBookmarkFolderDialog"
QT_MOC_LITERAL(1, 24, 6), // "accept"
QT_MOC_LITERAL(2, 31, 0) // ""

    },
    "NewBookmarkFolderDialog\0accept\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewBookmarkFolderDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void NewBookmarkFolderDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NewBookmarkFolderDialog *_t = static_cast<NewBookmarkFolderDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accept(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject NewBookmarkFolderDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_NewBookmarkFolderDialog.data,
      qt_meta_data_NewBookmarkFolderDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NewBookmarkFolderDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewBookmarkFolderDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NewBookmarkFolderDialog.stringdata0))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_OrganizeBookmarksDialog_t {
    QByteArrayData data[6];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OrganizeBookmarksDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OrganizeBookmarksDialog_t qt_meta_stringdata_OrganizeBookmarksDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "OrganizeBookmarksDialog"
QT_MOC_LITERAL(1, 24, 6), // "accept"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 26), // "on_newFolderButton_clicked"
QT_MOC_LITERAL(4, 59, 29), // "on_newSeparatorButton_clicked"
QT_MOC_LITERAL(5, 89, 27) // "on_removeItemButton_clicked"

    },
    "OrganizeBookmarksDialog\0accept\0\0"
    "on_newFolderButton_clicked\0"
    "on_newSeparatorButton_clicked\0"
    "on_removeItemButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OrganizeBookmarksDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OrganizeBookmarksDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OrganizeBookmarksDialog *_t = static_cast<OrganizeBookmarksDialog *>(_o);
        Q_UNUSED(_t)
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

const QMetaObject OrganizeBookmarksDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OrganizeBookmarksDialog.data,
      qt_meta_data_OrganizeBookmarksDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OrganizeBookmarksDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrganizeBookmarksDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OrganizeBookmarksDialog.stringdata0))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
