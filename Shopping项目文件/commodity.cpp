#include "commodity.h"
#include "ui_commodity.h"
#include <QMessageBox>
#include "connection.h"
#include <QCompleter>
#include <QStringList>
#include <QTextCodec>

commodity::commodity(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::commodity)
{
    ui->setupUi(this);

//显示表格;
    QSqlTableModel *model= new QSqlTableModel;
    model->setTable("commodity");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("sid"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("sname"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("price"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("amount"));

    ui->tableView->setModel(model);
    //设置combobox
        QStringList strings;
        QSqlQuery query("select sname from commodity");
        while (query.next()) {
              QString sname = query.value(0).toString();
              strings.append(sname);
        }
        QCompleter *completer = new QCompleter(strings, this);
        ui->comboBox->clear();
        ui->comboBox->addItems(strings);
        ui->comboBox->setCompleter(completer);
    }

    commodity::~commodity()
    {
        delete ui;
    }

    void commodity::on_pushButton_clicked()
    {
        if((ui->lineEdit->text().isEmpty())||(ui->lineEdit_2->text().isEmpty())||(ui->lineEdit_3->text().isEmpty())||(ui->lineEdit_4->text().isEmpty())){
                QMessageBox::information(this,tr("请输入完整信息"),tr("请先输入完整信息再添加！"),QMessageBox::Ok);
                ui->lineEdit->setFocus();
            }else{
                QSqlQuery query;
                bool correct = query.exec(QString("insert into commodity values('%1','%2','%3','%4') ").arg(ui->lineEdit->text()).arg(ui->lineEdit_2->text()).arg(ui->lineEdit_3->text()).arg(ui->lineEdit_4->text()));
                if (correct) {
                    QMessageBox::information(this, "成功", "商品信息添加成功！", QMessageBox::Ok);
                }
                else {
                    QMessageBox::information(this, "失败", "添加失败，可能商品已经存在！", QMessageBox::Ok);
                }
            }
        QSqlTableModel *model= new QSqlTableModel;
        model->setTable("commodity");
        model->setEditStrategy(QSqlTableModel::OnManualSubmit);
        model->select();
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("sid"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("sname"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("price"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("amount"));
        ui->tableView->setModel(model);

        QStringList strings;
        QSqlQuery query("select sname from commodity");
        while (query.next()) {
              QString sname = query.value(0).toString();
              strings.append(sname);
        }
        QCompleter *completer = new QCompleter(strings, this);
        ui->comboBox->clear();
        ui->comboBox->addItems(strings);
        ui->comboBox->setCompleter(completer);

    }

    void commodity::on_pushButton_3_clicked()
    {
        QSqlQuery query;
    int current=ui->comboBox->currentIndex();

    bool correct=query.exec(QString("DELETE FROM commodity WHERE sname='%1' ").arg(ui->comboBox->currentText()));

    if(correct){
        QMessageBox::information(this,"成功","商品删除成功！",QMessageBox::Ok);
        ui->comboBox->removeItem(current);
    }else{
        QMessageBox::information(this,"失败","商品删除失败",QMessageBox::Ok);
    }

    QSqlTableModel *model= new QSqlTableModel;
    model->setTable("commodity");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("sid"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("sname"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("price"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("amount"));

    ui->tableView->setModel(model);
}

void commodity::on_pushButton_4_clicked()
{
    QSqlQuery query;
    bool correct=query.exec(QString("UPDATE commodity SET price='%1' WHERE sname=='%2' ").arg(ui->lineEdit_5->text()).arg(ui->comboBox->currentText()));
    if(correct){
        QMessageBox::information(this,"成功","修改成功！",QMessageBox::Ok);
    }else{
        QMessageBox::information(this,"失败","修改失败！",QMessageBox::Ok);
    }

    QSqlTableModel *model= new QSqlTableModel;
    model->setTable("commodity");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("sid"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("sname"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("price"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("amount"));

    ui->tableView->setModel(model);
}

void commodity::on_pushButton_5_clicked()
{
    QSqlQuery query;
    bool correct=query.exec(QString("UPDATE commodity SET amount='%1' WHERE sname=='%2' ").arg(ui->lineEdit_6->text()).arg(ui->comboBox->currentText()));
    if(correct){
        QMessageBox::information(this,"成功","修改成功！",QMessageBox::Ok);
    }else{
        QMessageBox::information(this,"失败","修改失败！",QMessageBox::Ok);
    }

    QSqlTableModel *model= new QSqlTableModel;
    model->setTable("commodity");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("sid"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("sname"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("price"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("amount"));

    ui->tableView->setModel(model);
}

void commodity::on_pushButton_2_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
}
