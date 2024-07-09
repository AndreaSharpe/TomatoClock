#include "database.h"
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

void DataBase::createDatabase(){
    tasksdb  = QSqlDatabase::addDatabase("QSQLITE");
    tasksdb.setDatabaseName("tasks.db");
    tasksdb.open();
    if(!tasksdb.open()){
        qDebug()<<"database open error!";
    }
    else{
        qDebug()<<"database open success!";
    }
    // qDebug()<<"当前用户："<<username;

}

void DataBase::createTaskTable(){
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


void DataBase::taskTableClear(){
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
        qDebug()<<"update task msg is success!";
    else
        qDebug()<<"update task msg is error!";
}




void DataBase::createUserTable(){
    QSqlQuery cquery;
    QString create = "create table if not exists users(name QString,password QString,email QString,imgsrc QString)";
    cquery.prepare(create);
    if(cquery.exec()){
        qDebug()<<"create userTable success!";
    }
    else{
        qDebug()<<"create userTable error!";
    }

}



bool DataBase::insertUser(QString name,QString password,QString email,QString imgsrc){
    QSqlQuery iquery;
    QString insert = "insert into users(name,password,email,imgsrc) values(:1,:2,:3,:4)";
    iquery.prepare(insert);
    iquery.bindValue(":1",name);
    iquery.bindValue(":2",password);
    iquery.bindValue(":3",email);
    iquery.bindValue(":4",imgsrc);
    if(iquery.exec()){

        qDebug()<<"insert usertable success!";
        return true;
    }
    else{

        qDebug()<<"insert taskstable error!";
        return false;
    }

}

void DataBase::searchUserMsg(QString name,Users &usermsg){
    QSqlQuery suquery;
    QString searchmgs= "select * from users where name=:1";
    suquery.prepare(searchmgs);
    suquery.bindValue(":1",name);
    suquery.exec();
    while(suquery.next()){
        usermsg.userName = suquery.value(0).toString();
        usermsg.Email = suquery.value(2).toString();
        usermsg.picSrc = suquery.value(3).toString();
    }
}


void DataBase::deleteUser(QString name){
    QSqlQuery dquery;
    QString deleteIt = "delete from users where name=:1";
    dquery.prepare(deleteIt);
    dquery.bindValue(":1",name);
    qDebug()<<name;
    if(dquery.exec()){
        qDebug()<<"delete usertable success!";
    }
    else{
        qDebug()<<"delete usertable error!";
    }
    deleteIt = "delete from tasks where userName=:1";
    dquery.prepare(deleteIt);
    dquery.bindValue(":1",name);

    if(dquery.exec()){
        qDebug()<<"delete usertable success!";
    }
    else{
        qDebug()<<"delete usertable error!";
    }

}
bool DataBase::searchUser(QString name,QString password){
    QSqlQuery squery;
    QString search = "select * from users where name=:1 AND password=:2";
    squery.prepare(search);
    squery.bindValue(":1",name);
    squery.bindValue(":2",password);
    squery.exec();
    int i = 0;
    while(squery.next()){
        i++;
    }
    if(i==1){
        qDebug()<<"login success!";
        return true;

    }
    else{
        qDebug()<<"login failed!";
        return false;
    }
}

bool DataBase::userExist(QString name){
    QSqlQuery squery;
    QString search = "select * from users where name=:1";
    squery.prepare(search);
    squery.bindValue(":1",name);
    int i = 0;
    squery.exec();
    while(squery.next()){
        i++;
    }

    if(i==1){
        qDebug()<<"user exist!";
        return true;

    }
    else{
        qDebug()<<"user empty!";
        return false;
    }


}

bool DataBase::emailExist(QString email){
    QSqlQuery squery;
    QString search = "select * from users where email=:1";
    squery.prepare(search);
    squery.bindValue(":1",email);
    squery.exec();
    int i = 0;
    while(squery.next()){
        i++;
    }

    if(i==1){
        qDebug()<<"email exist!";
        return true;

    }
    else{
        qDebug()<<"email empty!";
        return false;
    }

}


void DataBase::emailSearch(QString email,Users & user){
    QSqlQuery esquery;
    esquery.prepare(QString("select * from users where email=:1"));
    esquery.bindValue(":1",email);
    if(esquery.exec()){
        while(esquery.next()){
        qDebug()<<"success";
        user.userName = esquery.value(0).toString();
        // qDebug()<<user.userName;
        }
    }
    else{
        qDebug()<<"search email error!";
    }
}


void DataBase::updateUser(QString name,QString email,QString imgsrc){
    QSqlQuery uquery;
    uquery.prepare(QString("update users set email=:1,imgsrc=:2 where name=:3"));
    uquery.bindValue(":3",name);
    uquery.bindValue(":1",email);
    uquery.bindValue(":2",imgsrc);
    if(uquery.exec())
        qDebug()<<"update user msg is success!";
    else
        qDebug()<<"update user msg is error!";
}
void DataBase::updatePassword(QString name,QString password){
    QSqlQuery uquery;
    uquery.prepare(QString("update users set password=:1 where name=:2"));
    uquery.bindValue(":2",name);
    uquery.bindValue(":1",password);
    if(uquery.exec())
        qDebug()<<"update password msg is success!";
    else
        qDebug()<<"update password msg is error!";
}
