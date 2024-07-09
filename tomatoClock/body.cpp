#include "body.h"
#include "ui_body.h"
#include "loginSystem.h"
#include "changepassworddialog.h"
// #include "database.h"
// #include "task.h"
// #include <fstream>
// #include<string>
// #include<iostream>
#include<QFile>

// fstream readfile;

// string name;

Body::Body(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Body)
{


    // DataBase tasksdb;

    // readfile.open("task.txt",ios::in);
    // if(!readfile.is_open()){
    //     qDebug()<<"open file error!";
    // }
    // else{
    //     readfile>>name;
    //     cout<<name;
    //     username = QString::fromStdString(name);
    //     // qDebug()<<username;
    //     readfile.close();
    // }

    // QString displayString;

    QFile file("task.txt");

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

        username = line;

        // displayString.append(str);

    }


    ui->setupUi(this);
    qDebug()<<username;
    tomatoClock.createDatabase(username);

    tomatoClock.username = username;
    tomatoClock.createTaskTable();
    tomatoClock.taskTableClear();//测试用
    tomatoClock.insertTask("read",40,10);
    tomatoClock.insertTask("sport",40,14);
    tomatoClock.insertTask("study",34,10);
    tomatoClock.deleteTask("read");
    vector<Tasks> task;
    tomatoClock.searchTask(task);
    for(auto i = 0;i<task.size();i++){
        qDebug()<<QString("任务名：%1  专注时长：%2   休息时长：%3").arg(task[i].taskName).arg(task[i].workTime).arg(task[i].breakTime);
    }

    tomatoClock.updataTask("study",11,1);



}

Body::~Body()
{
    delete ui;
}


void Body::on_homeButton_clicked()
{

    ui->stackedWidget->setCurrentIndex(0);

}


void Body::on_labelButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void Body::on_clockButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    vector<Tasks> tasks;
    QString str;
    tomatoClock.searchTask(tasks);
    // qDebug()<<task[0].taskName;
    for(auto i = 0;i<tasks.size();i++){
        str += QString("任务：%1     专注时长：%2     休息时长：%3\n").arg(tasks[i].taskName).arg(tasks[i].workTime).arg(tasks[i].breakTime);
    }
    qDebug().noquote()<<str;
    ui->history->setText(str);
}
void Body::on_personButton_clicked()
{
    Users usermsg;
    tomatoClock.searchUserMsg(username,usermsg);
    qDebug()<<usermsg.picSrc;
    ui->picture->setText(usermsg.picSrc);
    ui->username->setText(usermsg.userName);
    ui->email->setText(usermsg.Email);
    ui->stackedWidget->setCurrentIndex(3);
}



void Body::on_startEndButton_clicked()
{


    ui->startEndButton->setText(startEnd==0?"开始":"结束");
    startEnd = 1-startEnd;

}


void Body::on_changePassword_clicked()
{
    ChangePasswordDialog *w = new ChangePasswordDialog;
    w->show();
    this->close();
}


void Body::on_changemsg_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

}

void Body::on_editedButton_2_clicked()
{

    bool halt = false;

    if(ui->uBox_3->text() == "")
    {
        ui->uBox_3->setPlaceholderText("Username EMPTY!");
        halt = true;
    }



    if(ui->eBox_3->text() == "")
    {
        ui->eBox_3->setPlaceholderText("E-mail EMPTY!");
        halt = true;
    }

    // if(ui->fBox_2->text() == "")
    // {
    //     ui->fBox_2->setPlaceholderText("First Name EMPTY!");
    //     halt = true;
    // }

    // if(ui->mBox_2->text() == "")
    // {
    //     ui->mBox_2->setPlaceholderText("Middle Name (optional)");
    //     halt = false;
    // }

    // if(ui->lBox_2->text() == "")
    // {
    //     ui->lBox_2->setPlaceholderText("Last Name EMPTY!");
    //     halt = true;
    // }

    if(tomatoClock.userExist(ui->uBox_3->text())){
        ui->uBox_3->setText("");
        ui->uBox_3->setPlaceholderText("用户名重复！");
        halt = true;
    }

    // QSqlQuery cQuery;
    // cQuery.prepare("SELECT username FROM sys_users WHERE username = (:un)");
    // cQuery.bindValue(":un", ui->uBox->text());

    // if(cQuery.exec())
    // {
    //     if(cQuery.next() && ui->uBox_2->text() != cQuery.value(0).toString())
    //     {
    //         ui->uBox_2->setText("");
    //         ui->uBox_2->setPlaceholderText("用户名重复！");
    //         halt = true;
    //     }
    // }



    if(tomatoClock.emailExist(ui->eBox_3->text())){
        ui->eBox_3->setText("");
        ui->eBox_3->setPlaceholderText("此邮箱已有账号！");
        halt = true;
    }
    // QSqlQuery cQuery2;
    // cQuery2.prepare("SELECT email FROM sys_users WHERE email = (:em)");
    // cQuery2.bindValue(":em", ui->eBox_2->text());

    // if(cQuery2.exec())
    // {
    //     if(cQuery2.next() && ui->eBox_2->text() != cQuery2.value(0).toString())
    //     {
    //         ui->eBox_2->setText("");
    //         ui->eBox_2->setPlaceholderText("此邮箱已有账号！");
    //         halt = true;
    //     }
    // }


    if(halt)
    {
        ui->regLabel_3->setText("请修改您的错误");
    }
    else
    {
        // if (this->picName != "")
        // {
        //     QString to = this->picDir+"/"+ui->uBox_2->text();

        //     if (QFile::exists(to))
        //     {
        //         QFile::remove(to);
        //     }

        //     QFile::copy(this->picName, to);
        //     this->picName = "";
        // }

        ui->regLabel_3->setText("");
        // QSqlQuery iQuery;
        // iQuery.prepare("UPDATE sys_users SET username=(:un), passwd=(:pw), email=(:em) WHERE username=(:uno)");
        // iQuery.bindValue(":un", ui->uBox_2->text());
        // iQuery.bindValue(":pw", ui->pBox_2->text());
        // // iQuery.bindValue(":fn", ui->fBox_2->text());
        // // iQuery.bindValue(":mn", ui->mBox_2->text());
        // // iQuery.bindValue(":ln", ui->lBox_2->text());
        // iQuery.bindValue(":em", ui->eBox_2->text());
        // iQuery.bindValue(":uno", ui->uBox_2->text());

        // if(iQuery.exec())
        // {
        //     ui->winStack->setCurrentIndex(2);
        // }

        tomatoClock.updateUser(ui->uBox_3->text(),ui->eBox_3->text(),ui->rpLabel_3->text());
        ui->stackedWidget->setCurrentIndex(3);
    }
}



void Body::on_backButton_3_clicked()
{
        ui->stackedWidget->setCurrentIndex(3);
}


void Body::on_deleteuser_clicked()
{
    if(QMessageBox::Yes == QMessageBox(QMessageBox::Question,
                                        "Login System", "你确定要注销账号吗?",
                                        QMessageBox::Yes|QMessageBox::No).exec())
    {
        tomatoClock.deleteUser(username);
        LoginSystem *w = new LoginSystem;
        w->show();
        this->close();
    }
}


void Body::on_logout_clicked()
{
        //登出警告弹窗
        if(QMessageBox::Yes == QMessageBox(QMessageBox::Question,
                                            "Login System", "你确定要登出吗?",
                                            QMessageBox::Yes|QMessageBox::No).exec())
        {
            LoginSystem *w = new LoginSystem;
            w->show();
            this->close();
        }
}

