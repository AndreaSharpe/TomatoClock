#include "body.h"
#include "ui_body.h"
#include "changepassworddialog.h"
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

    QFile file("../../task.txt");

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

    tasksdb.createDatabase(username);


    tasksdb.createTable();
    tasksdb.tableClear();//测试用
    tasksdb.insertTask("read",40,10);
    tasksdb.insertTask("sport",40,14);
    tasksdb.insertTask("study",34,10);
    tasksdb.deleteTask("read");
    vector<Tasks> task;
    tasksdb.searchTask(task);
    for(auto i = 0;i<task.size();i++){
        qDebug()<<QString("任务名：%1  专注时长：%2   休息时长：%3").arg(task[i].taskName).arg(task[i].workTime).arg(task[i].breakTime);
    }

    tasksdb.updataTask("study",11,1);



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
    tasksdb.searchTask(tasks);
    // qDebug()<<task[0].taskName;
    for(auto i = 0;i<tasks.size();i++){
        str += QString("任务：%1     专注时长：%2     休息时长：%3\n").arg(tasks[i].taskName).arg(tasks[i].workTime).arg(tasks[i].breakTime);
    }
    qDebug().noquote()<<str;
    ui->history->setText(str);
}


void Body::on_personButton_clicked()
{
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
    ui->stackedWidget->setCurrentIndex(3);

}
