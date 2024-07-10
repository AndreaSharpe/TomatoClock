#include "body.h"
#include "ui_body.h"
#include "loginSystem.h"
#include "changepassworddialog.h"
// #include "personaldoc.cpp"
// #include "database.h"
// #include "task.h"
// #include <fstream>
// #include<string>
// #include<iostream>
#include<QFile>

// fstream readfile;

// string name;

Body::Body(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Body)
{


    // DataBase tasksdb;

    // readfile.open("task.txt",ios::in);
    // if(!readfile.is_open()){
    //     qDebug()<<"open file error!";
    // }
    // else{
    //     readfile>>name;
    //     cout<<name;
    //     username = QString::fromStdString(name);
    //     // qDebug()<<username;
    //     readfile.close();
    // }

    // QString displayString;

    QFile file("task.txt");

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))

    {

        qDebug()<<"Can't open the file!";

    }
    if(!file.exists()){
        qDebug()<<"fail";
    }


    while(!file.atEnd())

    {
        qDebug()<<"open the file success!";


        QString line = file.readAll();

        username = line;

        // displayString.append(str);

    }


    ui->setupUi(this);
    qDebug()<<username;
    tomatoClock.createDatabase(username);

    tomatoClock.username = username;
    tomatoClock.createTaskTable();
    // tomatoClock.taskTableClear();//测试用
    // tomatoClock.insertTask("默认任务1",40,10);
    // tomatoClock.insertTask("默认任务2",40,14);
    // tomatoClock.insertTask("默认任务3",34,10);
    vector<Tasks> task;
    for(auto i = 0;i<task.size();i++){
        qDebug()<<QString("任务名：%1  专注时长：%2   休息时长：%3").arg(task[i].taskName).arg(task[i].workTime).arg(task[i].breakTime);
    }

    // QString str = "delete from tasks";
    // QSqlQuery q;
    // q.prepare(str);
    // q.exec();


    //设置按钮
    int wide=width();
    QToolButton *minButton=new QToolButton(this);  //设计按钮
    QToolButton *closeButton=new QToolButton(this);
    // QPixmap minpix=style()->standardPixmap(QStyle::SP_TitleBarMinButton);
    // QPixmap closepix=style()->standardPixmap(QStyle::SP_TitleBarCloseButton);
    // minButton->setIcon(minpix);
    // closeButton->setIcon(closepix);
    minButton->setGeometry(wide-65,5,20,20);
    closeButton->setGeometry(wide-25,5,20,20);
    minButton->setToolTip("最小化");
    closeButton->setToolTip("关闭");
    minButton->setStyleSheet("background-color:transparent;");
    closeButton->setStyleSheet("background-color:transparent");
    connect(closeButton,SIGNAL(clicked()),this,SLOT(windowclosed()));
    connect(minButton,SIGNAL(clicked()),this,SLOT(windowmin()));
    initSysTrayIcon();


    timer=new QTimer;//计时器初始化
    ui->Timer->setDigitCount(5);
    initTime();
    timer->setInterval(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(updateTime()));

    // tasks.append({"默认任务1", 25, 5});
    // tasks.append({"默认任务2", 45, 10});
    // tasks.append({"默认任务3", 65, 15});
    vector<Tasks> t;
    tomatoClock.searchTask(t);
    for(int i = 0;i<t.size();i++){
        tasks.append({t[i].taskName,t[i].workTime,t[i].breakTime});
    }
    updateTaskTable();
    if (!tasks.isEmpty()) {
        currentTaskIndex = 0; // 默认选择第一个任务
        ui->tableWidget->selectRow(currentTaskIndex);
    }

}

Body::~Body()
{
    delete ui;
}


void Body::on_homeButton_clicked()
{

    ui->stackedWidget->setCurrentIndex(0);

}


void Body::on_labelButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void Body::on_clockButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    vector<Tasks> tasks;
    QString str;
    tomatoClock.searchTask(tasks);
    // qDebug()<<task[0].taskName;
    for(auto i = 0;i<tasks.size();i++){
        str += QString("任务：%1     专注时长：%2     休息时长：%3\n").arg(tasks[i].taskName).arg(tasks[i].workTime).arg(tasks[i].breakTime);
    }
    qDebug().noquote()<<str;
}
void Body::on_personButton_clicked()
{
    Users usermsg;
    tomatoClock.searchUserMsg(username,usermsg);
    qDebug()<<usermsg.picSrc;
    ui->picture->setText(usermsg.picSrc);
    ui->username->setText(usermsg.userName);
    ui->email->setText(usermsg.Email);
    ui->stackedWidget->setCurrentIndex(4);
}



