#include "order.h"
#include "ui_order.h"
#include "connection.h"

order::order(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::order)
{
    ui->setupUi(this);

    QSqlTableModel *model= new QSqlTableModel;
    model->setTable("orders");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("odID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("name"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("express"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("commodity"));

    ui->tableView->setModel(model);
}

order::~order()
{
    delete ui;
}
