#include "reset.h"
#include "ui_reset.h"
#include "loginSystem.h"
#include<QMessageBox>
reset::reset(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reset)
{
    ui->setupUi(this);
}

reset::~reset()
{
    delete ui;
}

// void reset::on_pushButton_2_clicked()
// {
//     LoginSystem *w = new LoginSystem;
//     w->show();
//     this->close();
// }


void reset::on_pushButton_3_clicked()
{
    LoginSystem *w = new LoginSystem;
    w->show();
    this->close();
}


void reset::on_pushButton_4_clicked()
{
    DataBase tomatoClock;
    tomatoClock.createDatabase();
    Users user;
    user.userName = "";
    tomatoClock.emailSearch(ui->lineEdit->text(),user);
    qDebug()<<user.userName;
    if(user.userName!=""){
        tomatoClock.updatePassword(user.userName,ui->lineEdit_2->text());
        QMessageBox::about(this, tr("找回密码"), tr("更改密码成功！"));
        LoginSystem *w = new LoginSystem;
        w->show();
        this->close();


    }
    else{
        QMessageBox::about(this, tr("找回密码"), tr("此邮箱未注册账号，请重试！"));
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
    }
}