// void Body::on_startEndButton_clicked()
// {


//     ui->startEndButton->setText(startEnd==0?"开始":"结束");
//     startEnd = 1-startEnd;

// }


void Body::on_changePassword_clicked()
{
    ChangePasswordDialog *w = new ChangePasswordDialog;
    w->show();
    this->close();
}


void Body::on_changemsg_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

}

void Body::on_editedButton_2_clicked()
{

    bool halt = false;

    if(ui->uBox_3->text() == "")
    {
        ui->uBox_3->setPlaceholderText("Username EMPTY!");
        halt = true;
    }



    if(ui->eBox_3->text() == "")
    {
        ui->eBox_3->setPlaceholderText("E-mail EMPTY!");
        halt = true;
    }

    // if(ui->fBox_2->text() == "")
    // {
    //     ui->fBox_2->setPlaceholderText("First Name EMPTY!");
    //     halt = true;
    // }

    // if(ui->mBox_2->text() == "")
    // {
    //     ui->mBox_2->setPlaceholderText("Middle Name (optional)");
    //     halt = false;
    // }

    // if(ui->lBox_2->text() == "")
    // {
    //     ui->lBox_2->setPlaceholderText("Last Name EMPTY!");
    //     halt = true;
    // }

    if(tomatoClock.userExist(ui->uBox_3->text())){
        ui->uBox_3->setText("");
        ui->uBox_3->setPlaceholderText("用户名重复！");
        halt = true;
    }

    // QSqlQuery cQuery;
    // cQuery.prepare("SELECT username FROM sys_users WHERE username = (:un)");
    // cQuery.bindValue(":un", ui->uBox->text());

    // if(cQuery.exec())
    // {
    //     if(cQuery.next() && ui->uBox_2->text() != cQuery.value(0).toString())
    //     {
    //         ui->uBox_2->setText("");
    //         ui->uBox_2->setPlaceholderText("用户名重复！");
    //         halt = true;
    //     }
    // }



    if(tomatoClock.emailExist(ui->eBox_3->text())){
        ui->eBox_3->setText("");
        ui->eBox_3->setPlaceholderText("此邮箱已有账号！");
        halt = true;
    }
    // QSqlQuery cQuery2;
    // cQuery2.prepare("SELECT email FROM sys_users WHERE email = (:em)");
    // cQuery2.bindValue(":em", ui->eBox_2->text());

    // if(cQuery2.exec())
    // {
    //     if(cQuery2.next() && ui->eBox_2->text() != cQuery2.value(0).toString())
    //     {
    //         ui->eBox_2->setText("");
    //         ui->eBox_2->setPlaceholderText("此邮箱已有账号！");
    //         halt = true;
    //     }
    // }


    if(halt)
    {
        ui->regLabel_3->setText("请修改您的错误");
    }
    else
    {
        // if (this->picName != "")
        // {
        //     QString to = this->picDir+"/"+ui->uBox_2->text();

        //     if (QFile::exists(to))
        //     {
        //         QFile::remove(to);
        //     }

        //     QFile::copy(this->picName, to);
        //     this->picName = "";
        // }

        ui->regLabel_3->setText("");
        // QSqlQuery iQuery;
        // iQuery.prepare("UPDATE sys_users SET username=(:un), passwd=(:pw), email=(:em) WHERE username=(:uno)");
        // iQuery.bindValue(":un", ui->uBox_2->text());
        // iQuery.bindValue(":pw", ui->pBox_2->text());
        // // iQuery.bindValue(":fn", ui->fBox_2->text());
        // // iQuery.bindValue(":mn", ui->mBox_2->text());
        // // iQuery.bindValue(":ln", ui->lBox_2->text());
        // iQuery.bindValue(":em", ui->eBox_2->text());
        // iQuery.bindValue(":uno", ui->uBox_2->text());

        // if(iQuery.exec())
        // {
        //     ui->winStack->setCurrentIndex(2);
        // }

        tomatoClock.updateUser(ui->uBox_3->text(),ui->eBox_3->text(),ui->rpLabel_3->text());
        ui->stackedWidget->setCurrentIndex(3);
    }
}



void Body::on_backButton_3_clicked()
{
        ui->stackedWidget->setCurrentIndex(3);
}


void Body::on_deleteuser_clicked()
{
    if(QMessageBox::Yes == QMessageBox(QMessageBox::Question,
                                        "Login System", "你确定要注销账号吗?",
                                        QMessageBox::Yes|QMessageBox::No).exec())
    {
        tomatoClock.deleteUser(username);
        LoginSystem *w = new LoginSystem;
        w->show();
        this->close();
    }
}


