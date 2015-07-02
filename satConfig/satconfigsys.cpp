#include "satconfigsys.h"

SatConfigSys::SatConfigSys()
{

}
bool SatConfigSys::readSatConfigFile(QString filename){
    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly)) {
//        QMessageBox::information(0, "error", file.errorString());
        return 0;
    }

    QTextStream in(&file);

    while(!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(" ");
        QList<QStandardItem*> tempList;
        for(auto temp:fields){
            tempList.append(new QStandardItem(temp));
        }
        satConfigModel.appendRow(tempList);
    }

    file.close();
    return 1;
}

void SatConfigSys::initProxyModels()
{
    scc_proxyModel = new QSortFilterProxyModel();
    mpc_pl_proxyModel = new QSortFilterProxyModel();
    mpc_aocs_proxyModel = new QSortFilterProxyModel();
    fds_proxyModel = new QSortFilterProxyModel();

    scc_proxyModel->setSourceModel(&satConfigModel);
    mpc_pl_proxyModel->setSourceModel(&satConfigModel);
    mpc_aocs_proxyModel->setSourceModel(&satConfigModel);
    fds_proxyModel->setSourceModel(&satConfigModel);

    scc_proxyModel->setFilterFixedString("SCC");
    mpc_pl_proxyModel->setFilterFixedString("MPC_PL");
    mpc_aocs_proxyModel->setFilterFixedString("MPC_AOCS");
    fds_proxyModel->setFilterFixedString("FDS");
}

SatConfigSys::~SatConfigSys()
{

}

