#include "inquire.h"
#include "ui_inquire.h"
#include "connection.h"
#include <QTableView>
#include <QStringList>
#include <QCompleter>

inquire::inquire(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::inquire)
{
    ui->setupUi(this);

//²åÈëÍ¼Æ¬
    QPixmap img(":/res/bt");
    ui->label_3->setPixmap(img);
    ui->label_3->setScaledContents(true);
    ui->label_3->resize(ui->widget->size());
    ui->label_3->show ();

    ui->label_4->setPixmap(img);
    ui->label_4->setScaledContents(true);
    ui->label_4->resize(ui->widget_2->size());
    ui->label_4->show ();

    //QSqlQueryModel *umodel = new QSqlQueryModel(this);
    //umodel->setQuery(QString("select name from user"));
    //ui->comboBox->setModel(umodel);

    QStringList strings;
    QSqlQuery query("select name from user");
    while (query.next()) {
          QString name = query.value(0).toString();
          strings.append(name);
    }
    QCompleter *completer = new QCompleter(strings, this);
    ui->comboBox->clear();
    ui->comboBox->addItems(strings);
    ui->comboBox->setCompleter(completer);
}

inquire::~inquire()
{
    delete ui;
}

void inquire::on_pushButton_clicked()
{
    QTableView* table = new QTableView;
    table->setWindowTitle(tr("Commodity"));
    table->setSelectionBehavior(QAbstractItemView::SelectRows);
    table->setSelectionMode(QAbstractItemView::SingleSelection);
    QSqlTableModel* model = new QSqlTableModel(this);
    model->setTable("commodity");
    QString text=ui->lineEdit->text();
    model->setFilter(QObject::tr("sname like '%%%1%%'").arg(text));
    //model->setFilter(QObject::tr("sname='%1'").arg(text));
    model->select();
    model->setHeaderData(0, Qt::Horizontal, tr("sID"));
    model->setHeaderData(1, Qt::Horizontal, tr("sName"));
    model->setHeaderData(2, Qt::Horizontal, tr("price"));
    model->setHeaderData(3, Qt::Horizontal, tr("amount"));
    table->setModel(model);

    table->show();
}

void inquire::on_pushButton_2_clicked()
{
    QTableView* table = new QTableView;
    table->setWindowTitle(tr("Order"));
    table->setSelectionBehavior(QAbstractItemView::SelectRows);
    table->setSelectionMode(QAbstractItemView::SingleSelection);
    QSqlTableModel* model = new QSqlTableModel(this);
    model->setTable("orders");
    model->setFilter(QString("uname='%1'").arg(ui->comboBox->currentText()));
    model->select();
    model->setHeaderData(0, Qt::Horizontal, tr("name"));
    model->setHeaderData(1, Qt::Horizontal, tr("commodity"));
    model->setHeaderData(2, Qt::Horizontal, tr("express"));
    table->setModel(model);

    table->show();
}
