#ifndef CONNECTION_H
#define CONNECTION_H

#include <QtSql/QtSql>
#include <Qtsql/QSqlError>
#include <QDebug>
#include <QTextCodec>
#include <QtGlobal>

static bool createConnection()
{
    QTextCodec::setCodecForTr(QTextCodec::codecForLocale());



    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("easybook-3313b0");
    db.setDatabaseName("data.db");
    db.setUserName("zhouhejun");
    db.setPassword("123456");
    if(!db.open()){
        return false;
    }
    db.open();
    QSqlQuery query;
    return true;

    /*QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");

    db.setHostName("easybook-3313b0");
    db.setDatabaseName("data.db");
    db.setUserName("zhouhejun");
    db.setPassword("123456");
    //if(!db.open()){
        //提示出错
        //return false;}
    db.open();
    QSqlQuery query;

    query.exec("create table num(n int primary key)");
    query.exec("insert into num values(9)");

    //创建密码表
    query.exec("create table password(pwd varchar primary key)");
    query.exec("insert into password values('123456')");

    //创建用户表
        query.exec("create table user(id varchar primary key, name varchar, address varchar, telephone varchar)");
        query.exec(QObject::tr("insert into user values('166','刘晓冰','清华大学1号楼','12345678909') "));
        query.exec(QObject::tr("insert into user values('djy9608','丁佳怡','北京大学逸夫楼','63579335678') "));
        query.exec(QObject::tr("insert into user values('guomei9506','郭美','清华大学2号楼','45245246756') "));
        query.exec(QObject::tr("insert into user values('lifeng76','李峰','五道口5号楼','56365347567') "));
        query.exec(QObject::tr("insert into user values('lily','李莉','语言大学主楼','45346357245') "));
        query.exec(QObject::tr("insert into user values('liuz_jian','刘志坚','清华大学主楼','76744554456') "));
        query.exec(QObject::tr("insert into user values('lizidong7','李子东','北京航空航天大学','19356045739') "));

        //创建商品表
        query.exec("create table commodity(sid varchar primary key, sname varchar, price int, amount int)");
        query.exec(QObject::tr("insert into commodity values('s00001','微软滑控蓝牙鼠标', 169, 42)"));
        query.exec(QObject::tr("insert into commodity values('s00002','思科无限路由器', 398, 255)"));
        query.exec(QObject::tr("insert into commodity values('s00003','IPAD3', 3333, 74)"));
        query.exec(QObject::tr("insert into commodity values('s00004','IPAD mini', 3211, 52)"));
        query.exec(QObject::tr("insert into commodity values('s00005','宏基台式', 5999, 32)"));
        query.exec(QObject::tr("insert into commodity values('s00006','罗技键盘', 120, 12)"));
        query.exec(QObject::tr("insert into commodity values('s00007','iPhone6', 5288, 34)"));
        query.exec(QObject::tr("insert into commodity values('s00008','希捷硬盘', 378, 65)"));
        query.exec(QObject::tr("insert into commodity values('s00009','WD硬盘2TB', 559, 36)"));
        query.exec(QObject::tr("insert into commodity values('s00010','罗技鼠标', 399, 98)"));
        query.exec(QObject::tr("insert into commodity values('s00011','乐扣水杯', 58, 10)"));
        query.exec(QObject::tr("insert into commodity values('s00012','樱桃键盘', 398, 97)"));
        query.exec(QObject::tr("insert into commodity values('s00013','得力笔记本', 28, 9)"));
        query.exec(QObject::tr("insert into commodity values('s00014','雷柏鼠标', 139, 97)"));
        query.exec(QObject::tr("insert into commodity values('s00015','技嘉主板', 848, 45)"));



        //创建快递表
        query.exec("create table express(kdid varchar primary key, kdname varchar, kdtelephone varchar)");
        query.exec(QObject::tr("insert into express values('kd0002','UPS快递','643122312')"));
        query.exec(QObject::tr("insert into express values('kd0003','EMS快递','63858765')"));
        query.exec(QObject::tr("insert into express values('kd0004','DHL快递','12345678')"));
        query.exec(QObject::tr("insert into express values('kd0005','青苹果快递','546231985')"));
        query.exec(QObject::tr("insert into express values('kd0006','申通快递','45665432')"));
        query.exec(QObject::tr("insert into express values('kd0007','中通快递','56873215')"));
        query.exec(QObject::tr("insert into express values('kd0008','韵达快递','68795432')"));
        query.exec(QObject::tr("insert into express values('kd0009','顺丰快递','86553214')"));
        query.exec(QObject::tr("insert into express values('kd0010','中国邮政','68732154')"));

        //创建订单表
        query.exec("create table orders(odid int primary key, uname varchar, gname varchar, ename varchar,get varchar)");
        query.exec(QObject::tr("insert into orders values(1,'刘晓冰','EMS快递','罗技键盘','未签收')"));
        query.exec(QObject::tr("insert into orders values(2,'李莉','DHL快递','IPAD3','已签收')"));
        query.exec(QObject::tr("insert into orders values(3,'李峰','青苹果快递','思科无线路由器','已签收')"));
        query.exec(QObject::tr("insert into orders values(4,'丁佳怡','UPS快递','希捷硬盘','未签收')"));
        query.exec(QObject::tr("insert into orders values(5,'乔伊','UPS快递','WD硬盘2TB','未签收')"));
        query.exec(QObject::tr("insert into orders values(6,'郭美','EMS快递','乐扣水杯','已签收')"));
        query.exec(QObject::tr("insert into orders values(7,'卢东尼','中通快递','得力笔记本','未签收')"));
        query.exec(QObject::tr("insert into orders values(8,'李子东','中国邮政','技嘉主板','未签收')"));*/

    return true;

}




#endif // CONNECTION_H
