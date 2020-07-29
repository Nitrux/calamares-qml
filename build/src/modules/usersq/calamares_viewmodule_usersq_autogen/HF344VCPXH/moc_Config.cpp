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
struct qt_meta_stringdata_Status_t {
    QByteArrayData data[7];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Status_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Status_t qt_meta_stringdata_Status = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Status"
QT_MOC_LITERAL(1, 7, 7), // "message"
QT_MOC_LITERAL(2, 15, 4), // "icon"
QT_MOC_LITERAL(3, 20, 10), // "StatusCode"
QT_MOC_LITERAL(4, 31, 2), // "Ok"
QT_MOC_LITERAL(5, 34, 5), // "Fatal"
QT_MOC_LITERAL(6, 40, 7) // "Warning"

    },
    "Status\0message\0icon\0StatusCode\0Ok\0"
    "Fatal\0Warning"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Status[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       1,   20, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095c01,
       2, QMetaType::QString, 0x00095c01,

 // enums: name, alias, flags, count, data
       3,    3, 0x0,    3,   25,

 // enum data: key, value
       4, uint(Status::Ok),
       5, uint(Status::Fatal),
       6, uint(Status::Warning),

       0        // eod
};

void Status::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<Status *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->message; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->icon; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Status::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_Status.data,
    qt_meta_data_Status,
    qt_static_metacall,
    nullptr,
    nullptr
} };

