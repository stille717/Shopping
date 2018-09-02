#ifndef COMMODITY_H
#define COMMODITY_H

#include <QWidget>

namespace Ui {
class commodity;
}

class commodity : public QWidget
{
    Q_OBJECT
    
public:
    explicit commodity(QWidget *parent = 0);
    ~commodity();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::commodity *ui;
};

#endif // COMMODITY_H
