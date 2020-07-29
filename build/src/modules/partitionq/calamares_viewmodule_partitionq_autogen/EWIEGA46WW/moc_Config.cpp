/****************************************************************************
** Meta object code from reading C++ file 'Config.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/modules/partitionq/Config.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Config.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PreviewBar_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PreviewBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PreviewBar_t qt_meta_stringdata_PreviewBar = {
    {
QT_MOC_LITERAL(0, 0, 10) // "PreviewBar"

    },
    "PreviewBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PreviewBar[] = {

 // content:
       8,       // revision
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

void PreviewBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PreviewBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PreviewBar.data,
    qt_meta_data_PreviewBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PreviewBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PreviewBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PreviewBar.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PreviewBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Opt_t {
    QByteArrayData data[18];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Opt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Opt_t qt_meta_stringdata_Opt = {
    {
QT_MOC_LITERAL(0, 0, 3), // "Opt"
QT_MOC_LITERAL(1, 4, 14), // "visibleChanged"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 14), // "enabledChanged"
QT_MOC_LITERAL(4, 35, 14), // "checkedChanged"
QT_MOC_LITERAL(5, 50, 12), // "labelChanged"
QT_MOC_LITERAL(6, 63, 14), // "tooltipChanged"
QT_MOC_LITERAL(7, 78, 14), // "messageChanged"
QT_MOC_LITERAL(8, 93, 11), // "iconChanged"
QT_MOC_LITERAL(9, 105, 16), // "exclusiveChanged"
QT_MOC_LITERAL(10, 122, 7), // "visible"
QT_MOC_LITERAL(11, 130, 7), // "enabled"
QT_MOC_LITERAL(12, 138, 7), // "checked"
QT_MOC_LITERAL(13, 146, 9), // "exclusive"
QT_MOC_LITERAL(14, 156, 5), // "label"
QT_MOC_LITERAL(15, 162, 7), // "tooltip"
QT_MOC_LITERAL(16, 170, 7), // "message"
QT_MOC_LITERAL(17, 178, 4) // "icon"

    },
    "Opt\0visibleChanged\0\0enabledChanged\0"
    "checkedChanged\0labelChanged\0tooltipChanged\0"
    "messageChanged\0iconChanged\0exclusiveChanged\0"
    "visible\0enabled\0checked\0exclusive\0"
    "label\0tooltip\0message\0icon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Opt[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       8,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,
       7,    0,   59,    2, 0x06 /* Public */,
       8,    0,   60,    2, 0x06 /* Public */,
       9,    0,   61,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00495801,
      11, QMetaType::Bool, 0x00495801,
      12, QMetaType::Bool, 0x00495903,
      13, QMetaType::Bool, 0x00495801,
      14, QMetaType::QString, 0x00495801,
      15, QMetaType::QString, 0x00495801,
      16, QMetaType::QString, 0x00495801,
      17, QMetaType::QString, 0x00495801,

 // properties: notify_signal_id
       0,
       1,
       2,
       7,
       3,
       4,
       5,
       6,

       0        // eod
};

