#include "login.h"
#include "ui_login.h"
#include "QMessageBox.h"
LogIn::LogIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogIn)
{
    nUser = NULL;
    user = NULL;
    ui->setupUi(this);
}
void LogIn::tranData(int *p_nUser,Info *p_user){
    nUser = p_nUser;
    user = p_user;
}

LogIn::~LogIn()
{
    delete ui;
}

void LogIn::on_btnLogIn_clicked()
{
    for (int i=0;i<*nUser;i++)
        if (user[i].getUserName()==ui->txtUserName->text()
                && user[i].getPassword()==ui->txtPassword->text()){
            QMessageBox::information(this,"Thong bao: ","Log In Success!!!");
            close();
            return;
        }
    QMessageBox::information(this,"Thong bao: ","Fail!!!");
}

void LogIn::on_btnQuit_clicked()
{
    close();
}
