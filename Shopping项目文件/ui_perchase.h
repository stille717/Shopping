/********************************************************************************
** Form generated from reading UI file 'perchase.ui'
**
** Created: Thu Sep 17 23:48:10 2015
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERCHASE_H
#define UI_PERCHASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Perchase
{
public:
    QLabel *label;
    QComboBox *scomboBox;
    QComboBox *kdcomboBox;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QWidget *widget;
    QLabel *label_4;
    QComboBox *ucomboBox;

    void setupUi(QWidget *Perchase)
    {
        if (Perchase->objectName().isEmpty())
            Perchase->setObjectName(QString::fromUtf8("Perchase"));
        Perchase->resize(328, 178);
        Perchase->setMinimumSize(QSize(328, 178));
        Perchase->setMaximumSize(QSize(328, 178));
        QPalette palette;
        QBrush brush(QColor(157, 235, 235, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(0, 0, 207, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush3(QColor(170, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush4(QColor(120, 120, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        Perchase->setPalette(palette);
        label = new QLabel(Perchase);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 54, 12));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        scomboBox = new QComboBox(Perchase);
        scomboBox->setObjectName(QString::fromUtf8("scomboBox"));
        scomboBox->setGeometry(QRect(110, 60, 201, 22));
        scomboBox->setEditable(true);
        kdcomboBox = new QComboBox(Perchase);
        kdcomboBox->setObjectName(QString::fromUtf8("kdcomboBox"));
        kdcomboBox->setGeometry(QRect(110, 90, 201, 22));
        kdcomboBox->setEditable(true);
        label_2 = new QLabel(Perchase);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 61, 16));
        label_2->setFont(font);
        label_3 = new QLabel(Perchase);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 90, 81, 16));
        label_3->setFont(font);
        pushButton = new QPushButton(Perchase);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 130, 75, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        widget = new QWidget(Perchase);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 130, 31, 31));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 31, 31));
        ucomboBox = new QComboBox(Perchase);
        ucomboBox->setObjectName(QString::fromUtf8("ucomboBox"));
        ucomboBox->setGeometry(QRect(110, 20, 201, 22));
        ucomboBox->setEditable(true);

        retranslateUi(Perchase);

        scomboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Perchase);
    } // setupUi

    void retranslateUi(QWidget *Perchase)
    {
        Perchase->setWindowTitle(QApplication::translate("Perchase", "\350\264\255\344\271\260\345\225\206\345\223\201", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Perchase", "\347\224\250\346\210\267\345\220\215", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Perchase", "\351\200\211\346\213\251\345\225\206\345\223\201", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Perchase", "\351\200\211\346\213\251\345\277\253\351\200\222\345\205\254\345\217\270", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Perchase", "\350\264\255\344\271\260", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Perchase: public Ui_Perchase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERCHASE_H
