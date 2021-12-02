/****************************************************************************
** Meta object code from reading C++ file 'workerprocess.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../project2/workerprocess.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'workerprocess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WorkerProcess_t {
    QByteArrayData data[8];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WorkerProcess_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WorkerProcess_t qt_meta_stringdata_WorkerProcess = {
    {
QT_MOC_LITERAL(0, 0, 13), // "WorkerProcess"
QT_MOC_LITERAL(1, 14, 8), // "Finished"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "SendThread1"
QT_MOC_LITERAL(4, 36, 11), // "SendThread2"
QT_MOC_LITERAL(5, 48, 11), // "temperature"
QT_MOC_LITERAL(6, 60, 8), // "humidity"
QT_MOC_LITERAL(7, 69, 8) // "MainLoop"

    },
    "WorkerProcess\0Finished\0\0SendThread1\0"
    "SendThread2\0temperature\0humidity\0"
    "MainLoop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WorkerProcess[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    2,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    5,    6,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void WorkerProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WorkerProcess *_t = static_cast<WorkerProcess *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Finished(); break;
        case 1: _t->SendThread1(); break;
        case 2: _t->SendThread2((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 3: _t->MainLoop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WorkerProcess::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WorkerProcess::Finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WorkerProcess::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WorkerProcess::SendThread1)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WorkerProcess::*)(const double & , const double & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WorkerProcess::SendThread2)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WorkerProcess::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WorkerProcess.data,
      qt_meta_data_WorkerProcess,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WorkerProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WorkerProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WorkerProcess.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WorkerProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void WorkerProcess::Finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WorkerProcess::SendThread1()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WorkerProcess::SendThread2(const double & _t1, const double & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
