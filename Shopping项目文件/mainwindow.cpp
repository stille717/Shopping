#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include "ui_login.h"
#include "inquire.h"
#include "ui_inquire.h"
#include "perchase.h"
#include "ui_perchase.h"
#include "order.h"
#include "ui_order.h"
#include "commodity.h"
#include "ui_commodity.h"
#include "express.h"
#include "ui_express.h"
#include "changestate.h"
#include "ui_changestate.h"
#include "gragh.h"
#include "ui_gragh.h"
#include <QPixmap>
#include <QSize>
#include <QImage>
#include <QtTest/QTest>
#include <QApplication>
#include <QStackedWidget>
#include <QMessageBox>
#include "connection.h"
#include <QTextCodec>
#include <QDesktopServices>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

//��������������ʱ
    QElapsedTimer t;
    t.start();
    while(t.elapsed()<1000)
    {
        QCoreApplication::processEvents();
    }

    ui->setupUi(this);
//����ͼƬ��ͼƬ��widget��С���䣩
    QPixmap img(":/res/shopping");
    ui->label->setPixmap(img);
    ui->label->setScaledContents(true);
    ui->label->resize(ui->widget->size());
    ui->label->show ();

    QPixmap Img(":/res/bt");
    ui->label_2->setPixmap(Img);
    ui->label_2->setScaledContents(true);
    ui->label_2->resize(ui->widget_2->size());
    ui->label_2->show ();

    ui->label_3->setPixmap(Img);
    ui->label_3->setScaledContents(true);
    ui->label_3->resize(ui->widget_3->size());
    ui->label_3->show ();

    ui->label_4->setPixmap(Img);
    ui->label_4->setScaledContents(true);
    ui->label_4->resize(ui->widget_4->size());
    ui->label_4->show ();

    ui->label_5->setPixmap(Img);
    ui->label_5->setScaledContents(true);
    ui->label_5->resize(ui->widget_5->size());
    ui->label_5->show ();

    ui->label_6->setPixmap(Img);
    ui->label_6->setScaledContents(true);
    ui->label_6->resize(ui->widget_6->size());
    ui->label_6->show ();

    ui->label_7->setPixmap(Img);
    ui->label_7->setScaledContents(true);
    ui->label_7->resize(ui->widget_7->size());
    ui->label_7->show ();

    ui->label_8->setPixmap(Img);
    ui->label_8->setScaledContents(true);
    ui->label_8->resize(ui->widget_8->size());
    ui->label_8->show ();

    QPixmap Img2(":/res/password");
    ui->label_12->setPixmap(Img2);
    ui->label_12->setScaledContents(true);
    ui->label_12->resize(ui->widget_9->size());
    ui->label_12->show ();
}

MainWindow::~MainWindow()
{
    delete ui;
}
//�������Ӱ�ť
void MainWindow::on_loginButton_clicked()
{
    Login *ui=new Login;
    ui->show();
}

void MainWindow::on_inquireButton_clicked()
{
    inquire *ui=new inquire;
    ui->show();
}

void MainWindow::on_purchaseButton_clicked()
{
    Perchase *ui=new Perchase;
    ui->show();
}

void MainWindow::on_ordersButton_clicked()
{
    order *ui=new order;
    ui->show();
}

void MainWindow::on_goodsMngButton_clicked()
{
    commodity *ui=new commodity;
    ui->show();
}

void MainWindow::on_corpMngButton_clicked()
{
    express *ui=new express;
    ui->show();
}

void MainWindow::on_StateButton_clicked()
{
    changestate *ui=new changestate;
    ui->show();
}

//�Ӳ˵�����
void MainWindow::on_action_triggered()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_action_2_triggered()
{
    //ui->stackedWidget->setCurrentIndex(1);
    Gragh *g = new Gragh(this);
        g->show();
}

void MainWindow::on_action_4_triggered()
{
    this->close();
}


void MainWindow::on_action_5_triggered()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_clicked()//�޸�����
{
    QSqlQuery query;
    query.exec("select pwd from password");
    query.next();
    QString pwOld=query.value(0).toString();
    //QSqlTableModel model;
    if (pwOld==ui->lineEdit->text())
        if (ui->lineEdit_2->text()==ui->lineEdit_3->text())
        {
            bool correct=query.exec(QString("UPDATE password SET pwd='%1'  WHERE pwd=='%2'").arg(ui->lineEdit_3->text()).arg(pwOld));
            if (correct)QMessageBox::information(this,tr("�޸�����"),tr("�޸ĳɹ�"),QMessageBox::Ok);
            else QMessageBox::information(this,tr("�޸�����"),tr("�޸�ʧ��"),QMessageBox::Ok);
        }
        else QMessageBox::information(this,tr("������һ������"),tr("��������һ���������޸ģ�"),QMessageBox::Ok);
    else QMessageBox::information(this,tr("��������ȷ����"),tr("����������ȷ�������޸ģ�"),QMessageBox::Ok);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
}



void MainWindow::on_action_3_triggered()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_commandLinkButton_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("https://github.com/stille717/Shopping.git")));
}
