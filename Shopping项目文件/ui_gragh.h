/********************************************************************************
** Form generated from reading UI file 'gragh.ui'
**
** Created: Thu Sep 17 23:34:58 2015
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAGH_H
#define UI_GRAGH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Gragh
{
public:
    QLabel *label;

    void setupUi(QDialog *Gragh)
    {
        if (Gragh->objectName().isEmpty())
            Gragh->setObjectName(QString::fromUtf8("Gragh"));
        Gragh->resize(400, 300);
        QPalette palette;
        QBrush brush(QColor(150, 225, 225, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(0, 0, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush3(QColor(170, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        QBrush brush4(QColor(0, 0, 190, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush5(QColor(120, 120, 120, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush4);
        Gragh->setPalette(palette);
        label = new QLabel(Gragh);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 20, 71, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223-\346\226\271\346\255\243\350\266\205\345\244\247\345\255\227\347\254\246\351\233\206"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        retranslateUi(Gragh);

        QMetaObject::connectSlotsByName(Gragh);
    } // setupUi

    void retranslateUi(QDialog *Gragh)
    {
        Gragh->setWindowTitle(QApplication::translate("Gragh", "\351\224\200\345\224\256\347\273\237\350\256\241", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Gragh", "\344\270\232\347\273\251\350\241\250", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Gragh: public Ui_Gragh {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAGH_H
