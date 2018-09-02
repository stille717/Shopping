#include "logindialog.h"
#include "ui_logindialog.h"
#include "connection.h"
#include <QMessageBox>
#include <QTextCodec>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);

    QPixmap img(":/res/login");
    ui->label_2->setPixmap(img);
    ui->label_2->setScaledContents(true);
    ui->label_2->resize(ui->widget->size());
    ui->label_2->show ();
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_pushButton_clicked()
{
    if(ui->lineEdit->text().isEmpty()){
        QMessageBox::information(this,tr("ÇëÊäÈëÃÜÂë"),tr("ÇëÏÈÊäÈëÃÜÂëÔÙµÇÂ¼£¡"),QMessageBox::Ok);
        ui->lineEdit->setFocus();
    }else{
        QSqlQuery query;
        query.exec("select pwd from password");
        query.next();
        QString pwd=query.value(0).toString();
        if(pwd==ui->lineEdit->text()){
            QDialog::accept();
        }else{
            QMessageBox::warning(this,tr("ÃÜÂë´íÎó"),tr("ÇëÊäÈëÕýÈ·µÄÃÜÂëÔÙµÇÂ¼£¡"),QMessageBox::Ok);
            ui->lineEdit->clear();
            ui->lineEdit->setFocus();
        }
    }
}

void LoginDialog::on_pushButton_2_clicked()
{
    QDialog::reject();
}
