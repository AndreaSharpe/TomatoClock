#include "loginSystem.h"
// #include "body.h"
// #include "changepassworddialog.h"
// #include "tomatoclock.h"
// #include "personaldoc.h"
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
    // TomatoClock * t = new TomatoClock;
    // t->show();
    // personaldoc *p = new personaldoc;
    // p->show();
    return a.exec();
}
