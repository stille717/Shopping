#ifndef INQUIRE_H
#define INQUIRE_H

#include <QWidget>

namespace Ui {
class inquire;
}

class inquire : public QWidget
{
    Q_OBJECT
    
public:
    explicit inquire(QWidget *parent = 0);
    ~inquire();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::inquire *ui;
};

#endif // INQUIRE_H
