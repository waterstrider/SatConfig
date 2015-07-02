#ifndef PASSWORDDIALOG_H
#define PASSWORDDIALOG_H

#include <QDialog>

namespace Ui {
class PasswordDialog;
}

class PasswordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PasswordDialog (QWidget *parent = 0);
    ~PasswordDialog();
    void getText(QString & str);

private slots:
    void on_buttonBox_accepted();

private:
    Ui::PasswordDialog *ui;
    QString text;
};

#endif // PASSWORDDIALOG_H
