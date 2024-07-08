#ifndef TASK_H
#define TASK_H


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

class DataBase{
public:
    void createDatabase(QString str);
    void createTable();
    void insertTask(QString name,int wTime,int bTime);
    void deleteTask(QString name);
    void searchTask(vector<Tasks> &task);
    void tableClear();
    void updataTask(QString name,int wTime,int bTime);
private:
    QSqlDatabase tasksdb;
    QString username;
};


#endif // TASK_H
