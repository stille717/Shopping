#include "perchase.h"
#include "ui_perchase.h"
#include "connection.h"
#include <QCompleter>
#include <QStringList>
#include <QMessageBox>
#include <QTextCodec>

Perchase::Perchase(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Perchase)
{
    ui->setupUi(this);

//插入图片
    QPixmap img(":/res/bt");
    ui->label_4->setPixmap(img);
    ui->label_4->setScaledContents(true);
    ui->label_4->resize(ui->widget->size());
    ui->label_4->show ();

    /*QSqlQueryModel *smodel=new QSqlQueryModel(this);
    smodel->setQuery(QString("select sname from commodity"));
    ui->scomboBox->setModel(smodel);*/

    QSqlQueryModel *umodel=new QSqlQueryModel(this);
    umodel->setQuery(QString("select name from user"));
    ui->ucomboBox->setModel(umodel);

    QSqlQueryModel *kdmodel=new QSqlQueryModel(this);
    kdmodel->setQuery(QString("select kdname from express"));
    ui->kdcomboBox->setModel(kdmodel);

    QStringList strings;
    QSqlQuery query("select sname from commodity");
    while (query.next()) {
          QString sname = query.value(0).toString();
          strings.append(sname);
    }
    QCompleter *completer = new QCompleter(strings, this);
    ui->scomboBox->clear();
    ui->scomboBox->addItems(strings);
    ui->scomboBox->setCompleter(completer);//实现自动补全功能

    /*QStringList strings2;
    QSqlQuery query2("select name from user");
    while (query2.next()) {
          QString kdname = query2.value(0).toString();
          strings.append(kdname);
    }
    QCompleter *completer2 = new QCompleter(strings2, this);
    ui->ucomboBox->clear();
    ui->ucomboBox->addItems(strings2);
    ui->ucomboBox->setCompleter(completer2);*/

}

Perchase::~Perchase()
{
    delete ui;
}



void Perchase::on_pushButton_clicked()
{
    QString name = ui->ucomboBox->currentText();
    QString express = ui->kdcomboBox->currentText();
    QString goods = ui->scomboBox->currentText();
    QSqlQuery nquery;
    nquery.exec("select n from num");
    nquery.first();
    int n=nquery.value(0).toInt();
    QSqlQuery query;
    bool success = query.exec(QObject::tr("insert into orders values('%1','%2','%3','%4','未签收')").arg(n).arg(name).arg(express).arg(goods));
    if (success) {
        QMessageBox::information(0, "成功", "成功添加订单！", QMessageBox::Ok);
        nquery.exec(QString("UPDATE num SET n='%1' WHERE n=='%2'").arg(n+1).arg(n));
    }
    else {
        QMessageBox::information(0, "失败", "添加订单失败！", QMessageBox::Ok);
        qDebug() << query.lastError();
    }
}
