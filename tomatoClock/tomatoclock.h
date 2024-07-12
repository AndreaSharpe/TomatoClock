#ifndef TOMATOCLOCK_H
#define TOMATOCLOCK_H

#include "personaldoc.h"
// #include "database.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class TomatoClock;
}

class personaldoc; // 前向声明
QT_END_NAMESPACE

struct Task
{
    QString name;
    int duration;  // 任务时长（分钟）
    int breakTime; // 休息时长（分钟）
};

class TomatoClock : public QWidget
{
    Q_OBJECT

public:
    TomatoClock(QWidget *parent = nullptr);
    ~TomatoClock();
private slots:
    void initTime();   //归零
    void updateTime(); //更新时间
    void windowclosed();
    void windowmin();
    void updateTaskTable();
    void checktime(); //成就检查
    void mediasetup();
    void on_showMainAction();
    void on_exitAppAction();
    void on_activatedSysTrayIcon(QSystemTrayIcon::ActivationReason reason);
    void on_soundalue_slider_valueChanged(int value);

    void on_startButton_clicked();

    void on_pauseButton_clicked();

    void on_endButton_clicked();

    void on_addTaskBtn_clicked();

    void on_editTaskBtn_clicked();

    void on_delTaskBtn_clicked();

    void updateTaskDisplay();

    bool isTimerFinished();

    void clearDisplayWidgets();

    void on_tableWidget_itemSelectionChanged();


private:
    float Opacity;         //透明度
    int state;             //状态
    int totaltime;         //总时长
    int tomato_num;        //循环次数
    QString current_color; //颜色
    QPoint clickPos;       //点击时的位置
    Ui::TomatoClock *ui;

    QVector<Task> tasks;         // 存储任务信息
    int currentTaskIndex = -1;   // 当前选中任务的索引
    bool isTimerRunning = false; // 计时器是否正在运行
    int tomatoCount = 0;         // 总番茄数
    QTimer *timer;               //计时器

    QTime time;
    QStandardItemModel *model;
    int timeset;      //单次时间
    int breaktimeset; //休息时间
    QProgressBar *progressbar;
    QPainter *painter;
    QMediaPlayer *player;
    QMediaPlayer *success;
    QMediaPlayer *all_success;
    QSystemTrayIcon *m_sysTrayIcon; //系统托盘
    void initSysTrayIcon();
    QMenu *m_menu;             //菜单
    QAction *m_showMainAction; //动作
    QAction *m_exitAppAction;  //动作
    QAction *m_pauseaction;
    void createActions();
    void createMenu();
    personaldoc *m_personaldoc;

    // DataBase tomatoclock;
    QString userame;
protected:
    void closeEvent(QCloseEvent *event) override;
};
#endif // TOMATOCLOCK_H
