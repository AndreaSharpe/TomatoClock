# pragma execution_character_set("utf-8")
#include "personaldoc.h"
#include "ui_personaldoc.h"

personaldoc::personaldoc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::personaldoc)
{
    ui->setupUi(this);

    ui->comboBoxGender->addItem(QString::fromUtf8("男 "));
    ui->comboBoxGender->addItem(QString::fromUtf8("女 "));
    ui->comboBoxGender->addItem(QString::fromUtf8("其他 "));
}

personaldoc::~personaldoc()
{
    delete ui;
}

void personaldoc::on_btnPersonalInfo_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void personaldoc::on_btnHistory_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void personaldoc::on_btnAchievements_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void personaldoc::on_btnUploadAvatar_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "选择头像", "", "图片文件 (*.png *.jpg *.jpeg *.bmp)");
    if (!fileName.isEmpty()) {
        QPixmap originalPixmap(fileName);
        int avatarSize = 100;
        QPixmap roundedPixmap = originalPixmap.scaled(avatarSize, avatarSize, Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation);
        QPixmap maskPixmap(avatarSize, avatarSize);
        maskPixmap.fill(Qt::transparent);
        QPainter painter(&maskPixmap);
        painter.setRenderHint(QPainter::Antialiasing);
        painter.setBrush(QBrush(Qt::black));
        painter.drawEllipse(0, 0, avatarSize, avatarSize);
        roundedPixmap.setMask(maskPixmap.mask());
        ui->lblAvatar->setPixmap(roundedPixmap);
    }
}


void personaldoc::on_setPomodoros_clicked()
{
    showPomodoros_ = true;
    showDuration_ = false;
    showPauses_ = false;
}

void personaldoc::on_setDuration_clicked()
{
    showPomodoros_ = false;
    showDuration_ = true;
    showPauses_ = false;
}

void personaldoc::on_setPauses_clicked()
{
    showPomodoros_ = false;
    showDuration_ = false;
    showPauses_ = true;
}

void personaldoc::on_generateButton_clicked() {
    QDate startDate = startDateEdit->date();
    QDate endDate = endDateEdit->date();

    // 检查日期是否有效
    if (startDate > endDate) {
        QMessageBox::warning(this, "错误", "结束日期不能早于开始日期！");
        return;
    }

    generateHistoryChart(startDate, endDate);
}

void personaldoc::generateHistoryChart(const QDate &startDate, const QDate &endDate)
{
    // 打开 SQLite 数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("path_to_your_database.db");
    QDataStream dataStream;
    if (!db.open()) {
        return;
    }

    // 执行 SQL 查询以获取历史记录数据
    QSqlQuery query;
    query.exec("SELECT date, completed_pomodoros, total_duration, pauses FROM history WHERE date BETWEEN 'startDate' AND 'endDate'");

    // 初始化图表所需的数据结构
    QVector<QString> categories;
    QVector<int> pomodorosData;
    QVector<int> durationData;
    QVector<int> pausesData;

    // 遍历查询结果，收集数据
    while (query.next()) {
        QString date = query.value(0).toString();
        int pomodoros = query.value(1).toInt();
        int duration = query.value(2).toInt();
        int pauseCount = query.value(3).toInt();

        categories.append(date);
        if (showPomodoros_) pomodorosData.append(pomodoros);
        if (showDuration_) durationData.append(duration);
        if (showPauses_) pausesData.append(pauseCount);
    }

    // 如果已经有一个图表视图，先移除它
    if (currentChartView!= nullptr) {
        historyPage->layout()->removeWidget(currentChartView);
        delete currentChartView;
        currentChartView= nullptr;
    }

    // 创建柱状图
    QChart* chart = new QChart();
    QBarSeries* series = new QBarSeries();

    if (showPomodoros_) {
        QBarSet* setPomodoros = new QBarSet("完成的番茄钟个数");
        for (int pomodoro : pomodorosData) {
            *setPomodoros << pomodoro;
        }
        series->append(setPomodoros);
    }
    if (showDuration_) {
        QBarSet* setDuration = new QBarSet("总时长");
        for (int duration : durationData) {
            *setDuration << duration;
        }
        series->append(setDuration);
    }
    if (showPauses_) {
        QBarSet* setPauses = new QBarSet("暂停次数");
        for (int pause : pausesData) {
            *setPauses << pause;
        }
        series->append(setPauses);
    }


    chart->addSeries(series);
    chart->setTitle("历史记录柱状图");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    // 设置坐标轴
    QStringList categoriesList;
    for (const QString& category : categories) {
        categoriesList.append(category);
    }

    QBarCategoryAxis* axisX = new QBarCategoryAxis();
    axisX->append(categoriesList);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis* axisY = new QValueAxis();
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    // 显示图表
    QChartView* chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    historyPage->layout()->addWidget(chartView);

    // 更新成员变量以指向新的图表视图
    currentChartView = chartView;
}
