#ifndef PERSONALDOC_H
#define PERSONALDOC_H

#include <QWidget>
#include<vector>
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

#include<windows.h>
#include<windowsx.h>
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
// #include "radiusprogressbar.h"


namespace Ui {
class personaldoc;
}

class personaldoc : public QWidget
{
    Q_OBJECT

public:
    explicit personaldoc(QWidget *parent = 0);
    ~personaldoc();

private slots:
    void on_btnPersonalInfo_clicked();

    void on_btnHistory_clicked();
    void on_btnUploadAvatar_clicked();
    void on_btnAchievements_clicked();

    void on_setPomodoros_clicked();

    void on_setDuration_clicked();

    void on_setPauses_clicked();

    void on_generateButton_clicked();

    void generateHistoryChart(const QDate &startdate,const QDate &enddate);

private:
    QWidget* personalInfoPage;
    QWidget* historyPage;
    QWidget* achievementsPage;

    Ui::personaldoc *ui;
    QLabel* lblAvatar;
    QComboBox* comboBoxGender;
    QChartView* currentChartView;
    bool showPomodoros_;
    bool showDuration_;
    bool showPauses_;
    QDateEdit *startDateEdit;
    QDateEdit *endDateEdit;
};

#endif // PERSONALDOC_H
