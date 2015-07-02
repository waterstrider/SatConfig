#ifndef SATCONFIGSYS_H
#define SATCONFIGSYS_H
#include <QStandardItemModel>

class SatConfigSys
{
public:
    SatConfigSys();
    ~SatConfigSys();
    QStandardItemModel satConfigModel;
    bool readSatConfigFile(QString file = "");
};

#endif // SATCONFIGSYS_H