struct qt_meta_stringdata_Config_t {
    QByteArrayData data[43];
    char stringdata0[752];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Config_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Config_t qt_meta_stringdata_Config = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Config"
QT_MOC_LITERAL(1, 7, 19), // "prettyStatusChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "checkReady"
QT_MOC_LITERAL(4, 39, 22), // "passwordVisibleChanged"
QT_MOC_LITERAL(5, 62, 13), // "statusChanged"
QT_MOC_LITERAL(6, 76, 21), // "warningMessageChanged"
QT_MOC_LITERAL(7, 98, 15), // "fullNameChanged"
QT_MOC_LITERAL(8, 114, 15), // "userNameChanged"
QT_MOC_LITERAL(9, 130, 15), // "hostNameChanged"
QT_MOC_LITERAL(10, 146, 20), // "fullNameReadyChanged"
QT_MOC_LITERAL(11, 167, 20), // "userNameReadyChanged"
QT_MOC_LITERAL(12, 188, 20), // "hostNameReadyChanged"
QT_MOC_LITERAL(13, 209, 20), // "passwordReadyChanged"
QT_MOC_LITERAL(14, 230, 24), // "rootPasswordReadyChanged"
QT_MOC_LITERAL(15, 255, 16), // "autologinChanged"
QT_MOC_LITERAL(16, 272, 20), // "reusePasswordChanged"
QT_MOC_LITERAL(17, 293, 27), // "reusePasswordVisibleChanged"
QT_MOC_LITERAL(18, 321, 24), // "validatePasswordsChanged"
QT_MOC_LITERAL(19, 346, 31), // "validatePasswordsVisibleChanged"
QT_MOC_LITERAL(20, 378, 20), // "onFullNameTextEdited"
QT_MOC_LITERAL(21, 399, 15), // "fillSuggestions"
QT_MOC_LITERAL(22, 415, 20), // "onUsernameTextEdited"
QT_MOC_LITERAL(23, 436, 20), // "validateUsernameText"
QT_MOC_LITERAL(24, 457, 20), // "onHostnameTextEdited"
QT_MOC_LITERAL(25, 478, 20), // "validateHostnameText"
QT_MOC_LITERAL(26, 499, 21), // "onPasswordTextChanged"
QT_MOC_LITERAL(27, 521, 25), // "onRootPasswordTextChanged"
QT_MOC_LITERAL(28, 547, 6), // "status"
QT_MOC_LITERAL(29, 554, 6), // "Status"
QT_MOC_LITERAL(30, 561, 8), // "userName"
QT_MOC_LITERAL(31, 570, 13), // "userNameReady"
QT_MOC_LITERAL(32, 584, 8), // "hostName"
QT_MOC_LITERAL(33, 593, 13), // "hostNameReady"
QT_MOC_LITERAL(34, 607, 8), // "fullName"
QT_MOC_LITERAL(35, 616, 13), // "fullNameReady"
QT_MOC_LITERAL(36, 630, 13), // "passwordReady"
QT_MOC_LITERAL(37, 644, 17), // "rootPasswordReady"
QT_MOC_LITERAL(38, 662, 9), // "autologin"
QT_MOC_LITERAL(39, 672, 17), // "validatePasswords"
QT_MOC_LITERAL(40, 690, 24), // "validatePasswordsVisible"
QT_MOC_LITERAL(41, 715, 14), // "resusePassword"
QT_MOC_LITERAL(42, 730, 21) // "resusePasswordVisible"

    },
    "Config\0prettyStatusChanged\0\0checkReady\0"
    "passwordVisibleChanged\0statusChanged\0"
    "warningMessageChanged\0fullNameChanged\0"
    "userNameChanged\0hostNameChanged\0"
    "fullNameReadyChanged\0userNameReadyChanged\0"
    "hostNameReadyChanged\0passwordReadyChanged\0"
    "rootPasswordReadyChanged\0autologinChanged\0"
    "reusePasswordChanged\0reusePasswordVisibleChanged\0"
    "validatePasswordsChanged\0"
    "validatePasswordsVisibleChanged\0"
    "onFullNameTextEdited\0fillSuggestions\0"
    "onUsernameTextEdited\0validateUsernameText\0"
    "onHostnameTextEdited\0validateHostnameText\0"
    "onPasswordTextChanged\0onRootPasswordTextChanged\0"
    "status\0Status\0userName\0userNameReady\0"
    "hostName\0hostNameReady\0fullName\0"
    "fullNameReady\0passwordReady\0"
    "rootPasswordReady\0autologin\0"
    "validatePasswords\0validatePasswordsVisible\0"
    "resusePassword\0resusePasswordVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Config[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
      14,  190, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  144,    2, 0x06 /* Public */,
       3,    1,  145,    2, 0x06 /* Public */,
       4,    0,  148,    2, 0x06 /* Public */,
       5,    0,  149,    2, 0x06 /* Public */,
       6,    0,  150,    2, 0x06 /* Public */,
       7,    0,  151,    2, 0x06 /* Public */,
       8,    0,  152,    2, 0x06 /* Public */,
       9,    0,  153,    2, 0x06 /* Public */,
      10,    0,  154,    2, 0x06 /* Public */,
      11,    0,  155,    2, 0x06 /* Public */,
      12,    0,  156,    2, 0x06 /* Public */,
      13,    0,  157,    2, 0x06 /* Public */,
      14,    0,  158,    2, 0x06 /* Public */,
      15,    0,  159,    2, 0x06 /* Public */,
      16,    0,  160,    2, 0x06 /* Public */,
      17,    0,  161,    2, 0x06 /* Public */,
      18,    0,  162,    2, 0x06 /* Public */,
      19,    0,  163,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    1,  164,    2, 0x0a /* Public */,
      21,    0,  167,    2, 0x0a /* Public */,
      22,    1,  168,    2, 0x0a /* Public */,
      23,    1,  171,    2, 0x0a /* Public */,
      24,    1,  174,    2, 0x0a /* Public */,
      25,    1,  177,    2, 0x0a /* Public */,
      26,    2,  180,    2, 0x0a /* Public */,
      27,    2,  185,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
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

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

 // properties: name, type, flags
      28, 0x80000000 | 29, 0x00495809,
      30, QMetaType::QString, 0x00495803,
      31, QMetaType::Bool, 0x00495803,
      32, QMetaType::QString, 0x00495803,
      33, QMetaType::Bool, 0x00495803,
      34, QMetaType::QString, 0x00495803,
      35, QMetaType::Bool, 0x00495803,
      36, QMetaType::Bool, 0x00495803,
      37, QMetaType::Bool, 0x00495803,
      38, QMetaType::Bool, 0x00495003,
      39, QMetaType::Bool, 0x00495003,
      40, QMetaType::Bool, 0x00495803,
      41, QMetaType::Bool, 0x00495003,
      42, QMetaType::Bool, 0x00495803,

 // properties: notify_signal_id
       3,
       6,
       9,
       7,
      10,
       5,
       8,
      11,
      12,
      13,
      16,
      17,
      14,
      15,

       0        // eod
};

