#include <QApplication>
#include "mainwindow.h"
#include <QPixmap>
#include <QSplashScreen>
#include <QTextCodec>
#include "logindialog.h"
#include "connection.h"

int main(int argc, char *argv[])
{
    if(!createConnection())return 0;

    QApplication a(argc, argv);

//�����ı���
    QTextCodec::setCodecForCStrings(QTextCodec::codecForLocale());
    QTextCodec::setCodecForTr(QTextCodec::codecForLocale());
    QFont font("����",9,QFont::Bold,FALSE);
    a.setFont(font);
    /*QTextCodec *codec=QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForTr(codec);
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);*/

//���ز���ʾ��������
    QPixmap pixmap(":/res/start");
    QSplashScreen splash(pixmap);
    splash.setDisabled(true);
    splash.show();

    MainWindow w;

    splash.finish(&w);

    LoginDialog dlg;
    if(dlg.exec()==QDialog::Accepted){
        w.show();

        return a.exec();
    }else{
        return 0;
    }

}
