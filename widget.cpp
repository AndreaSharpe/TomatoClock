#include "widget.h"  

Widget::Widget(QWidget* parent)
    : QWidget(parent)
{
    setupUI();
}

Widget::~Widget()
{
}

void Widget::setupLeftPanel() {
    QVBoxLayout* leftLayout = new QVBoxLayout;
    btnPersonalInfo = new QPushButton("个人信息");
    btnPersonalInfo->setFixedSize(100, 30);
    leftLayout->addWidget(btnPersonalInfo);

    btnHistory = new QPushButton("历史记录");
    btnHistory->setFixedSize(100, 30);
    leftLayout->addWidget(btnHistory);

    btnAchievements = new QPushButton("成就");
    btnAchievements->setFixedSize(100, 30);
    leftLayout->addWidget(btnAchievements);

    leftPanel = new QWidget;
    leftPanel->setLayout(leftLayout);
}

void Widget::setupUI()
{
    QVBoxLayout* mainLayout = new QVBoxLayout(this);
    setupLeftPanel();

    stackedWidget = new QStackedWidget(this);
    personalInfoPage = new QWidget();
    historyPage = new QWidget();
    achievementsPage = new QWidget();

    setupPersonalInfoPage();
    setupHistoryPage();
    setupAchievementsPage();

    stackedWidget->addWidget(personalInfoPage);
    stackedWidget->addWidget(historyPage);
    stackedWidget->addWidget(achievementsPage);

    mainLayout->addWidget(leftPanel);
    mainLayout->addWidget(stackedWidget);

    connect(btnPersonalInfo, &QPushButton::clicked, this, &Widget::onButtonClicked);
    connect(btnHistory, &QPushButton::clicked, this, &Widget::onButtonClicked);
    connect(btnAchievements, &QPushButton::clicked, this, &Widget::onButtonClicked);

    setLayout(mainLayout);  // 确保布局填充整个窗口  
}

void Widget::onButtonClicked()
{
    if (sender() == btnPersonalInfo)
        stackedWidget->setCurrentIndex(0);
    else if (sender() == btnHistory)
        stackedWidget->setCurrentIndex(1);
    else if (sender() == btnAchievements)
        stackedWidget->setCurrentIndex(2);
}

void Widget::setupPersonalInfoPage()
{
    QVBoxLayout* layout = new QVBoxLayout(personalInfoPage);
    lblAvatar = new QLabel(personalInfoPage);
    lblAvatar->setFixedSize(100, 100);
    lblAvatar->setPixmap(QPixmap(":/default_avatar.png"));
    layout->addWidget(lblAvatar);

    btnUploadAvatar = new QPushButton("上传头像", personalInfoPage);
    layout->addWidget(btnUploadAvatar);
    connect(btnUploadAvatar, &QPushButton::clicked, this, &Widget::onUploadAvatarClicked);

    lineEditNickname = new QLineEdit(personalInfoPage);
    layout->addWidget(new QLabel("昵称:", personalInfoPage));
    layout->addWidget(lineEditNickname);

    comboBoxGender = new QComboBox(personalInfoPage);
    comboBoxGender->addItem("男");
    comboBoxGender->addItem("女");
    comboBoxGender->addItem("其他");
    layout->addWidget(new QLabel("性别:", personalInfoPage));
    layout->addWidget(comboBoxGender);

    lblEmail = new QLabel("已绑定邮箱: example@example.com", personalInfoPage);
    layout->addWidget(lblEmail);
}

void Widget::onUploadAvatarClicked()
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
        lblAvatar->setPixmap(roundedPixmap);
    }
}

void Widget::setupHistoryPage()
{
    QVBoxLayout* layout = new QVBoxLayout(historyPage);
    QLabel* label = new QLabel("历史记录页", historyPage);
    layout->addWidget(label);

    // 添加日期选择器  
    QCalendarWidget* calendar = new QCalendarWidget(historyPage);
    layout->addWidget(calendar);

    // 添加一个按钮来选择时间段并生成柱状图  
    QPushButton* generateButton = new QPushButton("生成柱状图", historyPage);
    layout->addWidget(generateButton);

    // 连接按钮的点击信号到适当的槽函数  
    connect(generateButton, &QPushButton::clicked, this, &Widget::generateHistoryChart);
}

void Widget::setupAchievementsPage()
{
    QVBoxLayout* layout = new QVBoxLayout(achievementsPage);
    QLabel* label = new QLabel("成就页", achievementsPage);
    layout->addWidget(label);

    // 假设你有一个函数来获取用户的成就，并在这里添加它们到页面上  
    // 例如：addAchievementsToPage(layout);  
}

// 这是一个槽函数，用于生成并显示柱状图  
void Widget::generateHistoryChart()
{
    // 这里需要实现生成柱状图的逻辑  
    // 
    // 创建一个图表并设置数据  
  
    // ... 设置图表数据 ...  

    // 显示图表  
    
}

// 你可能还需要实现addAchievementsToPage函数来添加成就到页面上