#ifndef REGISTER_H
#define REGISTER_H
#include <QDialog>
#include "info.h"

namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    int *nUser;
    Info *user;
    explicit Register(QWidget *parent = 0);
    void Setup(int *r_nUser, Info *user);
    ~Register();

private slots:
    void on_btnOk_clicked();

    void on_btnCancel_clicked();

private:
    Ui::Register *ui;
};

#endif // REGISTER_H
