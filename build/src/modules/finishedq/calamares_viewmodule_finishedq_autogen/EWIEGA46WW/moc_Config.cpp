/****************************************************************************
** Meta object code from reading C++ file 'Config.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "Config.h"
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
struct qt_meta_stringdata_Config_t {
    QByteArrayData data[9];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Config_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Config_t qt_meta_stringdata_Config = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Config"
QT_MOC_LITERAL(1, 7, 14), // "messageChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 20), // "restartOptionChanged"
QT_MOC_LITERAL(4, 44, 20), // "onInstallationFailed"
QT_MOC_LITERAL(5, 65, 7), // "message"
QT_MOC_LITERAL(6, 73, 7), // "details"
QT_MOC_LITERAL(7, 81, 13), // "restartOption"
QT_MOC_LITERAL(8, 95, 4) // "Opt*"

    },
    "Config\0messageChanged\0\0restartOptionChanged\0"
    "onInstallationFailed\0message\0details\0"
    "restartOption\0Opt*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Config[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x00495009,
       5, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       1,
       0,

       0        // eod
};

void Config::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Config *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageChanged(); break;
        case 1: _t->restartOptionChanged(); break;
        case 2: _t->onInstallationFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::messageChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::restartOptionChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Opt* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Config *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Opt**>(_v) = _t->restartOption(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->message(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
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
void Config::messageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Config::restartOptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
