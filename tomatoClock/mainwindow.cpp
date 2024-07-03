#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    db  = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("tomato.db");
    db.open();
    if (!db.open())
    {
        qDebug() << "Error: connection with database fail";
    }
    else
    {
        qDebug() << "Database: connection ok";
    }
    QSqlQuery query;
    //userId 邮箱，userPassword 账号密码，sex 性别，username 用户名，photo 头像地址；
    QString createUser = "create table user(userId int,userPassword text,sex text,username text,photo text)";
    query.prepare(createUser);
    if(query.exec()){
        qDebug()<<"createUser table success!";
    }
    else{
        qDebug()<<"createUser table error!";
    }

    QString insertUser = "insert into user(userId,userPassword,sex,username,photo) values(1234567890,'123qwe','女','Susan','*')";
    query.prepare(insertUser);
    if(query.exec()){
        qDebug()<<"insertUser table success!";
    }
    else{
        qDebug()<<"insertUser table error!";
    }

    QString consolTable = "select * from user";
    query.prepare(consolTable);
    if(query.exec()){
        while(query.next()){
            int id = query.value(0).toInt();
            QString password = query.value(1).toString();
            QString sex = query.value(2).toString();
            QString name = query.value(3).toString();
            QString src = query.value(4).toString();
            qDebug()<<QString("邮箱：%1  密码：%2  性别：%3  用户名：%4  头像地址：%5").arg(id).arg(password).arg(sex).arg(name).arg(src);
        }
    }
    else{
        qDebug()<<"seletetUser table error!";
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}
