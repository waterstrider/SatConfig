#ifndef SATCONFIGSYS_H
#define SATCONFIGSYS_H
#include <QStandardItemModel>
#include <QFile>
#include <QTextStream>
//#include <QMessageBox>
#include <QList>
class SatConfigSys
{
public:
    SatConfigSys();
    ~SatConfigSys();
    QStandardItemModel satConfigModel;
    bool readSatConfigFile(QString filename = "");
};

#endif // SATCONFIGSYS_H
