# pragma execution_character_set("utf-8")
#include "tomatoclock.h"
#include "ui_tomatoclock.h"
#include<vector>
TomatoClock::TomatoClock(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TomatoClock)
    , m_personaldoc(new personaldoc(nullptr))
{
    // tomatoclock.createDatabase();
    m_personaldoc->hide();
    ui->setupUi(this);
    Opacity=1;
    state=0;
    tomato_num=0;
    timeset=25;
    breaktimeset=5;
    totaltime=0;
    player = new QMediaPlayer;
    connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
    player->setSource(QUrl::fromEncoded("qrc:/new/prefix2/t/Chillhop.mp3"));
    // player->setVolume(30);
    progressbar=new QProgressBar(this);
    painter =new QPainter(this);
    // ui->pic1->setStyleSheet("background:transparent");
    // ui->pic2->setStyleSheet("background:transparent");
    // ui->pic3->setStyleSheet("background:transparent");
    // ui->pic4->setStyleSheet("background:transparent");
    // ui->pic5->setStyleSheet("background:transparent");
    ui->progressBar->setStyleSheet("QProgressBar{height:22px; text-align:center; font-size:14px; color:white; border-radius:11px; background:#1D5573;}"
                                   "QProgressBar::chunk{border-radius:11px;background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #99ffff,stop:1 #9900ff);}");
    current_color = "background-color: #ADD8E6;";
    this->setStyleSheet(current_color);
    this->model=new QStandardItemModel;
    model->setHorizontalHeaderItem(0,new QStandardItem("workname"));
    model->setHorizontalHeaderItem(1,new QStandardItem("worktime"));
    this->setWindowFlag(Qt::FramelessWindowHint);
    this->setMinimumSize(45,45);
    this->setStyleSheet(current_color);
    this->setWindowOpacity(Opacity);  //透明度
    // ::SetWindowPos(HWND(this->winId()),HWND_TOPMOST,0,0,0,0,SWP_NOMOVE|SWP_NOSIZE|SWP_SHOWWINDOW);



    // int wide=width();
    // QToolButton *minButton=new QToolButton(this);  //设计按钮
    // QToolButton *closeButton=new QToolButton(this);
    // QPixmap minpix=style()->standardPixmap(QStyle::SP_TitleBarMinButton);
    // QPixmap closepix=style()->standardPixmap(QStyle::SP_TitleBarCloseButton);
    // minButton->setIcon(minpix);
    // closeButton->setIcon(closepix);
    // minButton->setGeometry(wide-65,5,20,20);
    // closeButton->setGeometry(wide-25,5,20,20);
    // minButton->setToolTip("最小化");
    // closeButton->setToolTip("关闭");
    // minButton->setStyleSheet("background-color:transparent;");
    // closeButton->setStyleSheet("background-color:transparent");
    // connect(closeButton,SIGNAL(clicked()),this,SLOT(windowclosed()));
    // connect(minButton,SIGNAL(clicked()),this,SLOT(windowmin()));
    // initSysTrayIcon();


    // timer=new QTimer;//计时器初始化
    // ui->Timer->setDigitCount(5);
    // initTime();
    // timer->setInterval(1000);
    // connect(timer,SIGNAL(timeout()),this,SLOT(updateTime()));

    // tasks.append({"默认任务1", 25, 5});
    // tasks.append({"默认任务2", 45, 10});
    // tasks.append({"默认任务3", 65, 15});
    // vector<Tasks> t;
    // tomatoclock.searchTask(t);
    // for(int i = 0;i<t.size();i++){
    //     tasks.append({t[i].taskName,t[i].workTime,t[i].breakTime});
    // }


    // 更新UI和currentTaskIndex（如果有必要）
    updateTaskTable();
    if (!tasks.isEmpty()) {
        currentTaskIndex = 0; // 默认选择第一个任务
        ui->tableWidget->selectRow(currentTaskIndex);
    }
}

TomatoClock::~TomatoClock()
{
    delete ui;
}


void TomatoClock::initTime()
{
    time.setHMS(0,0,0);
    ui->Timer->display(time.toString("mm:ss"));
}


void TomatoClock::windowclosed()
{
    this->close();
}

void TomatoClock::windowmin()
{
    this->showMinimized();
}

