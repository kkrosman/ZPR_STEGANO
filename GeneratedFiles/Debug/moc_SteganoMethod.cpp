/****************************************************************************
** Meta object code from reading C++ file 'SteganoMethod.h'
**
** Created: Sun 4. Nov 19:47:52 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../Documents/Visual Studio 2010/Projects/ZPR_STEGANO/ZPR_STEGANO/SteganoMethod.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SteganoMethod.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CSteganoMethod[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      40,   15,   15,   15, 0x05,
      58,   15,   15,   15, 0x05,
      76,   15,   15,   15, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_CSteganoMethod[] = {
    "CSteganoMethod\0\0previewFinished(PImage)\0"
    "encryptFinished()\0decryptFinished()\0"
    "progressChanged(int)\0"
};

void CSteganoMethod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CSteganoMethod *_t = static_cast<CSteganoMethod *>(_o);
        switch (_id) {
        case 0: _t->previewFinished((*reinterpret_cast< PImage(*)>(_a[1]))); break;
        case 1: _t->encryptFinished(); break;
        case 2: _t->decryptFinished(); break;
        case 3: _t->progressChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CSteganoMethod::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CSteganoMethod::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CSteganoMethod,
      qt_meta_data_CSteganoMethod, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CSteganoMethod::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CSteganoMethod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CSteganoMethod::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CSteganoMethod))
        return static_cast<void*>(const_cast< CSteganoMethod*>(this));
    return QObject::qt_metacast(_clname);
}

int CSteganoMethod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CSteganoMethod::previewFinished(PImage _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CSteganoMethod::encryptFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void CSteganoMethod::decryptFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void CSteganoMethod::progressChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE