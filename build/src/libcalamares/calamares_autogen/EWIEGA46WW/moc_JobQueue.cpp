/****************************************************************************
** Meta object code from reading C++ file 'JobQueue.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "JobQueue.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JobQueue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Calamares__JobQueue_t {
    QByteArrayData data[13];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calamares__JobQueue_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calamares__JobQueue_t qt_meta_stringdata_Calamares__JobQueue = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Calamares::JobQueue"
QT_MOC_LITERAL(1, 20, 12), // "queueChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "JobList"
QT_MOC_LITERAL(4, 42, 4), // "jobs"
QT_MOC_LITERAL(5, 47, 8), // "progress"
QT_MOC_LITERAL(6, 56, 7), // "percent"
QT_MOC_LITERAL(7, 64, 10), // "prettyName"
QT_MOC_LITERAL(8, 75, 8), // "finished"
QT_MOC_LITERAL(9, 84, 6), // "failed"
QT_MOC_LITERAL(10, 91, 7), // "message"
QT_MOC_LITERAL(11, 99, 7), // "details"
QT_MOC_LITERAL(12, 107, 6) // "finish"

    },
    "Calamares::JobQueue\0queueChanged\0\0"
    "JobList\0jobs\0progress\0percent\0prettyName\0"
    "finished\0failed\0message\0details\0finish"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calamares__JobQueue[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    2,   42,    2, 0x06 /* Public */,
       8,    0,   47,    2, 0x06 /* Public */,
       9,    2,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QReal, QMetaType::QString,    6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Calamares::JobQueue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JobQueue *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->queueChanged((*reinterpret_cast< const JobList(*)>(_a[1]))); break;
        case 1: _t->progress((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->finished(); break;
        case 3: _t->failed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->finish(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JobQueue::*)(const JobList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobQueue::queueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JobQueue::*)(qreal , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobQueue::progress)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (JobQueue::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobQueue::finished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (JobQueue::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobQueue::failed)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Calamares::JobQueue::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Calamares__JobQueue.data,
    qt_meta_data_Calamares__JobQueue,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Calamares::JobQueue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calamares::JobQueue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Calamares__JobQueue.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Calamares::JobQueue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Calamares::JobQueue::queueChanged(const JobList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Calamares::JobQueue::progress(qreal _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Calamares::JobQueue::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Calamares::JobQueue::failed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
