#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QTextStream>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    nUser = NULL;
    user = NULL;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::tranData(int *p_nUser, Info *p_user){
    nUser = p_nUser;
    user = p_user;
}

void MainWindow::on_pushButton_clicked()
{
    login = new LogIn(this);
    login->tranData(nUser, user);
    login->show();
}

void MainWindow::on_btnRegister_clicked()
{
    reg = new Register(this);
    reg->Setup(nUser, user);
    reg->show();
    //while(!(reg->cls));
}
