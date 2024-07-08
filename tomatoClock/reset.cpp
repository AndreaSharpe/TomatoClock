#include "reset.h"
#include "ui_reset.h"
#include "loginSystem.h"
reset::reset(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reset)
{
    ui->setupUi(this);
}

reset::~reset()
{
    delete ui;
}

void reset::on_pushButton_2_clicked()
{
    LoginSystem *w = new LoginSystem;
    w->show();
    this->close();
}

