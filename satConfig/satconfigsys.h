#ifndef SATCONFIGSYS_H
#define SATCONFIGSYS_H

#include <QStandardItemModel>
#include <QSortFilterProxyModel>
#include <QFile>
#include <QTextStream>
//#include <QMessageBox>
#include <QList>
#include "globalcontext.h"

class SatConfigSys
{
public:
    SatConfigSys();
    ~SatConfigSys();
    QStandardItemModel satConfigModel;
    QSortFilterProxyModel *scc_proxyModel;
    QSortFilterProxyModel *mpc_pl_proxyModel;
    QSortFilterProxyModel *mpc_aocs_proxyModel;
    QSortFilterProxyModel *fds_proxyModel;
    void initProxyModels();
    bool readSatConfigFile(QString filename = "");
    void importSatConfig(QString filepath);
};

#endif // SATCONFIGSYS_H