void Body::on_logout_clicked()
{
        //登出警告弹窗
        if(QMessageBox::Yes == QMessageBox(QMessageBox::Question,
                                            "Login System", "你确定要登出吗?",
                                            QMessageBox::Yes|QMessageBox::No).exec())
        {
            // qApp->exit();
            LoginSystem *w = new LoginSystem;
            w->show();
            // this->close();

        }
}



void Body::initTime()
{
    time.setHMS(0,0,0);
    ui->Timer->display(time.toString("mm:ss"));
}
void Body::on_startButton_3_clicked()
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
            ui->startButton_3->setEnabled(false);
            ui->pauseButton_3->setEnabled(true);
            ui->endButton_3->setEnabled(true);
            ui->taskNameLineEdit_3->setEnabled(false);
            ui->taskDurationLineEdit_3->setEnabled(false);
            ui->taskBreakTimeLineEdit_3->setEnabled(false);
            // 再次更新显示控件，确保UI反映最新状态
            updateTaskDisplay();
        }
    }
}

void Body::on_pauseButton_3_clicked() {
    if (isTimerRunning) {
        isTimerRunning = false;
        timer->stop(); // 暂停计时
        // 更新UI状态
        ui->startButton_3->setEnabled(true);
        ui->pauseButton_3->setEnabled(false);
    }
}

void Body::on_endButton_3_clicked()
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
    ui->startButton_3->setEnabled(true);
    ui->pauseButton_3->setEnabled(false);
    ui->endButton_3->setEnabled(false);
    if (!tasks.empty()) {
        currentTaskIndex = 0;
        updateTaskDisplay();
    } else {
        currentTaskIndex = -1;
    }
}

void Body::updateTaskTable() {
    // 获取当前tableWidget的行数
    int currentRows = ui->tableWidget->rowCount();

    // 如果当前行数少于tasks中的任务数，我们需要添加新行
    if (currentRows < tasks.size()) {
        // 从当前行数开始添加新任务到tableWidget
        for (int i = currentRows; i < tasks.size(); ++i) {
            const task &task = tasks[i];
            ui->tableWidget->insertRow(i); // 注意：这里直接使用i作为行号，因为是从currentRows开始的
            ui->tableWidget->setItem(i, 0, new QTableWidgetItem(task.name));
            ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString::number(task.duration)));
            ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(task.breakTime)));
            ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString("确认")));
        }
    }
    // 如果行数过多（理论上不应该发生，除非外部代码修改了tableWidget），这里不处理

    // 更新currentTaskIndex和UI显示（如果需要）
    // 注意：这个逻辑通常放在on_tableWidget_itemSelectionChanged()槽函数中处理
    // 但如果这里需要确保UI与tasks同步，可以调用updateTaskDisplay()（如果currentTaskIndex没有改变的话，它可能不会做任何事）
    // 这里不直接调用，因为选择变化应该由用户交互触发
}

void Body::updateTime() {
    if (isTimerRunning && currentTaskIndex != -1 && tasks.size() > currentTaskIndex) {
        time = time.addSecs(1);
        ui->Timer->display(time.toString("mm:ss"));

        if (time.minute() >= tasks[currentTaskIndex].duration) {
            isTimerRunning = false;
            timer->stop();
            // 弹出提醒休息（如果需要）
            // ...
            // 清空任务显示控件（计时结束时）
            ui->taskNameLineEdit_3->clear();
            ui->taskDurationLineEdit_3->clear();
            ui->taskBreakTimeLineEdit_3->clear();
            // 增加番茄数
            tomatoCount++;
            // 重置时间和其他相关状态
            initTime();
            // 启用/禁用UI控件（根据需要）
            ui->startButton_3->setEnabled(true);
            ui->pauseButton_3->setEnabled(false);
            ui->endButton_3->setEnabled(false);
        }
    }
}
// QProgressBar
void Body::on_addTaskBtn_3_clicked()
{
    QString name = QInputDialog::getText(this, tr("添加任务"), tr("任务名称:"));
    if (name.isEmpty()) return;

    bool ok;
    int duration = QInputDialog::getInt(this, tr("添加任务"), tr("任务时长（分钟）:"), 25, 1, 1440, 1, &ok);
    if (!ok) return;

    int breakTime = QInputDialog::getInt(this, tr("添加任务"), tr("休息时长（分钟）:"), 5, 1, 1440, 1, &ok);
    if (!ok) return;

    task newTask = {name, duration, breakTime};
    tasks.append(newTask);
    updateTaskTable(); // 更新UI中的任务列表
    currentTaskIndex = tasks.size() - 1; // 设置currentTaskIndex为新添加的任务
    updateTaskDisplay(); // 更新显示控件
    tomatoClock.insertTask(name,duration,breakTime);
}

