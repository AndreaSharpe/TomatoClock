#ifndef BODY_H
#define BODY_H

#include <QWidget>
#include <QMainWindow>
#include <QCoreApplication>
#include <QSqlTableModel>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlDriver>
#include <QSqlRecord>
#include <QSqlError>
#include <task.h>

namespace Ui {
class Body;
}

class Body : public QWidget
{
    Q_OBJECT

public:
    explicit Body(QWidget *parent = nullptr);
    ~Body();
    QString username;

private slots:
    // void on_label_linkActivated(const QString &link);

    void on_homeButton_clicked();

    void on_labelButton_clicked();

    void on_clockButton_clicked();

    void on_personButton_clicked();

    void on_startEndButton_clicked();

    void on_changePassword_clicked();

    void on_changemsg_clicked();

private:
    Ui::Body *ui;
    int startEnd = 0;
    DataBase tasksdb;
};

#endif // BODY_H
