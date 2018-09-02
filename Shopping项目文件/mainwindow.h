#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_loginButton_clicked();

    void on_inquireButton_clicked();

    void on_purchaseButton_clicked();

    void on_action_triggered();

    void on_action_4_triggered();

    void on_action_2_triggered();

    void on_action_5_triggered();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_goodsMngButton_clicked();

    void on_ordersButton_clicked();

    void on_corpMngButton_clicked();

    void on_StateButton_clicked();

    void on_action_3_triggered();


    void on_commandLinkButton_clicked();

private:
    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