void Config::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Config *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->prettyStatusChanged(); break;
        case 1: _t->checkReady((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->passwordVisibleChanged(); break;
        case 3: _t->statusChanged(); break;
        case 4: _t->warningMessageChanged(); break;
        case 5: _t->fullNameChanged(); break;
        case 6: _t->userNameChanged(); break;
        case 7: _t->hostNameChanged(); break;
        case 8: _t->fullNameReadyChanged(); break;
        case 9: _t->userNameReadyChanged(); break;
        case 10: _t->hostNameReadyChanged(); break;
        case 11: _t->passwordReadyChanged(); break;
        case 12: _t->rootPasswordReadyChanged(); break;
        case 13: _t->autologinChanged(); break;
        case 14: _t->reusePasswordChanged(); break;
        case 15: _t->reusePasswordVisibleChanged(); break;
        case 16: _t->validatePasswordsChanged(); break;
        case 17: _t->validatePasswordsVisibleChanged(); break;
        case 18: _t->onFullNameTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->fillSuggestions(); break;
        case 20: _t->onUsernameTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->validateUsernameText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->onHostnameTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->validateHostnameText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->onPasswordTextChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 25: _t->onRootPasswordTextChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::prettyStatusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Config::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::checkReady)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::passwordVisibleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::statusChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::warningMessageChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::fullNameChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::userNameChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::hostNameChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::fullNameReadyChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::userNameReadyChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::hostNameReadyChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::passwordReadyChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::rootPasswordReadyChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::autologinChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::reusePasswordChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::reusePasswordVisibleChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::validatePasswordsChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::validatePasswordsVisibleChanged)) {
                *result = 17;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Status >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Config *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Status*>(_v) = _t->getStatus(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->m_userName; break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->m_readyUsername; break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->m_hostName; break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->m_readyHostname; break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->m_fullName; break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->m_readyFullName; break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->m_readyPassword; break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->m_readyRootPassword; break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->autologinDefault(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->validatePasswords(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->m_validatePasswordsVisible; break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->reusePassword(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->m_reusePasswordVisible; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Config *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1:
            if (_t->m_userName != *reinterpret_cast< QString*>(_v)) {
                _t->m_userName = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->userNameChanged();
            }
            break;
        case 2:
            if (_t->m_readyUsername != *reinterpret_cast< bool*>(_v)) {
                _t->m_readyUsername = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->userNameReadyChanged();
            }
            break;
        case 3:
            if (_t->m_hostName != *reinterpret_cast< QString*>(_v)) {
                _t->m_hostName = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->hostNameChanged();
            }
            break;
        case 4:
            if (_t->m_readyHostname != *reinterpret_cast< bool*>(_v)) {
                _t->m_readyHostname = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->hostNameReadyChanged();
            }
            break;
        case 5:
            if (_t->m_fullName != *reinterpret_cast< QString*>(_v)) {
                _t->m_fullName = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->fullNameChanged();
            }
            break;
        case 6:
            if (_t->m_readyFullName != *reinterpret_cast< bool*>(_v)) {
                _t->m_readyFullName = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->fullNameReadyChanged();
            }
            break;
        case 7:
            if (_t->m_readyPassword != *reinterpret_cast< bool*>(_v)) {
                _t->m_readyPassword = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->passwordReadyChanged();
            }
            break;
        case 8:
            if (_t->m_readyRootPassword != *reinterpret_cast< bool*>(_v)) {
                _t->m_readyRootPassword = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->rootPasswordReadyChanged();
            }
            break;
        case 9: _t->setAutologinDefault(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setValidatePasswordDefault(*reinterpret_cast< bool*>(_v)); break;
        case 11:
            if (_t->m_validatePasswordsVisible != *reinterpret_cast< bool*>(_v)) {
                _t->m_validatePasswordsVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->validatePasswordsVisibleChanged();
            }
            break;
        case 12: _t->setReusePasswordDefault(*reinterpret_cast< bool*>(_v)); break;
        case 13:
            if (_t->m_reusePasswordVisible != *reinterpret_cast< bool*>(_v)) {
                _t->m_reusePasswordVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->reusePasswordVisibleChanged();
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
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
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
void Config::prettyStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Config::checkReady(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Config::passwordVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Config::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Config::warningMessageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Config::fullNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Config::userNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Config::hostNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Config::fullNameReadyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Config::userNameReadyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Config::hostNameReadyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Config::passwordReadyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Config::rootPasswordReadyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Config::autologinChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void Config::reusePasswordChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void Config::reusePasswordVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Config::validatePasswordsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void Config::validatePasswordsVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
