/****************************************************************************
** Meta object code from reading C++ file 'arenasceneelement.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/hector_nist_arenas_gazebo/hector_nist_arena_designer/src/ui/arenasceneelement.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'arenasceneelement.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ArenaSceneElement[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   19,   18,   18, 0x0a,
      85,   68,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ArenaSceneElement[] = {
    "ArenaSceneElement\0\0element,pos\0"
    "slotPosChanged(ArenaElement*,QPoint)\0"
    "element,rotation\0"
    "slotRotationChanged(ArenaElement*,int)\0"
};

void ArenaSceneElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ArenaSceneElement *_t = static_cast<ArenaSceneElement *>(_o);
        switch (_id) {
        case 0: _t->slotPosChanged((*reinterpret_cast< ArenaElement*(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        case 1: _t->slotRotationChanged((*reinterpret_cast< ArenaElement*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ArenaSceneElement::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ArenaSceneElement::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ArenaSceneElement,
      qt_meta_data_ArenaSceneElement, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ArenaSceneElement::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ArenaSceneElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ArenaSceneElement::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ArenaSceneElement))
        return static_cast<void*>(const_cast< ArenaSceneElement*>(this));
    if (!strcmp(_clname, "QGraphicsPixmapItem"))
        return static_cast< QGraphicsPixmapItem*>(const_cast< ArenaSceneElement*>(this));
    return QObject::qt_metacast(_clname);
}

int ArenaSceneElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
