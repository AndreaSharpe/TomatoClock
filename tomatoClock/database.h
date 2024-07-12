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
// #include<iostream>


struct Time{
    int hour = 0;
    int minute = 0;
};

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

struct HistoryLines{
    QString taskName;
    int lastTime;
    QString date;
};


class DataBase{
public:
    QString username;
    // DataBase();
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
    void updataTask(QString name,QString newName,int wTime,int bTime);
    void searchUserMsg(QString name,Users &usermsg);


    //历史记录模块
    void createHistoryTable();
    void insertHistoryTable(QString userName,QString taskName,int lastTime,QString date,int completeFlag);
    int searchTomatoNum(QString startDate,QString endDate);
    void searchTime(QString startDate,QString endDate,Time& TotalTime,vector<HistoryLines> &lines);
private:
    QSqlDatabase tasksdb;

};


#endif // DATABASE_H
