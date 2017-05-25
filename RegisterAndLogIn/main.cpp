#include <QApplication>
#include "mainwindow.h"
#include "info.h"
#include <QFile>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    int *nUser;
    *nUser = 0;
    Info *user = new Info[100];
    QString s;
    QFile fi("D:/data.DAT");
    if (!fi.open(QIODevice::ReadOnly)){
        qDebug()<<"Error";
    }
    QTextStream in(&fi);
    in >> *nUser;
    for (int i = 0;i<*nUser;i++){
        in >> s;
        user[i].setFullName(s);
        in >> s;
        user[i].setUserName(s);
        in >> s;
        user[i].setPassword(s);
    }
    fi.close();


    MainWindow w;
    w.tranData(nUser, user);
    w.show();
    a.exec();
    QFile fo("D:/data.DAT");
    if (!fo.open(QIODevice::WriteOnly)){
        qDebug()<<"Error";
    }
    QTextStream out(&fo);
    out << qSetFieldWidth(20) << *nUser << "\r\n";
    for (int i = 0;i<*nUser;i++){
        out << user[i].getFullName();
        out << user[i].getUserName();
        out << user[i].getPassword();
        out << "\r\n";
    }
    delete[] user;
    fo.close();
    return 5;
}
