#ifndef DATABASE_H
#define DATABASE_H


#include <QMainWindow>
#include <QCoreApplication>
#include <QSqlTableModel>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlDriver>
#include <QSqlRecord>
#include <QSqlError>
#include<vector>
using namespace std;
#include<iostream>

struct Tasks
{
    QString taskName;
    int workTime;
    int breakTime;
    Tasks() {}
};

struct Users{
    QString userName;
    QString Email;
    QString picSrc;
};



class DataBase{
public:
    QString username;
    void createDatabase();
    void createDatabase(QString str);
    void createTaskTable();
    void createUserTable();
    bool insertUser(QString name,QString password,QString email,QString imgsrc);
    void deleteUser(QString name);
    bool searchUser(QString name,QString password);
    bool userExist(QString name);
    bool emailExist(QString email);
    void emailSearch(QString email,Users & user);
    void updateUser(QString name,QString email,QString imgsrc);
    void updatePassword(QString name,QString password);
    void insertTask(QString name,int wTime,int bTime);
    void deleteTask(QString name);
    void searchTask(vector<Tasks> &task);
    void taskTableClear();
    void updataTask(QString name,int wTime,int bTime);
    void searchUserMsg(QString name,Users &usermsg);
private:
    QSqlDatabase tasksdb;

};


#endif // DATABASE_H
