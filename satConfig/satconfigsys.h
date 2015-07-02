#ifndef SATCONFIGSYS_H
#define SATCONFIGSYS_H

#include <QStandardItemModel>
#include <QSortFilterProxyModel>
#include <QFile>
#include <QTextStream>
//#include <QMessageBox>
#include <QList>
#include <QDebug>
#include "globalcontext.h"
#include <QMessageBox>

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
//    bool readSatConfigFile(QString filename = "");
    void importSatConfig(QString filepath);
    void exportSatConfig(QString filepath);
        void exportI_CNFM_yyyyMMdd_HHMMSS(QString filepath);
            void exportI_CMOB_yyyyMMdd_HHMMSS(QString filepath);
                void exportI_CNFF_yyyyMMdd_HHMMSS(QString filepath);
};

#endif // SATCONFIGSYS_H
