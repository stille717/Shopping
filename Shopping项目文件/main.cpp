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

//改中文编码
    QTextCodec::setCodecForCStrings(QTextCodec::codecForLocale());
    QTextCodec::setCodecForTr(QTextCodec::codecForLocale());
    QFont font("宋体",9,QFont::Bold,FALSE);
    a.setFont(font);
    /*QTextCodec *codec=QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForTr(codec);
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);*/

//加载并显示启动画面
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
