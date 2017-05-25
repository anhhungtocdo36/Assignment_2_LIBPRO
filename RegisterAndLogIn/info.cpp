#include "info.h"
#include <QFile>
#include <QDebug>
#include <QTextStream>
Info::Info()
{
    FullName = "";
    UserName = "";
    Password = "";
}

Info::~Info()
{
    //clean();
}

void Info::setFullName(QString s){
    FullName = s;
}
void Info::setUserName(QString s){
    UserName = s;
}
void Info::setPassword(QString s){
    Password =s;
}

