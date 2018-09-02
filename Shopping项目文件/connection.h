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
        //��ʾ����
        //return false;}
    db.open();
    QSqlQuery query;

    query.exec("create table num(n int primary key)");
    query.exec("insert into num values(9)");

    //���������
    query.exec("create table password(pwd varchar primary key)");
    query.exec("insert into password values('123456')");

    //�����û���
        query.exec("create table user(id varchar primary key, name varchar, address varchar, telephone varchar)");
        query.exec(QObject::tr("insert into user values('166','������','�廪��ѧ1��¥','12345678909') "));
        query.exec(QObject::tr("insert into user values('djy9608','������','������ѧ�ݷ�¥','63579335678') "));
        query.exec(QObject::tr("insert into user values('guomei9506','����','�廪��ѧ2��¥','45245246756') "));
        query.exec(QObject::tr("insert into user values('lifeng76','���','�����5��¥','56365347567') "));
        query.exec(QObject::tr("insert into user values('lily','����','���Դ�ѧ��¥','45346357245') "));
        query.exec(QObject::tr("insert into user values('liuz_jian','��־��','�廪��ѧ��¥','76744554456') "));
        query.exec(QObject::tr("insert into user values('lizidong7','���Ӷ�','�������պ����ѧ','19356045739') "));

        //������Ʒ��
        query.exec("create table commodity(sid varchar primary key, sname varchar, price int, amount int)");
        query.exec(QObject::tr("insert into commodity values('s00001','΢�����������', 169, 42)"));
        query.exec(QObject::tr("insert into commodity values('s00002','˼������·����', 398, 255)"));
        query.exec(QObject::tr("insert into commodity values('s00003','IPAD3', 3333, 74)"));
        query.exec(QObject::tr("insert into commodity values('s00004','IPAD mini', 3211, 52)"));
        query.exec(QObject::tr("insert into commodity values('s00005','���̨ʽ', 5999, 32)"));
        query.exec(QObject::tr("insert into commodity values('s00006','�޼�����', 120, 12)"));
        query.exec(QObject::tr("insert into commodity values('s00007','iPhone6', 5288, 34)"));
        query.exec(QObject::tr("insert into commodity values('s00008','ϣ��Ӳ��', 378, 65)"));
        query.exec(QObject::tr("insert into commodity values('s00009','WDӲ��2TB', 559, 36)"));
        query.exec(QObject::tr("insert into commodity values('s00010','�޼����', 399, 98)"));
        query.exec(QObject::tr("insert into commodity values('s00011','�ֿ�ˮ��', 58, 10)"));
        query.exec(QObject::tr("insert into commodity values('s00012','ӣ�Ҽ���', 398, 97)"));
        query.exec(QObject::tr("insert into commodity values('s00013','�����ʼǱ�', 28, 9)"));
        query.exec(QObject::tr("insert into commodity values('s00014','�װ����', 139, 97)"));
        query.exec(QObject::tr("insert into commodity values('s00015','��������', 848, 45)"));



        //������ݱ�
        query.exec("create table express(kdid varchar primary key, kdname varchar, kdtelephone varchar)");
        query.exec(QObject::tr("insert into express values('kd0002','UPS���','643122312')"));
        query.exec(QObject::tr("insert into express values('kd0003','EMS���','63858765')"));
        query.exec(QObject::tr("insert into express values('kd0004','DHL���','12345678')"));
        query.exec(QObject::tr("insert into express values('kd0005','��ƻ�����','546231985')"));
        query.exec(QObject::tr("insert into express values('kd0006','��ͨ���','45665432')"));
        query.exec(QObject::tr("insert into express values('kd0007','��ͨ���','56873215')"));
        query.exec(QObject::tr("insert into express values('kd0008','�ϴ���','68795432')"));
        query.exec(QObject::tr("insert into express values('kd0009','˳����','86553214')"));
        query.exec(QObject::tr("insert into express values('kd0010','�й�����','68732154')"));

        //����������
        query.exec("create table orders(odid int primary key, uname varchar, gname varchar, ename varchar,get varchar)");
        query.exec(QObject::tr("insert into orders values(1,'������','EMS���','�޼�����','δǩ��')"));
        query.exec(QObject::tr("insert into orders values(2,'����','DHL���','IPAD3','��ǩ��')"));
        query.exec(QObject::tr("insert into orders values(3,'���','��ƻ�����','˼������·����','��ǩ��')"));
        query.exec(QObject::tr("insert into orders values(4,'������','UPS���','ϣ��Ӳ��','δǩ��')"));
        query.exec(QObject::tr("insert into orders values(5,'����','UPS���','WDӲ��2TB','δǩ��')"));
        query.exec(QObject::tr("insert into orders values(6,'����','EMS���','�ֿ�ˮ��','��ǩ��')"));
        query.exec(QObject::tr("insert into orders values(7,'¬����','��ͨ���','�����ʼǱ�','δǩ��')"));
        query.exec(QObject::tr("insert into orders values(8,'���Ӷ�','�й�����','��������','δǩ��')"));*/

    return true;

}




#endif // CONNECTION_H
