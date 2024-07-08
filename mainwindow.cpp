#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "changepassworddialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect the button click signal to the slot
    connect(ui->changePasswordEntryButton, &QPushButton::clicked, this, &MainWindow::onChangePasswordEntryClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onChangePasswordEntryClicked()
{
    ChangePasswordDialog dialog(this);
    dialog.exec();
}