void Opt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Opt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->visibleChanged(); break;
        case 1: _t->enabledChanged(); break;
        case 2: _t->checkedChanged(); break;
        case 3: _t->labelChanged(); break;
        case 4: _t->tooltipChanged(); break;
        case 5: _t->messageChanged(); break;
        case 6: _t->iconChanged(); break;
        case 7: _t->exclusiveChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Opt::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Opt::visibleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Opt::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Opt::enabledChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Opt::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Opt::checkedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Opt::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Opt::labelChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Opt::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Opt::tooltipChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Opt::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Opt::messageChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Opt::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Opt::iconChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Opt::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Opt::exclusiveChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Opt *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->visible(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->checked(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->exclusive(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->tooltip(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->message(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->icon(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Opt *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setChecked(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Opt::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Opt.data,
    qt_meta_data_Opt,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Opt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Opt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Opt.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Opt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Opt::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Opt::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Opt::checkedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Opt::labelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Opt::tooltipChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Opt::messageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Opt::iconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Opt::exclusiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
struct qt_meta_stringdata_OptGroup_t {
    QByteArrayData data[6];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OptGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OptGroup_t qt_meta_stringdata_OptGroup = {
    {
QT_MOC_LITERAL(0, 0, 8), // "OptGroup"
QT_MOC_LITERAL(1, 9, 10), // "optToggled"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 2), // "id"
QT_MOC_LITERAL(4, 24, 7), // "checked"
QT_MOC_LITERAL(5, 32, 16) // "exclusiveChanged"

    },
    "OptGroup\0optToggled\0\0id\0checked\0"
    "exclusiveChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OptGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       5,    0,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    4,
    QMetaType::Void,

       0        // eod
};

void OptGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OptGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->optToggled((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->exclusiveChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OptGroup::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OptGroup::optToggled)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OptGroup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OptGroup::exclusiveChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OptGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OptGroup.data,
    qt_meta_data_OptGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OptGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OptGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OptGroup.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OptGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OptGroup::optToggled(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OptGroup::exclusiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_EncryptOpt_t {
    QByteArrayData data[7];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EncryptOpt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EncryptOpt_t qt_meta_stringdata_EncryptOpt = {
    {
QT_MOC_LITERAL(0, 0, 10), // "EncryptOpt"
QT_MOC_LITERAL(1, 11, 24), // "confirmPassphraseChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 17), // "passphraseChanged"
QT_MOC_LITERAL(4, 55, 12), // "stateChanged"
QT_MOC_LITERAL(5, 68, 10), // "passphrase"
QT_MOC_LITERAL(6, 79, 17) // "confirmPassphrase"

    },
    "EncryptOpt\0confirmPassphraseChanged\0"
    "\0passphraseChanged\0stateChanged\0"
    "passphrase\0confirmPassphrase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EncryptOpt[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00495103,
       6, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       1,
       0,

       0        // eod
};

void EncryptOpt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EncryptOpt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->confirmPassphraseChanged(); break;
        case 1: _t->passphraseChanged(); break;
        case 2: _t->stateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EncryptOpt::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EncryptOpt::confirmPassphraseChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EncryptOpt::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EncryptOpt::passphraseChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EncryptOpt::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EncryptOpt::stateChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<EncryptOpt *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->passphrase(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->confirmPassphrase(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<EncryptOpt *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPassphrase(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setConfirmPassphrase(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EncryptOpt::staticMetaObject = { {
    QMetaObject::SuperData::link<Opt::staticMetaObject>(),
    qt_meta_stringdata_EncryptOpt.data,
    qt_meta_data_EncryptOpt,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EncryptOpt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EncryptOpt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EncryptOpt.stringdata0))
        return static_cast<void*>(this);
    return Opt::qt_metacast(_clname);
}

int EncryptOpt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Opt::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void EncryptOpt::confirmPassphraseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void EncryptOpt::passphraseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void EncryptOpt::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_DeviceInfo_t {
    QByteArrayData data[5];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceInfo_t qt_meta_stringdata_DeviceInfo = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DeviceInfo"
QT_MOC_LITERAL(1, 11, 16), // "tableTypeChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "label"
QT_MOC_LITERAL(4, 35, 4) // "icon"

    },
    "DeviceInfo\0tableTypeChanged\0\0label\0"
    "icon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495003,
       4, QMetaType::QString, 0x00495003,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void DeviceInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tableTypeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeviceInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceInfo::tableTypeChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DeviceInfo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_ptLabel; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->m_ptIcon; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DeviceInfo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->m_ptLabel != *reinterpret_cast< QString*>(_v)) {
                _t->m_ptLabel = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->tableTypeChanged();
            }
            break;
        case 1:
            if (_t->m_ptIcon != *reinterpret_cast< QString*>(_v)) {
                _t->m_ptIcon = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->tableTypeChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DeviceInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DeviceInfo.data,
    qt_meta_data_DeviceInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeviceInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DeviceInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DeviceInfo::tableTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_EfiModel_t {
    QByteArrayData data[3];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EfiModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EfiModel_t qt_meta_stringdata_EfiModel = {
    {
QT_MOC_LITERAL(0, 0, 8), // "EfiModel"
QT_MOC_LITERAL(1, 9, 19), // "currentIndexChanged"
QT_MOC_LITERAL(2, 29, 0) // ""

    },
    "EfiModel\0currentIndexChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EfiModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void EfiModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EfiModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentIndexChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EfiModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EfiModel::currentIndexChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EfiModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_EfiModel.data,
    qt_meta_data_EfiModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EfiModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EfiModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EfiModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int EfiModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void EfiModel::currentIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_EfiOpt_t {
    QByteArrayData data[5];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EfiOpt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EfiOpt_t qt_meta_stringdata_EfiOpt = {
    {
QT_MOC_LITERAL(0, 0, 6), // "EfiOpt"
QT_MOC_LITERAL(1, 7, 12), // "modelChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 5), // "model"
QT_MOC_LITERAL(4, 27, 9) // "EfiModel*"

    },
    "EfiOpt\0modelChanged\0\0model\0EfiModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EfiOpt[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x00495809,

 // properties: notify_signal_id
       0,

       0        // eod
};

void EfiOpt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EfiOpt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EfiOpt::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EfiOpt::modelChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EfiModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<EfiOpt *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< EfiModel**>(_v) = _t->model(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject EfiOpt::staticMetaObject = { {
    QMetaObject::SuperData::link<Opt::staticMetaObject>(),
    qt_meta_stringdata_EfiOpt.data,
    qt_meta_data_EfiOpt,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EfiOpt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EfiOpt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EfiOpt.stringdata0))
        return static_cast<void*>(this);
    return Opt::qt_metacast(_clname);
}

int EfiOpt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Opt::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void EfiOpt::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_Config_t {
    QByteArrayData data[56];
    char stringdata0[897];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Config_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Config_t qt_meta_stringdata_Config = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Config"
QT_MOC_LITERAL(1, 7, 17), // "nextStatusChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "actionChosen"
QT_MOC_LITERAL(4, 39, 12), // "deviceChosen"
QT_MOC_LITERAL(5, 52, 19), // "prettyStatusChanged"
QT_MOC_LITERAL(6, 72, 19), // "devicesModelChanged"
QT_MOC_LITERAL(7, 92, 22), // "bootloaderModelChanged"
QT_MOC_LITERAL(8, 115, 27), // "availableSwapChoicesChanged"
QT_MOC_LITERAL(9, 143, 20), // "installChoiceChanged"
QT_MOC_LITERAL(10, 164, 21), // "deviceEditableChanged"
QT_MOC_LITERAL(11, 186, 18), // "eraseOptionChanged"
QT_MOC_LITERAL(12, 205, 22), // "alongsideOptionChanged"
QT_MOC_LITERAL(13, 228, 20), // "replaceOptionChanged"
QT_MOC_LITERAL(14, 249, 26), // "somethingElseOptionChanged"
QT_MOC_LITERAL(15, 276, 20), // "encryptOptionChanged"
QT_MOC_LITERAL(16, 297, 16), // "efiOptionChanged"
QT_MOC_LITERAL(17, 314, 22), // "reuseHomeOptionChanged"
QT_MOC_LITERAL(18, 337, 19), // "efiAvailableChanged"
QT_MOC_LITERAL(19, 357, 12), // "isEfiChanged"
QT_MOC_LITERAL(20, 370, 28), // "onPartitionToReplaceSelected"
QT_MOC_LITERAL(21, 399, 11), // "QModelIndex"
QT_MOC_LITERAL(22, 411, 7), // "current"
QT_MOC_LITERAL(23, 419, 8), // "previous"
QT_MOC_LITERAL(24, 428, 26), // "doReplaceSelectedPartition"
QT_MOC_LITERAL(25, 455, 24), // "doAlongsideSetupSplitter"
QT_MOC_LITERAL(26, 480, 27), // "onEncryptWidgetStateChanged"
QT_MOC_LITERAL(27, 508, 26), // "onHomeCheckBoxStateChanged"
QT_MOC_LITERAL(28, 535, 15), // "onActionChanged"
QT_MOC_LITERAL(29, 551, 24), // "onEraseSwapChoiceChanged"
QT_MOC_LITERAL(30, 576, 7), // "devices"
QT_MOC_LITERAL(31, 584, 12), // "DeviceModel*"
QT_MOC_LITERAL(32, 597, 11), // "bootloaders"
QT_MOC_LITERAL(33, 609, 16), // "BootLoaderModel*"
QT_MOC_LITERAL(34, 626, 20), // "availableSwapChoices"
QT_MOC_LITERAL(35, 647, 13), // "SwapChoiceSet"
QT_MOC_LITERAL(36, 661, 12), // "prettyStatus"
QT_MOC_LITERAL(37, 674, 13), // "installChoice"
QT_MOC_LITERAL(38, 688, 13), // "InstallChoice"
QT_MOC_LITERAL(39, 702, 14), // "deviceEditable"
QT_MOC_LITERAL(40, 717, 11), // "eraseOption"
QT_MOC_LITERAL(41, 729, 4), // "Opt*"
QT_MOC_LITERAL(42, 734, 15), // "alongsideOption"
QT_MOC_LITERAL(43, 750, 13), // "replaceOption"
QT_MOC_LITERAL(44, 764, 19), // "somethingElseOption"
QT_MOC_LITERAL(45, 784, 13), // "encryptOption"
QT_MOC_LITERAL(46, 798, 11), // "EncryptOpt*"
QT_MOC_LITERAL(47, 810, 15), // "reuseHomeOption"
QT_MOC_LITERAL(48, 826, 9), // "efiOption"
QT_MOC_LITERAL(49, 836, 7), // "EfiOpt*"
QT_MOC_LITERAL(50, 844, 12), // "efiAvailable"
QT_MOC_LITERAL(51, 857, 8), // "NoChoice"
QT_MOC_LITERAL(52, 866, 9), // "Alongside"
QT_MOC_LITERAL(53, 876, 5), // "Erase"
QT_MOC_LITERAL(54, 882, 7), // "Replace"
QT_MOC_LITERAL(55, 890, 6) // "Manual"

    },
    "Config\0nextStatusChanged\0\0actionChosen\0"
    "deviceChosen\0prettyStatusChanged\0"
    "devicesModelChanged\0bootloaderModelChanged\0"
    "availableSwapChoicesChanged\0"
    "installChoiceChanged\0deviceEditableChanged\0"
    "eraseOptionChanged\0alongsideOptionChanged\0"
    "replaceOptionChanged\0somethingElseOptionChanged\0"
    "encryptOptionChanged\0efiOptionChanged\0"
    "reuseHomeOptionChanged\0efiAvailableChanged\0"
    "isEfiChanged\0onPartitionToReplaceSelected\0"
    "QModelIndex\0current\0previous\0"
    "doReplaceSelectedPartition\0"
    "doAlongsideSetupSplitter\0"
    "onEncryptWidgetStateChanged\0"
    "onHomeCheckBoxStateChanged\0onActionChanged\0"
    "onEraseSwapChoiceChanged\0devices\0"
    "DeviceModel*\0bootloaders\0BootLoaderModel*\0"
    "availableSwapChoices\0SwapChoiceSet\0"
    "prettyStatus\0installChoice\0InstallChoice\0"
    "deviceEditable\0eraseOption\0Opt*\0"
    "alongsideOption\0replaceOption\0"
    "somethingElseOption\0encryptOption\0"
    "EncryptOpt*\0reuseHomeOption\0efiOption\0"
    "EfiOpt*\0efiAvailable\0NoChoice\0Alongside\0"
    "Erase\0Replace\0Manual"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Config[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
      14,  176, // properties
       1,  232, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  139,    2, 0x06 /* Public */,
       3,    0,  142,    2, 0x06 /* Public */,
       4,    0,  143,    2, 0x06 /* Public */,
       5,    0,  144,    2, 0x06 /* Public */,
       6,    0,  145,    2, 0x06 /* Public */,
       7,    0,  146,    2, 0x06 /* Public */,
       8,    0,  147,    2, 0x06 /* Public */,
       9,    0,  148,    2, 0x06 /* Public */,
      10,    0,  149,    2, 0x06 /* Public */,
      11,    0,  150,    2, 0x06 /* Public */,
      12,    0,  151,    2, 0x06 /* Public */,
      13,    0,  152,    2, 0x06 /* Public */,
      14,    0,  153,    2, 0x06 /* Public */,
      15,    0,  154,    2, 0x06 /* Public */,
      16,    0,  155,    2, 0x06 /* Public */,
      17,    0,  156,    2, 0x06 /* Public */,
      18,    0,  157,    2, 0x06 /* Public */,
      19,    0,  158,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    2,  159,    2, 0x08 /* Private */,
      24,    1,  164,    2, 0x08 /* Private */,
      25,    2,  167,    2, 0x08 /* Private */,
      26,    0,  172,    2, 0x08 /* Private */,
      27,    0,  173,    2, 0x08 /* Private */,
      28,    0,  174,    2, 0x08 /* Private */,
      29,    0,  175,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 21, 0x80000000 | 21,   22,   23,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 21, 0x80000000 | 21,   22,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      30, 0x80000000 | 31, 0x00495809,
      32, 0x80000000 | 33, 0x00495809,
      34, 0x80000000 | 35, 0x00495809,
      36, QMetaType::QString, 0x00495801,
      37, 0x80000000 | 38, 0x0049510b,
      39, QMetaType::Bool, 0x00495803,
      40, 0x80000000 | 41, 0x00495809,
      42, 0x80000000 | 41, 0x0049580b,
      43, 0x80000000 | 41, 0x0049580b,
      44, 0x80000000 | 41, 0x0049580b,
      45, 0x80000000 | 46, 0x0049580b,
      47, 0x80000000 | 41, 0x0049580b,
      48, 0x80000000 | 49, 0x0049580b,
      50, QMetaType::Bool, 0x00495803,

 // properties: notify_signal_id
       4,
       5,
       6,
       3,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      15,
      14,
      16,

 // enums: name, alias, flags, count, data
      38,   38, 0x0,    5,  237,

 // enum data: key, value
      51, uint(Config::NoChoice),
      52, uint(Config::Alongside),
      53, uint(Config::Erase),
      54, uint(Config::Replace),
      55, uint(Config::Manual),

       0        // eod
};

void Config::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Config *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nextStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->actionChosen(); break;
        case 2: _t->deviceChosen(); break;
        case 3: _t->prettyStatusChanged(); break;
        case 4: _t->devicesModelChanged(); break;
        case 5: _t->bootloaderModelChanged(); break;
        case 6: _t->availableSwapChoicesChanged(); break;
        case 7: _t->installChoiceChanged(); break;
        case 8: _t->deviceEditableChanged(); break;
        case 9: _t->eraseOptionChanged(); break;
        case 10: _t->alongsideOptionChanged(); break;
        case 11: _t->replaceOptionChanged(); break;
        case 12: _t->somethingElseOptionChanged(); break;
        case 13: _t->encryptOptionChanged(); break;
        case 14: _t->efiOptionChanged(); break;
        case 15: _t->reuseHomeOptionChanged(); break;
        case 16: _t->efiAvailableChanged(); break;
        case 17: _t->isEfiChanged(); break;
        case 18: _t->onPartitionToReplaceSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 19: _t->doReplaceSelectedPartition((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 20: _t->doAlongsideSetupSplitter((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 21: _t->onEncryptWidgetStateChanged(); break;
        case 22: _t->onHomeCheckBoxStateChanged(); break;
        case 23: _t->onActionChanged(); break;
        case 24: _t->onEraseSwapChoiceChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Config::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::nextStatusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::actionChosen)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::deviceChosen)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::prettyStatusChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::devicesModelChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::bootloaderModelChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::availableSwapChoicesChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::installChoiceChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::deviceEditableChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::eraseOptionChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::alongsideOptionChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::replaceOptionChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::somethingElseOptionChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::encryptOptionChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::efiOptionChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::reuseHomeOptionChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::efiAvailableChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::isEfiChanged)) {
                *result = 17;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BootLoaderModel* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeviceModel* >(); break;
        case 12:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EfiOpt* >(); break;
        case 10:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EncryptOpt* >(); break;
        case 11:
        case 9:
        case 8:
        case 7:
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Opt* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Config *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< DeviceModel**>(_v) = _t->devicesModel(); break;
        case 1: *reinterpret_cast< BootLoaderModel**>(_v) = _t->bootloaderModel(); break;
        case 2: *reinterpret_cast< SwapChoiceSet*>(_v) = _t->availableSwapChoices(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->prettyStatus(); break;
        case 4: *reinterpret_cast< InstallChoice*>(_v) = _t->installChoice(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->m_deviceEditable; break;
        case 6: *reinterpret_cast< Opt**>(_v) = _t->eraseOption(); break;
        case 7: *reinterpret_cast< Opt**>(_v) = _t->m_alongsideOption; break;
        case 8: *reinterpret_cast< Opt**>(_v) = _t->m_replaceOption; break;
        case 9: *reinterpret_cast< Opt**>(_v) = _t->m_somethingElseOption; break;
        case 10: *reinterpret_cast< EncryptOpt**>(_v) = _t->m_encryptOption; break;
        case 11: *reinterpret_cast< Opt**>(_v) = _t->m_reuseHomeOption; break;
        case 12: *reinterpret_cast< EfiOpt**>(_v) = _t->m_efiOption; break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->m_efiAvailable; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Config *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setInstallChoice(*reinterpret_cast< InstallChoice*>(_v)); break;
        case 5:
            if (_t->m_deviceEditable != *reinterpret_cast< bool*>(_v)) {
                _t->m_deviceEditable = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->deviceEditableChanged();
            }
            break;
        case 7:
            if (_t->m_alongsideOption != *reinterpret_cast< Opt**>(_v)) {
                _t->m_alongsideOption = *reinterpret_cast< Opt**>(_v);
                Q_EMIT _t->alongsideOptionChanged();
            }
            break;
        case 8:
            if (_t->m_replaceOption != *reinterpret_cast< Opt**>(_v)) {
                _t->m_replaceOption = *reinterpret_cast< Opt**>(_v);
                Q_EMIT _t->replaceOptionChanged();
            }
            break;
        case 9:
            if (_t->m_somethingElseOption != *reinterpret_cast< Opt**>(_v)) {
                _t->m_somethingElseOption = *reinterpret_cast< Opt**>(_v);
                Q_EMIT _t->somethingElseOptionChanged();
            }
            break;
        case 10:
            if (_t->m_encryptOption != *reinterpret_cast< EncryptOpt**>(_v)) {
                _t->m_encryptOption = *reinterpret_cast< EncryptOpt**>(_v);
                Q_EMIT _t->encryptOptionChanged();
            }
            break;
        case 11:
            if (_t->m_reuseHomeOption != *reinterpret_cast< Opt**>(_v)) {
                _t->m_reuseHomeOption = *reinterpret_cast< Opt**>(_v);
                Q_EMIT _t->reuseHomeOptionChanged();
            }
            break;
        case 12:
            if (_t->m_efiOption != *reinterpret_cast< EfiOpt**>(_v)) {
                _t->m_efiOption = *reinterpret_cast< EfiOpt**>(_v);
                Q_EMIT _t->efiOptionChanged();
            }
            break;
        case 13:
            if (_t->m_efiAvailable != *reinterpret_cast< bool*>(_v)) {
                _t->m_efiAvailable = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->efiAvailableChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Config::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Config.data,
    qt_meta_data_Config,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Config::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Config::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Config.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Config::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 25;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Config::nextStatusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Config::actionChosen()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Config::deviceChosen()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Config::prettyStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Config::devicesModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Config::bootloaderModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Config::availableSwapChoicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Config::installChoiceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Config::deviceEditableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Config::eraseOptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Config::alongsideOptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Config::replaceOptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Config::somethingElseOptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Config::encryptOptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void Config::efiOptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void Config::reuseHomeOptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Config::efiAvailableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void Config::isEfiChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
