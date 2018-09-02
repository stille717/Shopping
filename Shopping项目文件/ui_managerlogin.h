/********************************************************************************
** Form generated from reading UI file 'managerlogin.ui'
**
** Created: Sat Sep 5 19:58:12 2015
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERLOGIN_H
#define UI_MANAGERLOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManagerLogin
{
public:
    QLabel *label;
    QWidget *widget;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *ManagerLogin)
    {
        if (ManagerLogin->objectName().isEmpty())
            ManagerLogin->setObjectName(QString::fromUtf8("ManagerLogin"));
        ManagerLogin->resize(240, 133);
        ManagerLogin->setMinimumSize(QSize(240, 133));
        ManagerLogin->setMaximumSize(QSize(240, 133));
        QPalette palette;
        QBrush brush(QColor(159, 238, 238, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(0, 0, 213, 255));
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
        ManagerLogin->setPalette(palette);
        label = new QLabel(ManagerLogin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 20, 141, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223-\346\226\271\346\255\243\350\266\205\345\244\247\345\255\227\347\254\246\351\233\206"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        widget = new QWidget(ManagerLogin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 51, 51));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 51, 51));
        label_3 = new QLabel(ManagerLogin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 70, 71, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        lineEdit = new QLineEdit(ManagerLogin);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 70, 113, 20));
        pushButton = new QPushButton(ManagerLogin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 100, 61, 23));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
        pushButton_2 = new QPushButton(ManagerLogin);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 100, 61, 23));
        pushButton_2->setFont(font2);

        retranslateUi(ManagerLogin);

        QMetaObject::connectSlotsByName(ManagerLogin);
    } // setupUi

    void retranslateUi(QWidget *ManagerLogin)
    {
        ManagerLogin->setWindowTitle(QApplication::translate("ManagerLogin", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ManagerLogin", "\346\254\242\350\277\216\347\231\273\345\275\225Qt\350\264\255\347\211\251\347\263\273\347\273\237\357\274\201", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("ManagerLogin", "\347\256\241\347\220\206\345\221\230\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ManagerLogin", "\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ManagerLogin", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ManagerLogin: public Ui_ManagerLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERLOGIN_H
