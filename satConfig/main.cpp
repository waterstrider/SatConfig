#include "mainwindow.h"
#include <QApplication>
#include "satconfigsys.h"
int main(int argc, char *argv[])
{
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
    SatConfigSys satConfigSys;
    satConfigSys.readSatConfigFile("conf_sat.txt");

//    return a.exec();
}
