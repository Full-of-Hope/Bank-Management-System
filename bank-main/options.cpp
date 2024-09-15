#include "options.h"
#include "bank.h"
#include "bankserver.h"
#include "deposit.h"
#include "editpasswd.h"
#include"interestnote.h"
#include "flowlist.h"
#include "ui_options.h"
#include "withdraw.h"
#include <QDebug>
#include <QMessageBox>
#include <ctime>
#include<QInputDialog>
#include<QLineEdit>



#include<QTime>
extern bankServer bankserver;

options::options(QWidget *parent) : QDialog(parent),
                                    ui(new Ui::options)
{
    ui->setupUi(this);
    time.start();
    setWindowFlags(Qt::WindowCloseButtonHint | Qt::MSWindowsFixedSizeDialogHint);


    resize(600,800);
}

options::~options()
{
    delete ui;
}


void options::on_options_depositButton_clicked()
{
    deposit *deposit_windows;
    deposit_windows = new deposit();
    deposit_windows->show();
    this->close();
}



void options::on_options_passwdButton_clicked()
{
    editpasswd *editpasswd_windows;
    editpasswd_windows = new editpasswd();
    editpasswd_windows->show();
    this->close();
    delete this;
}

void options::on_options_lostButton_clicked()
{
    int result = QMessageBox::warning(this, tr(""), tr("确认挂失吗？"), tr("确认"), tr("取消"), 0, 1);
    switch (result)
    {
    case 0:
        QTime currenttime;
        currenttime.start();
        time_t tCurrentTime = currenttime.elapsed();
        bankserver.ReportLost(tCurrentTime);
        QMessageBox::information(this, tr(""), tr("账户已挂失！"), tr("确认"), 0);
        bank *bank_windows;
        bank_windows = new bank();
        bank_windows->show();
        this->close();
        break;
    }
}

void options::on_options_withdrawButton_clicked()
{

    withdraw *withdraw_windows;
    withdraw_windows = new withdraw();
    withdraw_windows->show();
    this->close();
}

void options::on_options_flowButton_clicked()
{
    flowlist *flowlist_windows;
    flowlist_windows = new flowlist();
    flowlist_windows->show();
    this->close();
}

void options::on_options_interestnoteButton_clicked()
{

    interestnote *interestnote_windows;
    interestnote_windows = new interestnote();
    interestnote_windows->show();
    this->close();
}
