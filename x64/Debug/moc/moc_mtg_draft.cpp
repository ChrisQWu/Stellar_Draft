/****************************************************************************
** Meta object code from reading C++ file 'mtg_draft.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mtg_draft.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtg_draft.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MTG_Draft_t {
    QByteArrayData data[13];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MTG_Draft_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MTG_Draft_t qt_meta_stringdata_MTG_Draft = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MTG_Draft"
QT_MOC_LITERAL(1, 10, 15), // "nextButtonEvent"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 21), // "on_nextButton_clicked"
QT_MOC_LITERAL(4, 49, 18), // "cardButtonClicked1"
QT_MOC_LITERAL(5, 68, 18), // "cardButtonClicked2"
QT_MOC_LITERAL(6, 87, 18), // "cardButtonClicked3"
QT_MOC_LITERAL(7, 106, 18), // "cardButtonClicked4"
QT_MOC_LITERAL(8, 125, 18), // "cardButtonClicked5"
QT_MOC_LITERAL(9, 144, 18), // "cardButtonClicked6"
QT_MOC_LITERAL(10, 163, 18), // "cardButtonClicked7"
QT_MOC_LITERAL(11, 182, 18), // "cardButtonClicked8"
QT_MOC_LITERAL(12, 201, 18) // "cardButtonClicked9"

    },
    "MTG_Draft\0nextButtonEvent\0\0"
    "on_nextButton_clicked\0cardButtonClicked1\0"
    "cardButtonClicked2\0cardButtonClicked3\0"
    "cardButtonClicked4\0cardButtonClicked5\0"
    "cardButtonClicked6\0cardButtonClicked7\0"
    "cardButtonClicked8\0cardButtonClicked9"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MTG_Draft[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    0,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

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

void MTG_Draft::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MTG_Draft *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nextButtonEvent(); break;
        case 1: _t->on_nextButton_clicked(); break;
        case 2: _t->cardButtonClicked1(); break;
        case 3: _t->cardButtonClicked2(); break;
        case 4: _t->cardButtonClicked3(); break;
        case 5: _t->cardButtonClicked4(); break;
        case 6: _t->cardButtonClicked5(); break;
        case 7: _t->cardButtonClicked6(); break;
        case 8: _t->cardButtonClicked7(); break;
        case 9: _t->cardButtonClicked8(); break;
        case 10: _t->cardButtonClicked9(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MTG_Draft::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MTG_Draft::nextButtonEvent)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MTG_Draft::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MTG_Draft.data,
    qt_meta_data_MTG_Draft,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MTG_Draft::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MTG_Draft::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MTG_Draft.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MTG_Draft::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void MTG_Draft::nextButtonEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE