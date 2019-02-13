/****************************************************************************
** Meta object code from reading C++ file 'board.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../board.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'board.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Board_t {
    QByteArrayData data[12];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Board_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Board_t qt_meta_stringdata_Board = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Board"
QT_MOC_LITERAL(1, 6, 29), // "on_pushButton_3_black_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 27), // "on_pushButton_3_red_clicked"
QT_MOC_LITERAL(4, 65, 27), // "on_pushButton_start_clicked"
QT_MOC_LITERAL(5, 93, 25), // "on_pushButton_c1_released"
QT_MOC_LITERAL(6, 119, 25), // "on_pushButton_c2_released"
QT_MOC_LITERAL(7, 145, 25), // "on_pushButton_c3_released"
QT_MOC_LITERAL(8, 171, 25), // "on_pushButton_c4_released"
QT_MOC_LITERAL(9, 197, 25), // "on_pushButton_c5_released"
QT_MOC_LITERAL(10, 223, 25), // "on_pushButton_c6_released"
QT_MOC_LITERAL(11, 249, 25) // "on_pushButton_c7_released"

    },
    "Board\0on_pushButton_3_black_clicked\0"
    "\0on_pushButton_3_red_clicked\0"
    "on_pushButton_start_clicked\0"
    "on_pushButton_c1_released\0"
    "on_pushButton_c2_released\0"
    "on_pushButton_c3_released\0"
    "on_pushButton_c4_released\0"
    "on_pushButton_c5_released\0"
    "on_pushButton_c6_released\0"
    "on_pushButton_c7_released"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Board[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
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

       0        // eod
};

void Board::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Board *_t = static_cast<Board *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_3_black_clicked(); break;
        case 1: _t->on_pushButton_3_red_clicked(); break;
        case 2: _t->on_pushButton_start_clicked(); break;
        case 3: _t->on_pushButton_c1_released(); break;
        case 4: _t->on_pushButton_c2_released(); break;
        case 5: _t->on_pushButton_c3_released(); break;
        case 6: _t->on_pushButton_c4_released(); break;
        case 7: _t->on_pushButton_c5_released(); break;
        case 8: _t->on_pushButton_c6_released(); break;
        case 9: _t->on_pushButton_c7_released(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Board::staticMetaObject = {
    { &MainWindow::staticMetaObject, qt_meta_stringdata_Board.data,
      qt_meta_data_Board,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Board::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Board::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Board.stringdata0))
        return static_cast<void*>(const_cast< Board*>(this));
    return MainWindow::qt_metacast(_clname);
}

int Board::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
