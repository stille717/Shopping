#ifndef PERCHASE_H
#define PERCHASE_H

#include <QWidget>

namespace Ui {
class Perchase;
}

class Perchase : public QWidget
{
    Q_OBJECT
    
public:
    explicit Perchase(QWidget *parent = 0);
    ~Perchase();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::Perchase *ui;
};

#endif // PERCHASE_H