void Body::on_editTaskBtn_3_clicked()
{
    if (currentTaskIndex != -1 && !isTimerRunning) {
        task &task = tasks[currentTaskIndex];

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
            qDebug()<<taskName;
            tomatoClock.updataTask(taskName,newName,newDuration,newBreakTime);
        }
    }
}

void Body::on_delTaskBtn_3_clicked()
{
    // 获取当前选中的行号
    int row = ui->tableWidget->currentRow();

    if (row != -1 && row < tasks.size()) {
        // 删除对应任务
        tomatoClock.deleteTask(tasks[currentTaskIndex].name);
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

void Body::updateTaskDisplay() {
    if (currentTaskIndex != -1 && currentTaskIndex < tasks.size()) {
        const task &task = tasks[currentTaskIndex];
        ui->taskNameLineEdit_3->setText(task.name);
        ui->taskDurationLineEdit_3->setText(QString::number(task.duration));
        ui->taskBreakTimeLineEdit_3->setText(QString::number(task.breakTime));
    } else {
        // 如果没有选中任务，则清空显示控件
        ui->taskNameLineEdit_3->clear();
        ui->taskDurationLineEdit_3->clear();
        ui->taskBreakTimeLineEdit_3->clear();
    }
}

bool Body::isTimerFinished()
{
    if (currentTaskIndex != -1 && tasks.size() > currentTaskIndex) {
        const task &currentTask = tasks[currentTaskIndex];
        // 将当前时间转换为分钟
        int currentTimeInMinutes = time.minute() + time.hour() * 60;

        // 判断当前计时器是否完成
        if (currentTimeInMinutes >= currentTask.duration) {
            return true;
        }
    }
    return false;
}

void Body::clearDisplayWidgets()
{
    // 清空任务信息显示
    ui->taskNameLineEdit_3->clear();
    ui->taskDurationLineEdit_3->clear();
    ui->taskBreakTimeLineEdit_3->clear();

    // 重置计时器显示
    ui->Timer->display("00:00");

    // 其他可能需要重置的状态
    time = QTime(0, 0); // 重置当前计时器时间
    isTimerRunning = false; // 确保计时器不处于运行状态
    currentTaskIndex = -1; // 重置当前任务索引
}

// 槽函数来处理表格的选择变化
void Body::on_tableWidget_itemSelectionChanged()
{
    // 获取当前选中的行（只处理第一行，因为是单选）
    QModelIndexList selectedIndexes = ui->tableWidget->selectionModel()->selectedRows();
    if (!selectedIndexes.isEmpty()) {
        int row = selectedIndexes.first().row();
        if (row < tasks.size()) {
            currentTaskIndex = row;
            task &task = tasks[currentTaskIndex];
            taskName = task.name;
            qDebug()<<taskName;
        }
    } else {
        // 如果没有选中任何行，则重置currentTaskIndex（可选）
        currentTaskIndex = -1;
    }
    updateTaskDisplay(); // 更新显示控件
}

void Body::on_tableWidget_cellClicked(int row, int column)
{

    if(row<tasks.size()&&column==3){
        // qDebug()<<"dddd";
        currentTaskIndex = row;
        ui->stackedWidget->setCurrentIndex(0);
    }
    updateTaskDisplay();
}


//主页面的开启与关闭
void Body::initSysTrayIcon()
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
void Body::createActions()
{
    m_pauseaction = new QAction("打开主面板", this);
    connect(m_pauseaction,SIGNAL(triggered()),this,SLOT(on_pauseaction()));
    m_showMainAction = new QAction("个人中心", this);
    connect(m_showMainAction,SIGNAL(triggered()),this,SLOT(on_showMainAction()));
    m_exitAppAction = new QAction("退出", this);
    connect(m_exitAppAction,SIGNAL(triggered()),this,SLOT(on_exitAppAction()));

}//更改内容

//创建托盘菜单
void Body::createMenu()
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
void Body::on_showMainAction()
{
    // m_personaldoc->show(); // 显示个人中心页面

}

//当在系统托盘点击菜单内的退出程序操作
void Body::on_exitAppAction()
{
    qApp->exit();
}

//关闭事件
void Body::closeEvent(QCloseEvent *event)
{
    //忽略窗口关闭事件
    QApplication::setQuitOnLastWindowClosed( true );
    this->hide();
    event->ignore();
}

void Body::on_activatedSysTrayIcon(QSystemTrayIcon::ActivationReason reason)
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