void TomatoClock::checktime()
{
    if(totaltime>=150)
    {
        // QPixmap*pic5=new QPixmap(":/new/prefix1/t/pic5.png");
        // pic5->scaled(ui->pic5->size(),Qt::KeepAspectRatio);
        // ui->pic5->setScaledContents(true);
        // ui->pic5->setPixmap(*pic5);
        all_success=new QMediaPlayer;
        connect(success, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
        all_success->setSource(QUrl::fromEncoded("qrc:/new/prefix3/t/all_success.mp3"));
        // all_success->setVolume(30);
        all_success->play();
    }
    if(totaltime>=120)
    {
        // QPixmap*pic4=new QPixmap(":/new/prefix1/t/pic4.png");
        // pic4->scaled(ui->pic4->size(),Qt::KeepAspectRatio);
        // ui->pic4->setScaledContents(true);
        // ui->pic4->setPixmap(*pic4);
        success->play();
    }
    if(totaltime>=90)
    {
        // QPixmap*pic3=new QPixmap(":/new/prefix1/t/pic3.png");
        // pic3->scaled(ui->pic3->size(),Qt::KeepAspectRatio);
        // ui->pic3->setScaledContents(true);
        // ui->pic3->setPixmap(*pic3);
        success->play();
    }
    if(totaltime>=60)
    {
        // QPixmap*pic2=new QPixmap(":/new/prefix1/t/pic2.png");
        // pic2->scaled(ui->pic2->size(),Qt::KeepAspectRatio);
        // ui->pic2->setScaledContents(true);
        // ui->pic2->setPixmap(*pic2);
        success->play();
    }
    if(totaltime>=30)
    {
        // QPixmap*pic1=new QPixmap(":/new/prefix1/t/pic1.png");
        // pic1->scaled(ui->pic1->size(),Qt::KeepAspectRatio);
        // ui->pic1->setScaledContents(true);
        // ui->pic1->setPixmap(*pic1);
        mediasetup();
        success->play();
    }
}

void TomatoClock::mediasetup()
{
    success=new QMediaPlayer;
    connect(success, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
    success->setSource(QUrl::fromEncoded("qrc:/new/prefix3/t/mission_success.mp3"));
    // success->setVolume(30);
}

//创建系统托盘
void TomatoClock::initSysTrayIcon()
{
    //隐藏程序主窗口
    this->hide();

    //新建QSystemTrayIcon对象
    m_sysTrayIcon = new QSystemTrayIcon(this);

    //设置托盘图标
    QIcon icon = QIcon(":/Imgs/tomato.svg");//添加的图标
    m_sysTrayIcon->setIcon(icon);

    //当鼠标移动到托盘上的图标时，会显示此处设置的内容
    m_sysTrayIcon->setToolTip("单击关闭窗口");
    connect(m_sysTrayIcon,SIGNAL(activated(QSystemTrayIcon::ActivationReason)),this,SLOT(on_activatedSysTrayIcon(QSystemTrayIcon::ActivationReason)));


    //建立托盘操作的菜单
    createActions();
    createMenu();
    //在系统托盘显示此对象
    m_sysTrayIcon->show();
}

//创建动作
void TomatoClock::createActions()
{
    m_pauseaction = new QAction("打开主面板", this);
    connect(m_pauseaction,SIGNAL(triggered()),this,SLOT(on_pauseaction()));
    m_showMainAction = new QAction("个人中心", this);
    connect(m_showMainAction,SIGNAL(triggered()),this,SLOT(on_showMainAction()));
    m_exitAppAction = new QAction("退出", this);
    connect(m_exitAppAction,SIGNAL(triggered()),this,SLOT(on_exitAppAction()));

}//更改内容

//创建托盘菜单
void TomatoClock::createMenu()
{
    m_menu = new QMenu(this);
    //新增菜单项---显示主界面
    m_menu->addAction(m_showMainAction);
    //增加分隔符
    m_menu->addSeparator();
    //新增菜单项---退出程序
    m_menu->addAction(m_exitAppAction);
    //把QMenu赋给QSystemTrayIcon对象
    m_sysTrayIcon->setContextMenu(m_menu);
    m_menu->addSeparator();
    m_menu->addAction(m_pauseaction);
}

//当在系统托盘点击菜单内的显示个人中心界面操作
void TomatoClock::on_showMainAction()
{
    m_personaldoc->show(); // 显示个人中心页面

}

//当在系统托盘点击菜单内的退出程序操作
void TomatoClock::on_exitAppAction()
{
    qApp->exit();
}

//关闭事件
void TomatoClock::closeEvent(QCloseEvent *event)
{
    //忽略窗口关闭事件
    QApplication::setQuitOnLastWindowClosed( true );
    this->hide();
    event->ignore();
}

void TomatoClock::on_activatedSysTrayIcon(QSystemTrayIcon::ActivationReason reason)
{
    switch(reason){
    case QSystemTrayIcon::Trigger:
        //单击托盘图标
        this->hide();
        break;
    case QSystemTrayIcon::DoubleClick:
        //双击托盘图标
        //双击后显示主程序窗口
        this->showNormal();
        break;
    default:
        break;
    }
}

void TomatoClock::on_soundalue_slider_valueChanged(int value)
{
    // player->setVoume(value);
}

void TomatoClock::on_startButton_clicked()
{
    if (currentTaskIndex == -1 || tasks.size() <= currentTaskIndex) {
        // 没有选中任务，显示错误消息
        QMessageBox::warning(this, "错误", "请先选择一个任务！");
        return;
    }
    if (currentTaskIndex != -1 && tasks.size() > currentTaskIndex) {
        // 更新显示控件
        updateTaskDisplay();

        if (!isTimerRunning) {
            isTimerRunning = true;
            timer->start(1000); // 开始计时

            // 禁用相关UI控件
            ui->startButton->setEnabled(false);
            ui->pauseButton->setEnabled(true);
            ui->endButton->setEnabled(true);
            ui->taskNameLineEdit->setEnabled(false);
            ui->taskDurationLineEdit->setEnabled(false);
            ui->taskBreakTimeLineEdit->setEnabled(false);
            // 再次更新显示控件，确保UI反映最新状态
            updateTaskDisplay();
        }
    }
}

void TomatoClock::on_pauseButton_clicked() {
    if (isTimerRunning) {
        isTimerRunning = false;
        timer->stop(); // 暂停计时
        // 更新UI状态
        ui->startButton->setEnabled(true);
        ui->pauseButton->setEnabled(false);
    }
}

void TomatoClock::on_endButton_clicked()
{
    // 检查计时器是否已完成
    if (!isTimerFinished()) {
        // 弹出确认对话框
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, tr("确认结束"),
                                      tr("当前任务/休息尚未完成，您确定要结束吗？"),
                                      QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::No) {
            // 用户选择了不结束，退出此函数
            return;
        }
    }

    // 停止计时器
    timer->stop();
    isTimerRunning = false;

    // 清空显示控件
    clearDisplayWidgets();

    // 重置UI状态，准备添加新任务
    ui->startButton->setEnabled(true);
    ui->pauseButton->setEnabled(false);
    ui->endButton->setEnabled(false);
    if (!tasks.empty()) {
        currentTaskIndex = 0;
        updateTaskDisplay();
    } else {
        currentTaskIndex = -1;
    }
}

void TomatoClock::updateTaskTable() {
    // 获取当前tableWidget的行数
    int currentRows = ui->tableWidget->rowCount();

    // 如果当前行数少于tasks中的任务数，我们需要添加新行
    if (currentRows < tasks.size()) {
        // 从当前行数开始添加新任务到tableWidget
        for (int i = currentRows; i < tasks.size(); ++i) {
            const Task &task = tasks[i];
            ui->tableWidget->insertRow(i); // 注意：这里直接使用i作为行号，因为是从currentRows开始的
            ui->tableWidget->setItem(i, 0, new QTableWidgetItem(task.name));
            ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString::number(task.duration)));
            ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(task.breakTime)));
        }
    }
    // 如果行数过多（理论上不应该发生，除非外部代码修改了tableWidget），这里不处理

    // 更新currentTaskIndex和UI显示（如果需要）
    // 注意：这个逻辑通常放在on_tableWidget_itemSelectionChanged()槽函数中处理
    // 但如果这里需要确保UI与tasks同步，可以调用updateTaskDisplay()（如果currentTaskIndex没有改变的话，它可能不会做任何事）
    // 这里不直接调用，因为选择变化应该由用户交互触发
}

