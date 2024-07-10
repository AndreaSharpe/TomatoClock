#ifndef BODY_H
#define BODY_H
#include<windows.h>
#include<windowsx.h>
// #include<vector>
#include<QDebug>
#include <QPushButton>
#include <QStackedWidget>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QVBoxLayout>
#include <QFileDialog>
#include<QPainter>
#include<QCalendarWidget>
#include <QtCharts/QChartView>
#include<QDateEdit>
#include<QMessageBox>
#include<QBitmap>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QChart>


#include<QMouseEvent>
#include<QTimer>
#include<QTime>
#include<QToolButton>
#include<QPixmap>
#include<QStyle>
#include<QStandardItemModel>
#include<QProgressBar>
#include<QMediaPlayer>
#include <QSystemTrayIcon>
#include <QMenu>
#include <QAction>
#include <QCloseEvent>
#include <QList>
#include<QHeaderView>
#include <QInputDialog>
#include <QWidget>
#include <QMainWindow>
#include <QCoreApplication>
#include <QSqlTableModel>
#include <QSqlDriver>
#include <QSqlRecord>
#include <QSqlError>
#include <QMessageBox>
#include "database.h"
// #include "personaldoc.h"
namespace Ui {
class Body;
}
struct task
{
    QString name;
    int duration;  // 任务时长（分钟）
    int breakTime; // 休息时长（分钟）
    // QString str;
};

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

    // void on_startEndButton_clicked();

    void on_changePassword_clicked();

    void on_changemsg_clicked();

    void on_editedButton_2_clicked();

    void on_backButton_3_clicked();

    void on_deleteuser_clicked();

    void on_logout_clicked();

    // void initSysTrayIcon();

    void createActions();

    void createMenu();

    void on_showMainAction();

    void on_exitAppAction();

    void closeEvent(QCloseEvent *event);

    void on_activatedSysTrayIcon(QSystemTrayIcon::ActivationReason reason);

    //主页面函数
    void initTime();
    void updateTime(); //更新时间
    // void windowclosed();
    // void windowmin();
    void updateTaskTable();
    // void checktime(); //成就检查
    // void mediasetup();
    // void on_showMainAction();
    // void on_exitAppAction();
    // void on_activatedSysTrayIcon(QSystemTrayIcon::ActivationReason reason);
    // void on_soundalue_slider_valueChanged(int value);

    void on_startButton_3_clicked();

    void on_pauseButton_3_clicked();

    void on_endButton_3_clicked();

    void on_addTaskBtn_3_clicked();

    void on_editTaskBtn_3_clicked();

    void on_delTaskBtn_3_clicked();

    void updateTaskDisplay();

    bool isTimerFinished();

    void clearDisplayWidgets();

    void on_tableWidget_itemSelectionChanged();

    void on_tableWidget_cellClicked(int row, int column);

private:
    Ui::Body *ui;
    int startEnd = 0;
    DataBase tomatoClock;
    QSystemTrayIcon *m_sysTrayIcon; //系统托盘
    void initSysTrayIcon();
    QMenu *m_menu;             //菜单
    QAction *m_showMainAction; //动作
    QAction *m_exitAppAction;  //动作
    QAction *m_pauseaction;
    // personaldoc *m_personaldoc;
    QTimer *timer;
    QVector<task> tasks;
    QTime time;
    int currentTaskIndex = -1;   // 当前选中任务的索引
    bool isTimerRunning = false; // 计时器是否正在运行
    int tomatoCount = 0;         // 总番茄数
    QStandardItemModel *model;
    int timeset;      //单次时间
    int breaktimeset; //休息时间
    QProgressBar *progressbar;
    QPainter *painter;
    QMediaPlayer *player;
    QMediaPlayer *success;
    QMediaPlayer *all_success;
    task oneTask;
    QString taskName;

};

#endif // BODY_H
