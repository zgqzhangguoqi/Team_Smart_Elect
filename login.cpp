#include "login.h"
#include "ui_login.h"
#include <QMessageBox>

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
    QString username;
    QString password;
    username = ui->user->text();
    password = ui->password->text();
    if(username == "admin" && password == "123")
    {
        this->accept();
    }
    else
    {
        QMessageBox::warning(this,"ERROR","用户名或密码错误，请重试！");
        //this->accept();
        ui->user->clear();
        ui->password->clear();
        ui->user->setFocus();
    }
}