void TomatoClock::updateTime() {
    if (isTimerRunning && currentTaskIndex != -1 && tasks.size() > currentTaskIndex) {
        time = time.addSecs(1);
        ui->Timer->display(time.toString("mm:ss"));

        if (time.minute() >= tasks[currentTaskIndex].duration) {
            isTimerRunning = false;
            timer->stop();
            // 弹出提醒休息（如果需要）
            // ...
            // 清空任务显示控件（计时结束时）
            ui->taskNameLineEdit->clear();
            ui->taskDurationLineEdit->clear();
            ui->taskBreakTimeLineEdit->clear();
            // 增加番茄数
            tomatoCount++;
            // 重置时间和其他相关状态
            initTime();
            // 启用/禁用UI控件（根据需要）
            ui->startButton->setEnabled(true);
            ui->pauseButton->setEnabled(false);
            ui->endButton->setEnabled(false);
        }
    }
}
// QProgressBar
void TomatoClock::on_addTaskBtn_clicked()
{
    QString name = QInputDialog::getText(this, tr("添加任务"), tr("任务名称:"));
    if (name.isEmpty()) return;

    bool ok;
    int duration = QInputDialog::getInt(this, tr("添加任务"), tr("任务时长（分钟）:"), 25, 1, 1440, 1, &ok);
    if (!ok) return;

    int breakTime = QInputDialog::getInt(this, tr("添加任务"), tr("休息时长（分钟）:"), 5, 1, 1440, 1, &ok);
    if (!ok) return;

    Task newTask = {name, duration, breakTime};
    tasks.append(newTask);
    updateTaskTable(); // 更新UI中的任务列表
    currentTaskIndex = tasks.size() - 1; // 设置currentTaskIndex为新添加的任务
    updateTaskDisplay(); // 更新显示控件
}

