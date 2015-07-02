#include "satconfigsys.h"

SatConfigSys::SatConfigSys()
{

}
//bool SatConfigSys::readSatConfigFile(QString filename){
//    QFile file(filename);
//    if(!file.open(QIODevice::ReadOnly)) {
////        QMessageBox::information(0, "error", file.errorString());
//        return 0;
//    }

//    QTextStream in(&file);

//    while(!in.atEnd()) {
//        QString line = in.readLine();
//        QStringList fields = line.split(" ");
//        QList<QStandardItem*> tempList;
//        for(auto temp:fields){
//            tempList.append(new QStandardItem(temp));
//        }
//        satConfigModel.appendRow(tempList);
//    }

//    file.close();
//    return 1;
//}

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

void SatConfigSys::importSatConfig(QString filepath)
{
    QFile sat_config_file(filepath);
    if(!sat_config_file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(0,"info",sat_config_file.errorString());
    }
    QTextStream in_stream(&sat_config_file);

    while(!in_stream.atEnd())
    {
        QString in_str = in_stream.readLine();

        QStringList param_list = in_str.split(" ", QString::SkipEmptyParts);

        QList<QStandardItem *> param_item_list;

        param_item_list.append(new QStandardItem(param_list.at(GROUPS_FILE_INDEX)));
        param_item_list.append(new QStandardItem(param_list.at(NAME_FILE_INDEX)));
        param_item_list.append(new QStandardItem(param_list.at(VALUE_FILE_INDEX)));
        param_item_list.append(new QStandardItem()); //new value
        param_item_list.append(new QStandardItem(param_list.at(TYPE_FILE_INDEX)));
        param_item_list.append(new QStandardItem(param_list.at(NOTE_FILE_INDEX)));
        param_item_list.append(new QStandardItem(param_list.at(TYPE_UNIT_FILE_INDEX)));

        //Disable editing in all field except for "New Value" column
        for(int i = 0; i < param_item_list.count(); i++)
        {
            if(i != VALUE_NEW_INDEX)
            {
                param_item_list[i]->setFlags(param_item_list[i]->flags() & ~Qt::ItemIsEditable);
            }
        }

        satConfigModel.appendRow(param_item_list);
    }
}

void SatConfigSys::exportSatConfig(QString filepath){
    /* Try and open a file for output */
//    QString outputFilename = filepath;
//    QFile outputFile(outputFilename);
//    outputFile.open(QIODevice::WriteOnly);

    /* Check it opened OK */
//    if(!outputFile.isOpen()){
//        qDebug() << argv[0] << "- Error, unable to open" << outputFilename << "for output";
//        return 1;
//    }

    /* Point a QTextStream object at the file */
//    QTextStream outStream(&outputFile);

    for (int i = 0 ; i < satConfigModel.rowCount() ; i++) {
        QString status = QString("%1%2%3%4%5%6").arg(satConfigModel.item(i,0)->text(),-GROUP_LENGTH,' ').arg(satConfigModel.item(i,1)->text(),-PARAM_NAME_LENGTH,' ').arg(satConfigModel.item(i,2)->text(),-TYPE_LENGTH,' ').arg(satConfigModel.item(i,3)->text(),-TYPE_UNIT_LENGTH,' ').arg(satConfigModel.item(i,4)->text(),-PARAM_VALUE_LENGTH,' ').arg(satConfigModel.item(i,5)->text(),-NOTE_LENGTH,' ');
        qDebug() << status;
        /* Write the line to the file */
//        outStream << status;
    }

    /* Close the file */
//    outputFile.close();
}

SatConfigSys::~SatConfigSys()
{

}

