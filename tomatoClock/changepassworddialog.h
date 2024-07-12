#ifndef CHANGEPASSWORDDIALOG_H
#define CHANGEPASSWORDDIALOG_H

#include <QDialog>


namespace Ui {
class ChangePasswordDialog;
}

class ChangePasswordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChangePasswordDialog(QWidget *parent = nullptr);
    ~ChangePasswordDialog();

private slots:
    // void onSubmitNewPasswordClicked();


    // void on_submitNewPasswordButton_clicked();

    void on_submitNewPasswordButton_clicked();


private:
    Ui::ChangePasswordDialog *ui;

};

#endif // CHANGEPASSWORDDIALOG_H
