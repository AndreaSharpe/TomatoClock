#include "loginSystem.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginSystem w;
    w.show();
    return a.exec();
}
