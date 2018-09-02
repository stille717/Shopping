/********************************************************************************
** Form generated from reading UI file 'changestate.ui'
**
** Created: Fri Sep 18 15:24:21 2015
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGESTATE_H
#define UI_CHANGESTATE_H

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

class Ui_changestate
{
public:
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QPushButton *pushButton;

    void setupUi(QWidget *changestate)
    {
        if (changestate->objectName().isEmpty())
            changestate->setObjectName(QString::fromUtf8("changestate"));
        changestate->resize(336, 145);
        changestate->setMinimumSize(QSize(336, 145));
        changestate->setMaximumSize(QSize(336, 145));
        QPalette palette;
        QBrush brush(QColor(141, 212, 212, 255));
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
        QBrush brush4(QColor(0, 0, 191, 255));
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
        changestate->setPalette(palette);
        label = new QLabel(changestate);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 81, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(changestate);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 60, 54, 12));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        comboBox = new QComboBox(changestate);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(130, 20, 171, 22));
        comboBox->setEditable(true);
        comboBox_2 = new QComboBox(changestate);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(130, 50, 171, 22));
        comboBox_2->setEditable(true);
        pushButton = new QPushButton(changestate);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 90, 111, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);

        retranslateUi(changestate);

        QMetaObject::connectSlotsByName(changestate);
    } // setupUi

    void retranslateUi(QWidget *changestate)
    {
        changestate->setWindowTitle(QApplication::translate("changestate", "\344\277\256\346\224\271\350\256\242\345\215\225\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("changestate", "\351\200\211\346\213\251\345\277\253\351\200\222\345\205\254\345\217\270", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("changestate", "\350\256\242\345\215\225\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("changestate", "\350\256\276\347\275\256\344\270\272\345\267\262\347\255\276\346\224\266", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class changestate: public Ui_changestate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGESTATE_H
