#ifndef EXPRESS_H
#define EXPRESS_H

#include <QWidget>

namespace Ui {
class express;
}

class express : public QWidget
{
    Q_OBJECT
    
public:
    explicit express(QWidget *parent = 0);
    ~express();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::express *ui;
};

#endif // EXPRESS_H
