#include "changepassworddialog.h"
#include "ui_changepassworddialog.h"
#include <QMessageBox>

ChangePasswordDialog::ChangePasswordDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangePasswordDialog)
{
    ui->setupUi(this);

    // Connect the button click signal to the slot
    connect(ui->submitNewPasswordButton, &QPushButton::clicked, this, &ChangePasswordDialog::onSubmitNewPasswordClicked);
}

ChangePasswordDialog::~ChangePasswordDialog()
{
    delete ui;
}

void ChangePasswordDialog::onSubmitNewPasswordClicked()
{
    QString oldPassword = ui->oldPasswordEdit->text();
    QString newPassword = ui->newPasswordEdit->text();
    QString confirmPassword = ui->confirmPasswordEdit->text();

    // Here you should check the old password with the stored password
    // For simplicity, we assume the old password is "1234"
    if (oldPassword != "1234") {
        QMessageBox::warning(this, "Error", "Old password is incorrect.");
        return;
    }

    if (newPassword.isEmpty() || confirmPassword.isEmpty()) {
        QMessageBox::warning(this, "Error", "New password fields cannot be empty.");
        return;
    }

    if (newPassword != confirmPassword) {
        QMessageBox::warning(this, "Error", "New passwords do not match.");
        return;
    }

    // Here you should update the password in your storage (e.g., database, file, etc.)
    // For simplicity, we just show a success message
    QMessageBox::information(this, "Success", "Password changed successfully.");
}
