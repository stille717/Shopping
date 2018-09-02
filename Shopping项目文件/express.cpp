#include "express.h"
#include "ui_express.h"
#include <QMessageBox>
#include "connection.h"
#include <QCompleter>
#include <QStringList>

express::express(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::express)
{
    ui->setupUi(this);
    //��ʾ���;
        QSqlTableModel *model= new QSqlTableModel;
        model->setTable("express");
        model->setEditStrategy(QSqlTableModel::OnManualSubmit);
        model->select();

        model->setHeaderData(0, Qt::Horizontal, QObject::tr("kdID"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("kdName"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("kdTelephone"));

        ui->tableView->setModel(model);
    //����combobox
        QStringList strings;
        QSqlQuery query("select kdname from express");
        while (query.next()) {
              QString kdname = query.value(0).toString();
              strings.append(kdname);}
        QCompleter *completer = new QCompleter(strings, this);
        ui->comboBox->clear();
        ui->comboBox->addItems(strings);
        ui->comboBox->setCompleter(completer);
}

express::~express()
{
    delete ui;
}

void express::on_pushButton_clicked()
{
    if((ui->lineEdit->text().isEmpty())||(ui->lineEdit_2->text().isEmpty())||(ui->lineEdit_3->text().isEmpty())){
            QMessageBox::information(this,tr("������������Ϣ"),tr("��������������Ϣ����ӣ�"),QMessageBox::Ok);
            ui->lineEdit->setFocus();
        }else{
            QSqlQuery query;
            bool correct = query.exec(QString("insert into express values('%1','%2','%3') ").arg(ui->lineEdit->text()).arg(ui->lineEdit_2->text()).arg(ui->lineEdit_3->text()));
            if (correct) {
                QMessageBox::information(this, "�ɹ�", "�����Ϣ��ӳɹ���", QMessageBox::Ok);
            }
            else {
                QMessageBox::information(this, "ʧ��", "���ʧ�ܣ����ܿ���Ѿ����ڣ�", QMessageBox::Ok);
            }
        }
    QSqlTableModel *model= new QSqlTableModel;
    model->setTable("express");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("kdID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("kdName"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("kdTelephone"));

    ui->tableView->setModel(model);
    //����combobox
        QStringList strings;
        QSqlQuery query("select kdname from express");
        while (query.next()) {
              QString kdname = query.value(0).toString();
              strings.append(kdname);}
        QCompleter *completer = new QCompleter(strings, this);
        ui->comboBox->clear();
        ui->comboBox->addItems(strings);
        ui->comboBox->setCompleter(completer);
}

void express::on_pushButton_2_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
}

void express::on_pushButton_3_clicked()
{
    QSqlQuery query;
    int current=ui->comboBox->currentIndex();

    bool correct=query.exec(QString("DELETE FROM express WHERE kdname='%1' ").arg(ui->comboBox->currentText()));

    if(correct){
        QMessageBox::information(this,"�ɹ�","���ɾ���ɹ���",QMessageBox::Ok);
        ui->comboBox->removeItem(current);
    }else{
        QMessageBox::information(this,"ʧ��","���ɾ��ʧ��",QMessageBox::Ok);
    }

    QSqlTableModel *model= new QSqlTableModel;
    model->setTable("express");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("kdID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("kdName"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("kdTelephone"));

    ui->tableView->setModel(model);
}
