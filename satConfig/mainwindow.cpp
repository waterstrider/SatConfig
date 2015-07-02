#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "passworddialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showPasswordDialog() {
    QString pass;
    PasswordDialog *pDialog = new PasswordDialog();
    if (pDialog->exec()==QDialog::Accepted) {
        pDialog->getText(pass);
    } else { return; }
    pDialog->close();
    /* Check password and save log.
     * .........
     * */
    return;
}
