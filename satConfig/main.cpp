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
//    satConfigSys.readSatConfigFile("conf_sat.txt");
    satConfigSys.importSatConfig(SAT_CONFIG_PATH);
    satConfigSys.exportSatConfig(SAT_CONFIG_PATH);
<<<<<<< HEAD
    satConfigSys.exportI_CMOB_yyyyMMdd_HHMMSS(SAT_CONFIG_PATH);
    satConfigSys.exportI_CNFF_yyyyMMdd_HHMMSS(SAT_CONFIG_PATH);
    satConfigSys.exportI_CNFM_yyyyMMdd_HHMMSS(SAT_CONFIG_PATH);
=======
>>>>>>> 02d93d9badb6de4c2649942e0b50b45cdcf527b6

//    return a.exec();
}
