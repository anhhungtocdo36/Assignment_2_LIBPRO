#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "login.h"
#include "register.h"
#include <QMainWindow>
#include "info.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int *nUser;
    Info *user;
    void tranData(int *p_nUser, Info *p_user);
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_pushButton_clicked();

    void on_btnRegister_clicked();

private:
    Ui::MainWindow *ui;
    LogIn *login;
    Register *reg;
};


#endif // MAINWINDOW_H
