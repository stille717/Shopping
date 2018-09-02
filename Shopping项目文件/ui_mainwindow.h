/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Sep 20 00:28:50 2015
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_4;
    QAction *action_5;
    QAction *action_3;
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *Manager;
    QPushButton *loginButton;
    QWidget *widget_2;
    QLabel *label_2;
    QWidget *widget_3;
    QLabel *label_3;
    QPushButton *inquireButton;
    QPushButton *goodsMngButton;
    QPushButton *purchaseButton;
    QPushButton *ordersButton;
    QWidget *widget_5;
    QLabel *label_5;
    QWidget *widget_4;
    QLabel *label_4;
    QWidget *widget_6;
    QLabel *label_6;
    QWidget *widget;
    QLabel *label;
    QWidget *widget_7;
    QLabel *label_7;
    QWidget *widget_8;
    QLabel *label_8;
    QPushButton *corpMngButton;
    QPushButton *StateButton;
    QWidget *Statistics;
    QTextBrowser *textBrowser;
    QCommandLinkButton *commandLinkButton;
    QWidget *page_5;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget_9;
    QLabel *label_12;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(490, 330);
        MainWindow->setMinimumSize(QSize(490, 330));
        MainWindow->setMaximumSize(QSize(490, 330));
        QPalette palette;
        QBrush brush(QColor(163, 244, 244, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(0, 0, 189, 255));
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
        MainWindow->setPalette(palette);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 10, 491, 281));
        Manager = new QWidget();
        Manager->setObjectName(QString::fromUtf8("Manager"));
        loginButton = new QPushButton(Manager);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(50, 10, 91, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        loginButton->setFont(font);
        widget_2 = new QWidget(Manager);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(10, 10, 31, 31));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 31, 31));
        widget_3 = new QWidget(Manager);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(10, 60, 31, 31));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 31, 31));
        inquireButton = new QPushButton(Manager);
        inquireButton->setObjectName(QString::fromUtf8("inquireButton"));
        inquireButton->setGeometry(QRect(50, 60, 91, 41));
        inquireButton->setFont(font);
        goodsMngButton = new QPushButton(Manager);
        goodsMngButton->setObjectName(QString::fromUtf8("goodsMngButton"));
        goodsMngButton->setGeometry(QRect(50, 210, 91, 41));
        goodsMngButton->setFont(font);
        purchaseButton = new QPushButton(Manager);
        purchaseButton->setObjectName(QString::fromUtf8("purchaseButton"));
        purchaseButton->setGeometry(QRect(50, 110, 91, 41));
        purchaseButton->setFont(font);
        ordersButton = new QPushButton(Manager);
        ordersButton->setObjectName(QString::fromUtf8("ordersButton"));
        ordersButton->setGeometry(QRect(50, 160, 91, 41));
        ordersButton->setFont(font);
        widget_5 = new QWidget(Manager);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(10, 160, 31, 31));
        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 0, 31, 31));
        widget_4 = new QWidget(Manager);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(10, 110, 31, 31));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 31, 31));
        widget_6 = new QWidget(Manager);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(10, 210, 31, 31));
        label_6 = new QLabel(widget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 0, 31, 31));
        widget = new QWidget(Manager);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(190, 10, 241, 191));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 54, 12));
        widget_7 = new QWidget(Manager);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setGeometry(QRect(160, 210, 31, 31));
        label_7 = new QLabel(widget_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 0, 31, 31));
        widget_8 = new QWidget(Manager);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setGeometry(QRect(320, 210, 31, 31));
        label_8 = new QLabel(widget_8);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 0, 31, 31));
        corpMngButton = new QPushButton(Manager);
        corpMngButton->setObjectName(QString::fromUtf8("corpMngButton"));
        corpMngButton->setGeometry(QRect(200, 210, 111, 41));
        corpMngButton->setFont(font);
        StateButton = new QPushButton(Manager);
        StateButton->setObjectName(QString::fromUtf8("StateButton"));
        StateButton->setGeometry(QRect(360, 210, 111, 41));
        StateButton->setFont(font);
        stackedWidget->addWidget(Manager);
        Statistics = new QWidget();
        Statistics->setObjectName(QString::fromUtf8("Statistics"));
        textBrowser = new QTextBrowser(Statistics);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 491, 271));
        commandLinkButton = new QCommandLinkButton(Statistics);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(330, 180, 121, 41));
        stackedWidget->addWidget(Statistics);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        label_9 = new QLabel(page_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(150, 111, 61, 21));
        label_9->setFont(font);
        label_10 = new QLabel(page_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(150, 140, 61, 21));
        label_10->setFont(font);
        label_11 = new QLabel(page_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(120, 170, 91, 21));
        label_11->setFont(font);
        lineEdit = new QLineEdit(page_5);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(220, 110, 113, 20));
        lineEdit->setEchoMode(QLineEdit::Password);
        lineEdit_2 = new QLineEdit(page_5);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(220, 140, 113, 20));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_3 = new QLineEdit(page_5);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(220, 170, 113, 20));
        lineEdit_3->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(page_5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 200, 91, 31));
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(page_5);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 200, 91, 31));
        pushButton_2->setFont(font);
        widget_9 = new QWidget(page_5);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setGeometry(QRect(130, 20, 201, 80));
        label_12 = new QLabel(widget_9);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(0, 0, 201, 81));
        stackedWidget->addWidget(page_5);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 490, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu->addSeparator();
        menu->addAction(action_4);
        menu_2->addAction(action_5);
        menu_3->addAction(action_3);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Qt\350\264\255\347\211\251\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        action->setText(QApplication::translate("MainWindow", "\350\264\255\347\211\251\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        action->setShortcut(QApplication::translate("MainWindow", "Ctrl+M", 0, QApplication::UnicodeUTF8));
        action_2->setText(QApplication::translate("MainWindow", "\351\224\200\345\224\256\347\273\237\350\256\241", 0, QApplication::UnicodeUTF8));
        action_2->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        action_4->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        action_4->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        action_5->setText(QApplication::translate("MainWindow", "\346\233\264\346\224\271", 0, QApplication::UnicodeUTF8));
        action_5->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        action_3->setText(QApplication::translate("MainWindow", "\351\224\231\350\257\257\345\217\215\351\246\210", 0, QApplication::UnicodeUTF8));
        loginButton->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\346\263\250\345\206\214", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label_3->setText(QString());
        inquireButton->setText(QApplication::translate("MainWindow", "\346\235\241\344\273\266\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        goodsMngButton->setText(QApplication::translate("MainWindow", "\345\225\206\345\223\201\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        purchaseButton->setText(QApplication::translate("MainWindow", "\350\264\255\344\271\260\345\225\206\345\223\201", 0, QApplication::UnicodeUTF8));
        ordersButton->setText(QApplication::translate("MainWindow", "\350\256\242\345\215\225\346\200\273\350\247\210", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
        label_4->setText(QString());
        label_6->setText(QString());
        label->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        corpMngButton->setText(QApplication::translate("MainWindow", "\345\277\253\351\200\222\345\205\254\345\217\270\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        StateButton->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271\350\256\242\345\215\225\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><title>\346\226\260\345\273\272\347\275\221\351\241\265 1</title><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">\345\205\263\344\272\216Qt\350\264\255\347\211\251\347\263\273\347\273\237</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-style:italic;\">Created by Stille on 15/9/18.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-s"
                        "ize:11pt; font-style:italic;\">Copyright (c) 2015\345\271\264 Stille. All rights reserved.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">The program is provided as A SHOPPING SYSTEM FOR MANAGERS, INCLUDING NECESSARY FUNCTIONS YOU NEED.If you find any ERRORs or INCONVENIENCE, </span><span style=\" font-size:12pt; text-decoration: underline;\">please FEEDBACK to us !</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        commandLinkButton->setText(QApplication::translate("MainWindow", "Contact Us", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "\346\227\247\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "\346\226\260\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244\346\226\260\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244\344\277\256\346\224\271", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "\351\207\215\347\275\256", 0, QApplication::UnicodeUTF8));
        label_12->setText(QString());
        menu->setTitle(QApplication::translate("MainWindow", "\346\200\273\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        menu_2->setTitle(QApplication::translate("MainWindow", "\344\277\256\346\224\271\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        menu_3->setTitle(QApplication::translate("MainWindow", "\345\205\263\344\272\216", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
