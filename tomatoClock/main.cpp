#include "loginSystem.h"
// #include "body.h"
// #include "changepassworddialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginSystem w;
    w.show();
    // Body b;
    // b.show();
    // ChangePasswordDialog c;
    // c.show();
    return a.exec();
}
