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
SatConfigSys::~SatConfigSys()
{

}

