#include <QString>
#ifndef INFO_H
#define INFO_H


class Info
{
private:
    QString FullName;
    QString UserName;
    QString Password;
public:
    Info();
    //void saveInfo();
    //bool findInfo();
    void setFullName(QString);
    void setUserName(QString);
    void setPassword(QString);
    QString getFullName(){
        return FullName;
    }
    QString getUserName(){
        return UserName;
    }
    QString getPassword(){
        return Password;
    }

    ~Info();
};

#endif // INFO_H
