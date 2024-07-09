#include "changepassworddialog.h"
#include "ui_changepassworddialog.h"
#include "loginSystem.h"
#include <QMessageBox>
#include<QFile>
QFile file("task.txt");


// int flag = 0;
ChangePasswordDialog::ChangePasswordDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangePasswordDialog)
{
    ui->setupUi(this);

    // Connect the button click signal to the slot
    // connect(ui->submitNewPasswordButton, &QPushButton::clicked, this, &ChangePasswordDialog::onSubmitNewPasswordClicked);
}

ChangePasswordDialog::~ChangePasswordDialog()
{
    delete ui;
}

// void ChangePasswordDialog::onSubmitNewPasswordClicked()
// {
//     QString oldPassword = ui->oldPasswordEdit->text();
//     QString newPassword = ui->newPasswordEdit->text();
//     QString confirmPassword = ui->confirmPasswordEdit->text();



//     DataBase tomatoclock;
//     tomatoclock.createDatabase();
//     QString name;
//     name = file.readAll();
//     bool flag = tomatoclock.searchUser(name,ui->oldPasswordEdit->text());
//     if(flag){
//         qDebug()<<"ddsdsds";
//     }



//     // Here you should check the old password with the stored password
//     // For simplicity, we assume the old password is "1234"
//     if (oldPassword != "1234") {
//         QMessageBox::warning(this, "Error", "Old password is incorrect.");
//         return;
//     }

//     if (newPassword.isEmpty() || confirmPassword.isEmpty()) {
//         QMessageBox::warning(this, "Error", "New password fields cannot be empty.");
//         return;
//     }

//     if (newPassword != confirmPassword) {
//         QMessageBox::warning(this, "Error", "New passwords do not match.");
//         return;
//     }

//     // Here you should update the password in your storage (e.g., database, file, etc.)
//     // For simplicity, we just show a success message
//     QMessageBox::information(this, "Success", "Password changed successfully.");
//     // flag = 1;
//     LoginSystem *w = new LoginSystem;
//     w->show();
//     this->close();
// }

// void ChangePasswordDialog::on_submitNewPasswordButton_clicked()
// {
//     if(flag==1){

//     }


// }



void ChangePasswordDialog::on_submitNewPasswordButton_clicked()
{
    QString oldPassword = ui->oldPasswordEdit->text();
    QString newPassword = ui->newPasswordEdit->text();
    QString confirmPassword = ui->confirmPasswordEdit->text();


    QFile filein("task.txt");
    DataBase tomatoclock;
    tomatoclock.createDatabase();
    QString name;
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))

    {

        qDebug()<<"Can't open the file!";

    }
    if(!file.exists()){
        qDebug()<<"fail";
    }


    while(!file.atEnd())

    {
        qDebug()<<"open the file success!";


        QString line = file.readAll();

        name = line;

        // displayString.append(str);

    }
    // name = filein.readAll();
    qDebug()<<name;
    bool flag = tomatoclock.searchUser(name,ui->oldPasswordEdit->text());
    if(flag){
        if(ui->newPasswordEdit->text()==ui->confirmPasswordEdit->text()){
            qDebug()<<"ddddd";
            tomatoclock.updatePassword(name,ui->newPasswordEdit->text());
        }
        else{
            ui->label->setText("与旧密码不一致");
        }
    }
    else{
        ui->label_2->setText("旧密码错误");
    }



    // Here you should check the old password with the stored password
    // For simplicity, we assume the old password is "1234"
    // if (oldPassword != "1234") {
    //     QMessageBox::warning(this, "Error", "Old password is incorrect.");
    //     return;
    // }

    // if (newPassword.isEmpty() || confirmPassword.isEmpty()) {
    //     QMessageBox::warning(this, "Error", "New password fields cannot be empty.");
    //     return;
    // }

    // if (newPassword != confirmPassword) {
    //     QMessageBox::warning(this, "Error", "New passwords do not match.");
    //     return;
    // }

    // Here you should update the password in your storage (e.g., database, file, etc.)
    // For simplicity, we just show a success message
    // QMessageBox::information(this, "Success", "Password changed successfully.");
    // flag = 1;
    LoginSystem *w = new LoginSystem;
    w->show();
    this->close();
}


void ChangePasswordDialog::on_returnButton_clicked()
{
    LoginSystem *w = new LoginSystem;
    w->show();
    this->close();
}

