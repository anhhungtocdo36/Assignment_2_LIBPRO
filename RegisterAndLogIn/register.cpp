#include "register.h"
#include "ui_register.h"
#include "QMessageBox.h"
#include <fstream>
#include "info.h"
#include <QDebug>
#include <QFile>
Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    nUser = NULL;
    user = NULL;
}
void Register::Setup(int *r_nUser, Info *p_user){
    nUser = r_nUser;
    user = p_user;
}

Register::~Register()
{
    delete ui;
}
QString SynS(QString s){
    for (int i=s.length()-1;i>=0;i--)
        if (s[i]==' ')
            s[i]='.';
    return s;
}

void Register::on_btnOk_clicked()
{
    if (ui->txtPassword->text()==ui->txtConfirmPassword->text()){
        QMessageBox::information(this,"Notice","Registed!!!");
        (*nUser)++;
        QString s = ui->txtFullName->text();
        user[*nUser-1].setFullName(SynS(s));
        user[*nUser-1].setUserName(ui->txtUserName->text());
        user[*nUser-1].setPassword(ui->txtPassword->text());
        close();
    } else {
        QMessageBox::warning(this,"Warning!!!",QString::fromUtf8("Đăng kí thất bại!!!"));
    }
}

void Register::on_btnCancel_clicked()
{
    close();
}
