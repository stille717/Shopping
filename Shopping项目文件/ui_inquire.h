/********************************************************************************
** Form generated from reading UI file 'inquire.ui'
**
** Created: Thu Sep 17 23:48:10 2015
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INQUIRE_H
#define UI_INQUIRE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inquire
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QComboBox *comboBox;
    QWidget *widget;
    QLabel *label_3;
    QWidget *widget_2;
    QLabel *label_4;

    void setupUi(QWidget *inquire)
    {
        if (inquire->objectName().isEmpty())
            inquire->setObjectName(QString::fromUtf8("inquire"));
        inquire->resize(430, 142);
        inquire->setMinimumSize(QSize(430, 142));
        inquire->setMaximumSize(QSize(430, 142));
        QPalette palette;
        QBrush brush(QColor(155, 232, 232, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(0, 0, 214, 255));
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
        inquire->setPalette(palette);
        label = new QLabel(inquire);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 171, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(inquire);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 131, 31));
        label_2->setFont(font);
        lineEdit = new QLineEdit(inquire);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 20, 141, 31));
        pushButton = new QPushButton(inquire);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 20, 91, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(inquire);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 100, 91, 31));
        pushButton_2->setFont(font1);
        comboBox = new QComboBox(inquire);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(140, 60, 241, 31));
        comboBox->setEditable(true);
        widget = new QWidget(inquire);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(290, 20, 31, 31));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 31, 31));
        widget_2 = new QWidget(inquire);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(290, 100, 31, 31));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 31, 31));

        retranslateUi(inquire);

        QMetaObject::connectSlotsByName(inquire);
    } // setupUi

    void retranslateUi(QWidget *inquire)
    {
        inquire->setWindowTitle(QApplication::translate("inquire", "\346\235\241\344\273\266\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("inquire", "\346\240\271\346\215\256\345\225\206\345\223\201\345\220\215\347\247\260\346\237\245\350\257\242\n"
"\347\233\270\345\205\263\344\272\247\345\223\201", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("inquire", "\346\237\245\350\257\242\347\224\250\346\210\267\346\211\200\346\234\211\350\256\242\345\215\225", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("inquire", "\346\250\241\347\263\212\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("inquire", "\347\262\276\347\241\256\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class inquire: public Ui_inquire {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INQUIRE_H
