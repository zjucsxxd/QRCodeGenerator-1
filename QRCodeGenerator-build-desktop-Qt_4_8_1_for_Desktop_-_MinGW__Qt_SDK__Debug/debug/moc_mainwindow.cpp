/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Fri 1. Feb 08:49:38 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      41,   35,   11,   11, 0x08,
      82,   11,   11,   11, 0x08,
     109,   11,  101,   11, 0x08,
     135,   11,   11,   11, 0x08,
     159,   11,   11,   11, 0x08,
     184,   11,   11,   11, 0x08,
     210,   11,   11,   11, 0x08,
     237,   11,   11,   11, 0x08,
     270,  263,   11,   11, 0x08,
     311,   11,   11,   11, 0x08,
     340,  335,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_getQRCode_clicked()\0"
    "reply\0slot_netwManagerFinished(QNetworkReply*)\0"
    "loadImageToLabel()\0QPixmap\0"
    "resizeImageToWindowSize()\0"
    "on_saveQRCode_clicked()\0"
    "on_printQRCode_clicked()\0"
    "on_actionSave_triggered()\0"
    "on_actionPrint_triggered()\0"
    "on_actionExit_triggered()\0button\0"
    "on_buttonBox_2_clicked(QAbstractButton*)\0"
    "applyAdvancedSettings()\0arg1\0"
    "on_tabWidget_selected(QString)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_getQRCode_clicked(); break;
        case 1: _t->slot_netwManagerFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->loadImageToLabel(); break;
        case 3: { QPixmap _r = _t->resizeImageToWindowSize();
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 4: _t->on_saveQRCode_clicked(); break;
        case 5: _t->on_printQRCode_clicked(); break;
        case 6: _t->on_actionSave_triggered(); break;
        case 7: _t->on_actionPrint_triggered(); break;
        case 8: _t->on_actionExit_triggered(); break;
        case 9: _t->on_buttonBox_2_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 10: _t->applyAdvancedSettings(); break;
        case 11: _t->on_tabWidget_selected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
