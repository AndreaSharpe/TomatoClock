#ifndef RESET_H
#define RESET_H

#include <QDialog>

namespace Ui {
class reset;
}

class reset : public QDialog
{
    Q_OBJECT

public:
    explicit reset(QWidget *parent = 0);
    ~reset();

private slots:
    // void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::reset *ui;
};

#endif // RESET_H
