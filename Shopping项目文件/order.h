#ifndef ORDER_H
#define ORDER_H

#include <QWidget>

namespace Ui {
class order;
}

class order : public QWidget
{
    Q_OBJECT
    
public:
    explicit order(QWidget *parent = 0);
    ~order();
    
private:
    Ui::order *ui;
};

#endif // ORDER_H
