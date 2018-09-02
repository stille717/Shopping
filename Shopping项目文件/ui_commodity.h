/********************************************************************************
** Form generated from reading UI file 'commodity.ui'
**
** Created: Thu Sep 17 23:48:10 2015
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMODITY_H
#define UI_COMMODITY_H

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

class Ui_commodity
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QComboBox *comboBox;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QTableView *tableView;

    void setupUi(QWidget *commodity)
    {
        if (commodity->objectName().isEmpty())
            commodity->setObjectName(QString::fromUtf8("commodity"));
        commodity->resize(451, 468);
        commodity->setMinimumSize(QSize(451, 468));
        commodity->setMaximumSize(QSize(451, 468));
        QPalette palette;
        QBrush brush(QColor(148, 222, 222, 255));
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
        commodity->setPalette(palette);
        label = new QLabel(commodity);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 54, 12));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(commodity);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 60, 54, 12));
        label_2->setFont(font);
        label_3 = new QLabel(commodity);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 90, 54, 12));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_4 = new QLabel(commodity);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 120, 54, 12));
        label_4->setFont(font);
        lineEdit = new QLineEdit(commodity);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 30, 181, 20));
        lineEdit_2 = new QLineEdit(commodity);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(90, 60, 181, 20));
        lineEdit_3 = new QLineEdit(commodity);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(90, 90, 181, 20));
        lineEdit_4 = new QLineEdit(commodity);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(90, 120, 181, 20));
        label_5 = new QLabel(commodity);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 360, 54, 12));
        label_5->setFont(font);
        comboBox = new QComboBox(commodity);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(90, 360, 191, 22));
        comboBox->setEditable(true);
        label_6 = new QLabel(commodity);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 420, 81, 16));
        label_6->setFont(font);
        lineEdit_5 = new QLineEdit(commodity);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(110, 390, 171, 20));
        label_7 = new QLabel(commodity);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 390, 81, 16));
        label_7->setFont(font);
        lineEdit_6 = new QLineEdit(commodity);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(110, 420, 171, 20));
        pushButton = new QPushButton(commodity);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(340, 40, 91, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
        pushButton_2 = new QPushButton(commodity);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 90, 91, 31));
        pushButton_2->setFont(font2);
        pushButton_3 = new QPushButton(commodity);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(360, 360, 71, 23));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(commodity);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(360, 390, 71, 23));
        pushButton_4->setFont(font);
        pushButton_5 = new QPushButton(commodity);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(360, 420, 71, 23));
        pushButton_5->setFont(font);
        tableView = new QTableView(commodity);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 150, 411, 192));

        retranslateUi(commodity);

        QMetaObject::connectSlotsByName(commodity);
    } // setupUi

    void retranslateUi(QWidget *commodity)
    {
        commodity->setWindowTitle(QApplication::translate("commodity", "\345\225\206\345\223\201\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("commodity", "\345\225\206\345\223\201\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("commodity", "\345\225\206\345\223\201\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("commodity", "\344\273\267\351\222\261", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("commodity", "\345\272\223\345\255\230\346\225\260\351\207\217", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("commodity", "\351\200\211\346\213\251\345\225\206\345\223\201", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("commodity", "\350\256\276\347\275\256\345\272\223\345\255\230\346\225\260\351\207\217", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("commodity", "\350\256\276\347\275\256\345\225\206\345\223\201\344\273\267\346\240\274", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("commodity", "\346\267\273\345\212\240\345\225\206\345\223\201", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("commodity", "\346\270\205\347\251\272", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("commodity", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("commodity", "\346\233\264\346\224\271", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("commodity", "\346\233\264\346\224\271", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class commodity: public Ui_commodity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMODITY_H
