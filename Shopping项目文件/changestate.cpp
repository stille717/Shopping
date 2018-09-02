#include "changestate.h"
#include "ui_changestate.h"
#include "connection.h"
#include <QCompleter>
#include <QStringList>
#include <QMessageBox>
#include <QTextCodec>

changestate::changestate(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::changestate)
{
    ui->setupUi(this);

    //设置combobox
        QStringList strings;
        QSqlQuery query("select kdname from express");
        while (query.next()) {
              QString kdname = query.value(0).toString();
              strings.append(kdname);}
        QCompleter *completer = new QCompleter(strings, this);
        ui->comboBox->clear();
        ui->comboBox->addItems(strings);
        ui->comboBox->setCompleter(completer);

        QSqlQueryModel *odmodel=new QSqlQueryModel(this);
        odmodel->setQuery(QString("select odid from orders where gname=='%1'").arg(ui->comboBox->currentText()));
        ui->comboBox_2->setModel(odmodel);
}

changestate::~changestate()
{
    delete ui;
}

void changestate::on_pushButton_clicked()
{
    QSqlQuery query;
    bool correct=query.exec(QString("UPDATE orders SET get='已签收'  WHERE odid=='%1'").arg(ui->comboBox_2->currentText()));
    if (correct)QMessageBox::information(this,tr("修改状态"),tr("修改成功"),QMessageBox::Ok);
    else QMessageBox::information(this,tr("修改状态"),tr("修改失败"),QMessageBox::Ok);
}

void changestate::on_comboBox_currentIndexChanged(const QString &arg1)
{
    QSqlQueryModel *odmodel=new QSqlQueryModel(this);
    odmodel->setQuery(QString("select odid from orders where gname=='%1'").arg(arg1));
    ui->comboBox_2->setModel(odmodel);
}
