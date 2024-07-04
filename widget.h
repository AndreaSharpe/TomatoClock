// widget.h  
#ifndef WIDGET_H  
#define WIDGET_H  

#include <QWidget>  
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
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget* parent = nullptr);
    ~Widget();

private:
    void setupUI();
    void setupLeftPanel();
    void setupPersonalInfoPage();
    void setupHistoryPage();
    void setupAchievementsPage();

    void onButtonClicked();
    void onUploadAvatarClicked();

    void generateHistoryChart();
    QPushButton* btnPersonalInfo;
    QPushButton* btnHistory;
    QPushButton* btnAchievements;
    QStackedWidget* stackedWidget;
    QWidget* personalInfoPage;
    QWidget* historyPage;
    QWidget* achievementsPage;
    QLabel* lblAvatar;
    QPushButton* btnUploadAvatar;
    QLineEdit* lineEditNickname;
    QComboBox* comboBoxGender;
    QLabel* lblEmail;
    QWidget* leftPanel; // 声明为私有成员  
};

#endif // WIDGET_H