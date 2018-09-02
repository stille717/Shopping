#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <connection.h>
#include <QTextCodec>


Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

//����ͼƬ
    QPixmap img(":/res/bt");
    ui->label_5->setPixmap(img);
    ui->label_5->setScaledContents(true);
    ui->label_5->resize(ui->widget->size());
    ui->label_5->show ();

    ui->label_6->setPixmap(img);
    ui->label_6->setScaledContents(true);
    ui->label_6->resize(ui->widget_2->size());
    ui->label_6->show ();

    QSqlTableModel *model= new QSqlTableModel;
    model->setTable("user");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("name"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("address"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("telephone"));

    ui->tableView->setModel(model);

}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_clicked()
{
    if((ui->lineEdit->text().isEmpty())||(ui->lineEdit_2->text().isEmpty())||(ui->lineEdit_3->text().isEmpty())||(ui->lineEdit_4->text().isEmpty())){
            QMessageBox::information(this,tr("������������Ϣ"),tr("��������������Ϣ��ע�ᣡ"),QMessageBox::Ok);
            ui->lineEdit->setFocus();
        }else{
            QSqlQuery query;
            bool correct = query.exec(QString("insert into user values('%1','%2','%3','%4') ").arg(ui->lineEdit->text()).arg(ui->lineEdit_2->text()).arg(ui->lineEdit_3->text()).arg(ui->lineEdit_4->text()));
            if (correct) {
                QMessageBox::information(this, "�ɹ�", "�û���Ϣ��ӳɹ���", QMessageBox::Ok);
            }
            else {
                QMessageBox::information(this, "ʧ��", "���ʧ�ܣ������û����Ѿ����ڣ�", QMessageBox::Ok);
            }
        }
    QSqlTableModel *model= new QSqlTableModel;
    model->setTable("user");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("name"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("address"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("telephone"));

    ui->tableView->setModel(model);
}


void Login::on_pushButton_2_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
}
