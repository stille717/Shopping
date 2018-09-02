#ifndef GRAGH_H
#define GRAGH_H

#include <QDialog>

namespace Ui {
class Gragh;
}

class Gragh : public QDialog
{
    Q_OBJECT
    
public:
    explicit Gragh(QWidget *parent = 0);
    ~Gragh();
    
private:
    Ui::Gragh *ui;

protected:
    void paintEvent(QPaintEvent*);
};

#endif // GRAGH_H
