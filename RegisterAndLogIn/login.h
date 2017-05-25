#ifndef LOGIN_H
#define LOGIN_H
#include <info.h>

#include <QDialog>

namespace Ui {
class LogIn;
}

class LogIn : public QDialog
{
    Q_OBJECT

public:
    explicit LogIn(QWidget *parent = 0);
    int *nUser;
    Info *user;
    void tranData(int *p_nUser, Info *p_user);
    ~LogIn();

private slots:
    void on_btnLogIn_clicked();

    void on_btnQuit_clicked();

private:
    Ui::LogIn *ui;
};

#endif // LOGIN_H
