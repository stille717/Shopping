/********************************************************************************
** Form generated from reading UI file 'express.ui'
**
** Created: Thu Sep 17 23:48:10 2015
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPRESS_H
#define UI_EXPRESS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_express
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTableView *tableView;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *express)
    {
        if (express->objectName().isEmpty())
            express->setObjectName(QString::fromUtf8("express"));
        express->resize(400, 351);
        express->setMinimumSize(QSize(400, 351));
        express->setMaximumSize(QSize(400, 351));
        QPalette palette;
        QBrush brush(QColor(147, 221, 221, 255));
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
        QBrush brush4(QColor(0, 0, 206, 255));
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
        express->setPalette(palette);
        label = new QLabel(express);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 81, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(express);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 81, 16));
        label_2->setFont(font);
        label_3 = new QLabel(express);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 90, 54, 12));
        label_3->setFont(font);
        tableView = new QTableView(express);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 120, 361, 192));
        label_4 = new QLabel(express);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 320, 71, 16));
        label_4->setFont(font);
        lineEdit = new QLineEdit(express);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(110, 30, 141, 20));
        lineEdit_2 = new QLineEdit(express);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 60, 141, 20));
        lineEdit_3 = new QLineEdit(express);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(110, 90, 141, 20));
        comboBox = new QComboBox(express);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(100, 320, 151, 22));
        comboBox->setEditable(true);
        pushButton = new QPushButton(express);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 30, 75, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(express);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 70, 75, 31));
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(express);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 320, 75, 23));
        pushButton_3->setFont(font);

        retranslateUi(express);

        QMetaObject::connectSlotsByName(express);
    } // setupUi

    void retranslateUi(QWidget *express)
    {
        express->setWindowTitle(QApplication::translate("express", "\345\277\253\351\200\222\345\205\254\345\217\270\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("express", "\345\277\253\351\200\222\345\205\254\345\217\270\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("express", "\345\277\253\351\200\222\345\205\254\345\217\270\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("express", "\347\224\265\350\257\235", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("express", "\345\276\205\345\210\240\351\231\244\345\205\254\345\217\270", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("express", "\346\267\273\345\212\240", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("express", "\346\270\205\347\251\272", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("express", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class express: public Ui_express {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPRESS_H
