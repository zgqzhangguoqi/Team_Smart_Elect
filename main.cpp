#include "mainwindow.h"
#include <QApplication>
#include "login.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    login log;
    //w.show();

    log.show();
    if(log.exec() == QDialog::Accepted)
    {
        w.show();
        return a.exec();
    }
    a.quit();
    return 0;
}
