#include "mainwindow.h"
#include <QApplication>
#include "satconfigsys.h"
#include "globalcontext.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    w.show();
    SatConfigSys satConfigSys;
//    satConfigSys.readSatConfigFile("conf_sat.txt");
    satConfigSys.importSatConfig(SAT_CONFIG_PATH);
    MainWindow *main_window = new MainWindow();
    main_window->show();

    return a.exec();
}
