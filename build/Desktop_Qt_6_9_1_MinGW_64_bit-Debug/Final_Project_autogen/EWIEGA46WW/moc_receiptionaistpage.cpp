/****************************************************************************
** Meta object code from reading C++ file 'receiptionaistpage.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../receiptionaistpage.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'receiptionaistpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN18ReceiptionaistPageE_t {};
} // unnamed namespace

template <> constexpr inline auto ReceiptionaistPage::qt_create_metaobjectdata<qt_meta_tag_ZN18ReceiptionaistPageE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ReceiptionaistPage",
        "enterinfo",
        "",
        "id",
        "nm",
        "ag",
        "gender",
        "bloodgroup",
        "date",
        "time",
        "di",
        "bed",
        "rn",
        "requestLogout",
        "submitfun",
        "on_regBtn_clicked",
        "on_back1_clicked",
        "on_searchBtn_clicked",
        "searchfun",
        "on_back3_2_clicked",
        "logoutfun",
        "on_back2_clicked",
        "on_delete_2_clicked",
        "deletefun",
        "on_upBtn_clicked",
        "updatefun",
        "on_back3_clicked",
        "showPatientIDs",
        "on_bookBtn_clicked",
        "confirmfun",
        "on_back4_clicked",
        "on_doctroadv_clicked",
        "loadfun",
        "on_back4_2_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'enterinfo'
        QtMocHelpers::SignalData<void(const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { QMetaType::QString, 4 }, { QMetaType::QString, 5 }, { QMetaType::QString, 6 },
            { QMetaType::QString, 7 }, { QMetaType::QString, 8 }, { QMetaType::QString, 9 }, { QMetaType::QString, 10 },
            { QMetaType::QString, 11 }, { QMetaType::QString, 12 },
        }}),
        // Signal 'requestLogout'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'submitfun'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_regBtn_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_back1_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_searchBtn_clicked'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'searchfun'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_back3_2_clicked'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'logoutfun'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_back2_clicked'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_delete_2_clicked'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'deletefun'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_upBtn_clicked'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updatefun'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_back3_clicked'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showPatientIDs'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_bookBtn_clicked'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'confirmfun'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_back4_clicked'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_doctroadv_clicked'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'loadfun'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_back4_2_clicked'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ReceiptionaistPage, qt_meta_tag_ZN18ReceiptionaistPageE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ReceiptionaistPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18ReceiptionaistPageE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18ReceiptionaistPageE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18ReceiptionaistPageE_t>.metaTypes,
    nullptr
} };

void ReceiptionaistPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ReceiptionaistPage *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->enterinfo((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[9])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[10]))); break;
        case 1: _t->requestLogout(); break;
        case 2: _t->submitfun(); break;
        case 3: _t->on_regBtn_clicked(); break;
        case 4: _t->on_back1_clicked(); break;
        case 5: _t->on_searchBtn_clicked(); break;
        case 6: _t->searchfun(); break;
        case 7: _t->on_back3_2_clicked(); break;
        case 8: _t->logoutfun(); break;
        case 9: _t->on_back2_clicked(); break;
        case 10: _t->on_delete_2_clicked(); break;
        case 11: _t->deletefun(); break;
        case 12: _t->on_upBtn_clicked(); break;
        case 13: _t->updatefun(); break;
        case 14: _t->on_back3_clicked(); break;
        case 15: _t->showPatientIDs(); break;
        case 16: _t->on_bookBtn_clicked(); break;
        case 17: _t->confirmfun(); break;
        case 18: _t->on_back4_clicked(); break;
        case 19: _t->on_doctroadv_clicked(); break;
        case 20: _t->loadfun(); break;
        case 21: _t->on_back4_2_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ReceiptionaistPage::*)(const QString & , const QString & , const QString & , const QString & , const QString & , const QString & , const QString & , const QString & , const QString & , const QString & )>(_a, &ReceiptionaistPage::enterinfo, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ReceiptionaistPage::*)()>(_a, &ReceiptionaistPage::requestLogout, 1))
            return;
    }
}

const QMetaObject *ReceiptionaistPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReceiptionaistPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18ReceiptionaistPageE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ReceiptionaistPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void ReceiptionaistPage::enterinfo(const QString & _t1, const QString & _t2, const QString & _t3, const QString & _t4, const QString & _t5, const QString & _t6, const QString & _t7, const QString & _t8, const QString & _t9, const QString & _t10)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3, _t4, _t5, _t6, _t7, _t8, _t9, _t10);
}

// SIGNAL 1
void ReceiptionaistPage::requestLogout()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
