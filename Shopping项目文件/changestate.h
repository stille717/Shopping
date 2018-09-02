#ifndef CHANGESTATE_H
#define CHANGESTATE_H

#include <QWidget>

namespace Ui {
class changestate;
}

class changestate : public QWidget
{
    Q_OBJECT
    
public:
    explicit changestate(QWidget *parent = 0);
    ~changestate();
    
private slots:
    void on_pushButton_clicked();

    void on_comboBox_currentIndexChanged(const QString &arg1);

private:
    Ui::changestate *ui;
};

#endif // CHANGESTATE_H
