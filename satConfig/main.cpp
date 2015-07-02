#include "mainwindow.h"
#include <QApplication>
#include "satconfigsys.h"
#include "globalcontext.h"
int main(int argc, char *argv[])
{
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
    SatConfigSys satConfigSys;
    satConfigSys.readSatConfigFile("conf_sat.txt");
    satConfigSys.importSatConfig(sat_config_path);

//    return a.exec();
}
