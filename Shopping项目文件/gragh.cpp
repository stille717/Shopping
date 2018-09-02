#include "gragh.h"
#include "ui_gragh.h"
#include <QPainter>
#include <QSqlQuery>
#include <QList>
#include <QLabel>

Gragh::Gragh(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gragh)
{
    ui->setupUi(this);
}

Gragh::~Gragh()
{
    delete ui;
}

void Gragh::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawLine(56, 67, 56, 250);
    painter.drawLine(56, 250, 340, 250);
    painter.drawLine(56, 67, 45, 80);
    painter.drawLine(56, 67, 63, 79);

    QList<QString> gnames;
    QList<int> gvalues;
    QSqlQuery query;
    query.exec("select gname from orders");
    while (true) {
        query.next();
        if (!query.value(0).isValid()) break;
        QString tempName = query.value(0).toString();
        bool find = false;
        for (int i = 0; i < gnames.size(); ++ i) {
            if (gnames[i] == tempName) {
                ++ gvalues[i];
                find = true;
                break;
            }
        }
        if (!find) {
            gnames.push_back(tempName);
            gvalues.push_back(1);
        }
    }

    qreal widthPerGoods = 240.0 / gvalues.size();
    int maxValue = 0;
    for (int i = 0; i < gvalues.size(); ++ i) {
        if (gvalues[i] > maxValue) {
            maxValue = gvalues[i];
        }
    }
    qreal heightPerOrder = 160.0 / maxValue;

    for (int i = 0; i < gnames.size(); ++ i) {
        int boxX = 85 + i * widthPerGoods;
        int boxY = 250 - gvalues[i] * heightPerOrder;
        int boxHeight = 250 - boxY;
        painter.setBrush(QColor(193, 243, 160));
        painter.drawRect(boxX, boxY, widthPerGoods, boxHeight);
        painter.drawText(boxX, 254, widthPerGoods, 80, Qt::AlignHCenter | Qt::TextWordWrap,gnames[i]);
    }


}
