/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Fri Sep 18 21:54:45 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      37,   11,   11,   11, 0x08,
      64,   11,   11,   11, 0x08,
      92,   11,   11,   11, 0x08,
     114,   11,   11,   11, 0x08,
     138,   11,   11,   11, 0x08,
     162,   11,   11,   11, 0x08,
     186,   11,   11,   11, 0x08,
     210,   11,   11,   11, 0x08,
     236,   11,   11,   11, 0x08,
     264,   11,   11,   11, 0x08,
     290,   11,   11,   11, 0x08,
     317,   11,   11,   11, 0x08,
     342,   11,   11,   11, 0x08,
     366,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_loginButton_clicked()\0"
    "on_inquireButton_clicked()\0"
    "on_purchaseButton_clicked()\0"
    "on_action_triggered()\0on_action_4_triggered()\0"
    "on_action_2_triggered()\0on_action_5_triggered()\0"
    "on_pushButton_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_goodsMngButton_clicked()\0"
    "on_ordersButton_clicked()\0"
    "on_corpMngButton_clicked()\0"
    "on_StateButton_clicked()\0"
    "on_action_3_triggered()\0"
    "on_commandLinkButton_clicked()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_loginButton_clicked(); break;
        case 1: _t->on_inquireButton_clicked(); break;
        case 2: _t->on_purchaseButton_clicked(); break;
        case 3: _t->on_action_triggered(); break;
        case 4: _t->on_action_4_triggered(); break;
        case 5: _t->on_action_2_triggered(); break;
        case 6: _t->on_action_5_triggered(); break;
        case 7: _t->on_pushButton_clicked(); break;
        case 8: _t->on_pushButton_2_clicked(); break;
        case 9: _t->on_goodsMngButton_clicked(); break;
        case 10: _t->on_ordersButton_clicked(); break;
        case 11: _t->on_corpMngButton_clicked(); break;
        case 12: _t->on_StateButton_clicked(); break;
        case 13: _t->on_action_3_triggered(); break;
        case 14: _t->on_commandLinkButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
