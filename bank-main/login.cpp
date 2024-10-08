#include "login.h"
#include "bank.h"
#include "bankserver.h"
#include "options.h"
#include "ui_login.h"
#include <QDebug>
#include <QMessageBox>
#include <stdio.h>
#include<QTime>

extern bankServer bankserver;

login::login(QWidget *parent) : QDialog(parent),
                                ui(new Ui::login)
{
    ui->setupUi(this);
    setWindowFlags(Qt::WindowCloseButtonHint | Qt::MSWindowsFixedSizeDialogHint);


    resize(500,400);
}

login::~login()
{
    delete ui;
}

void login::on_login_okButton_clicked()
{
    if (!bankserver.AccountExist(ui->login_accountInput->text().toStdString()))
    {
        ui->login_accountStateLabel->setStyleSheet("color:red;");
        ui->login_accountStateLabel->setText(QString::fromStdString("× 账号不存在"));
    }
    else
    {
        ui->login_accountStateLabel->setStyleSheet("color:green;");
        ui->login_accountStateLabel->setText(QString::fromStdString("√"));
    }

    if (!bankserver.Login(ui->login_accountInput->text().toStdString(),
                          ui->login_passwdInput->text().toStdString()))
    {
        ui->login_passwdInput->setText(QString::fromStdString(""));
        QMessageBox::critical(this, tr("错误"), tr("密码错误！"), tr("确认"), 0);
    }
    else if (bankserver.GetLost())
    {
        if (!QMessageBox::critical(this, tr(""), tr("账户已被挂失！\n是否解除挂失？"), tr("解除挂失"), tr("返回"), 0, 1))
        {
            bankserver.RidLost();
            options *options_windows;
            options_windows = new options();
            options_windows->show();
            this->close();
        }
    }
    else
    {
        options *options_windows;
        options_windows = new options();
        options_windows->show();
        this->close();
    }
}

void login::on_login_backButton_clicked()
{
    bank *bank_windows;
    bank_windows = new bank();
    bank_windows->show();
    this->close();
}


