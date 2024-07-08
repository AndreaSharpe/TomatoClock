#include "task.h"
// #include "body.h"

void DataBase::createDatabase(QString str){
    tasksdb  = QSqlDatabase::addDatabase("QSQLITE");
    tasksdb.setDatabaseName("tasks.db");
    tasksdb.open();
    if(!tasksdb.open()){
        qDebug()<<"database open error!";
    }
    else{
        qDebug()<<"database open success!";
    }
    username = str;
    qDebug()<<"当前用户："<<username;

}

void DataBase::createTable(){
    QSqlQuery cquery;
    QString create = "create table if not exists tasks(userName QString,taskName QString,workTime int,breakTime int)";
    cquery.prepare(create);
    if(cquery.exec()){
        qDebug()<<"create tasksTable success!";
    }
    else{
        qDebug()<<"create tasksTable error!";
    }

}

void DataBase::insertTask(QString name,int wTime,int bTime){
    QSqlQuery iquery;
    QString insert = "insert into tasks(userName,taskName,workTime,breakTime) values(:1,:2,:3,:4)";
    iquery.prepare(insert);
    iquery.bindValue(":1",username);
    iquery.bindValue(":2",name);
    iquery.bindValue(":3",wTime);
    iquery.bindValue(":4",bTime);
    if(iquery.exec()){
        qDebug()<<"insert taskstable success!";
    }
    else{
        qDebug()<<"insert taskstable error!";
    }


}


void DataBase::deleteTask(QString name){
    QSqlQuery dquery;
    QString deleteIt = "delete from tasks where taskName=:1 AND userName=:2";
    dquery.prepare(deleteIt);
    dquery.bindValue(":1",name);
    dquery.bindValue(":2",username);

    if(dquery.exec()){
        qDebug()<<"delete taskstable success!";
    }
    else{
        qDebug()<<"delete taskstable error!";
    }
}



void DataBase::searchTask(vector<Tasks> &task){
    QSqlQuery squery;
    QString search = "select * from tasks where userName=:1";
    squery.prepare(search);
    squery.bindValue(":1",username);


    if(squery.exec()){
        qDebug()<<"search taskstable success!";
        while(squery.next()){
            QString name = squery.value(1).toString();
            Tasks tmp;
            tmp.taskName = name;
            int wtime = squery.value(2).toInt();
            tmp.workTime = wtime;
            int btime = squery.value(3).toInt();
            tmp.breakTime = btime;
            task.push_back(tmp);
            // qDebug()<<QString("任务名：%1  专注时长：%2   休息时长：%3").arg(name).arg(wtime).arg(btime);
        }

    }
    else{
        qDebug()<<"search taskstable error!";
    }
}


void DataBase::tableClear(){
    QSqlQuery clearquery;
    QString search = "delete from tasks where username=:1";

    clearquery.prepare(search);
    clearquery.bindValue(":1",username);

    if(clearquery.exec()){
        qDebug()<<"clear taskstable success!";
    }
    else{
        qDebug()<<"clear taskstable error!";
    }
}



void DataBase::updataTask(QString name,int wTime,int bTime){
    QSqlQuery uquery;
    uquery.prepare(QString("update tasks set workTime=:1,breakTime=:2 where taskName=:3 AND userName=:4"));
    uquery.bindValue(":4",username);
    uquery.bindValue(":3",name);
    uquery.bindValue(":1",wTime);
    uquery.bindValue(":2",bTime);
    if(uquery.exec())
        qDebug()<<"update  student msg is success!";
    else
        qDebug()<<"update  student msg is error!";
}