void TomatoClock::on_editTaskBtn_clicked()
{
    if (currentTaskIndex != -1 && !isTimerRunning) {
        Task &task = tasks[currentTaskIndex];

        QString newName = QInputDialog::getText(this, tr("编辑任务"), tr("任务名称:"), QLineEdit::Normal, task.name);
        if(newName.isEmpty()) return;
        bool ok;
        int newDuration = QInputDialog::getInt(this, tr("编辑任务"), tr("任务时长（分钟）:"), task.duration, 1, 1440, 1, &ok);
        if(!ok)return;
        int newBreakTime = QInputDialog::getInt(this, tr("编辑任务"), tr("休息时长（分钟）:"), task.breakTime, 1, 1440, 1, &ok);
        if(!ok)return;
        if (!newName.isEmpty() && ok) {
            task.name = newName;
            task.duration = newDuration;
            task.breakTime = newBreakTime;
            updateTaskTable(); // 更新UI中的任务列表
        }
    }
}

void TomatoClock::on_delTaskBtn_clicked()
{
    // 获取当前选中的行号
    int row = ui->tableWidget->currentRow();

    if (row != -1 && row < tasks.size()) {
        // 删除对应任务
        tasks.removeAt(row);

        // 更新currentTaskIndex（如果需要）
        if (currentTaskIndex >= tasks.size() || (currentTaskIndex >= 0 && tasks[currentTaskIndex].name.isEmpty())) {
            // currentTaskIndex可能越界或指向已删除的任务，需要重置
            currentTaskIndex = tasks.isEmpty() ? -1 : qMin(currentTaskIndex, tasks.size() - 1);
        }

        // 从tableWidget中删除对应的行
        ui->tableWidget->removeRow(row);

        // 更新显示控件（如果需要，但通常on_tableWidget_itemSelectionChanged()会处理这个）
        // updateTaskDisplay(); // 这里可能不需要，除非您想立即反映currentTaskIndex的变化
    }
}

void TomatoClock::updateTaskDisplay() {
    if (currentTaskIndex != -1 && currentTaskIndex < tasks.size()) {
        const Task &task = tasks[currentTaskIndex];
        ui->taskNameLineEdit->setText(task.name);
        ui->taskDurationLineEdit->setText(QString::number(task.duration));
        ui->taskBreakTimeLineEdit->setText(QString::number(task.breakTime));
    } else {
        // 如果没有选中任务，则清空显示控件
        ui->taskNameLineEdit->clear();
        ui->taskDurationLineEdit->clear();
        ui->taskBreakTimeLineEdit->clear();
    }
}

bool TomatoClock::isTimerFinished()
{
    if (currentTaskIndex != -1 && tasks.size() > currentTaskIndex) {
        const Task &currentTask = tasks[currentTaskIndex];
        // 将当前时间转换为分钟
        int currentTimeInMinutes = time.minute() + time.hour() * 60;

        // 判断当前计时器是否完成
        if (currentTimeInMinutes >= currentTask.duration) {
            return true;
        }
    }
    return false;
}

void TomatoClock::clearDisplayWidgets()
{
    // 清空任务信息显示
    ui->taskNameLineEdit->clear();
    ui->taskDurationLineEdit->clear();
    ui->taskBreakTimeLineEdit->clear();

    // 重置计时器显示
    ui->Timer->display("00:00");

    // 其他可能需要重置的状态
    time = QTime(0, 0); // 重置当前计时器时间
    isTimerRunning = false; // 确保计时器不处于运行状态
    currentTaskIndex = -1; // 重置当前任务索引
}

// 槽函数来处理表格的选择变化
void TomatoClock::on_tableWidget_itemSelectionChanged()
{
    // 获取当前选中的行（只处理第一行，因为是单选）
    QModelIndexList selectedIndexes = ui->tableWidget->selectionModel()->selectedRows();
    if (!selectedIndexes.isEmpty()) {
        int row = selectedIndexes.first().row();
        if (row < tasks.size()) {
            currentTaskIndex = row;
        }
    } else {
        // 如果没有选中任何行，则重置currentTaskIndex（可选）
        currentTaskIndex = -1;
    }
    updateTaskDisplay(); // 更新显示控件
}
