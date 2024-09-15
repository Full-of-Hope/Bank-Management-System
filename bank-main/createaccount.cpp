#include "createaccount.h"
#include "bank.h"
#include "bankserver.h"
#include "ui_createaccount.h"
#include <QDebug>
#include <QMessageBox>
#include <QString>
#include <stdlib.h>
#include <time.h>

extern bankServer bankserver;

createaccount::createaccount(QWidget *parent) : QDialog(parent),
                                                ui(new Ui::createaccount)
{
    ui->setupUi(this);


    //随机产生账号
    srand((unsigned)time(NULL));//随机数
    string strNumber = "";
    for (int i = 1; i <= 7; i++)
    {
        strNumber += (char)((rand() % 10) + '0');

    }
    ui->login_accountInput->setText(QString::fromStdString(strNumber));


}

createaccount::~createaccount()
{
    delete ui;
}

void createaccount::on_login_backButton_clicked()//返回到bank
{
    bank *bank_windows;
    bank_windows = new bank();
    bank_windows->show();
    this->close();
}

void createaccount::on_login_okButton_clicked()//创建成功
{
    if (ui->login_passwdInput->text() != ui->login_confirmPasswdInput->text())
    {
        QMessageBox::critical(this, tr("错误"), tr("请重新检查你的输入！"), tr("确认"), 0);
        return;//结束函数
    }
    //储存下来
    string strNum = ui->login_accountInput->text().toStdString();
    string strNam = ui->login_nameInput->text().toStdString();
    string strPas = ui->login_passwdInput->text().toStdString();
    string strAdd = ui->login_addressInput->text().toStdString();
    int iTyp = ui->login_typeCombobox->currentIndex();//储种
    double dInt = ui->login_interestInput->text().toDouble();//利息
    string strOpenum=ui->login_employeenumInput->text().toStdString();//员工号
    string strOpe = ui->login_employeeInput->text().toStdString();//员工姓名

    if (bankserver.AccountAdd(strNum, strNam, strPas, strAdd, iTyp, dInt, strOpenum,strOpe))
    {
        QMessageBox::information(this, tr(""), tr("新账户已成功创建！"), tr("确认"), 0);
        bank *bank_windows;
        bank_windows = new bank();
        bank_windows->show();
        this->close();
        delete this;
    }
    else
    {
        ui->login_passwdInput->setText(QString::fromStdString(""));
        ui->login_confirmPasswdInput->setText(QString::fromStdString(""));
        QMessageBox::critical(this, tr("错误"), tr("请重新检查你的输入！"), tr("确认"), 0);
    }
}

void createaccount::on_login_confirmPasswdInput_textEdited(const QString &arg1)
{
    if (arg1 != ui->login_passwdInput->text())
    {
        ui->login_repeatPasswdState->setStyleSheet("color:red;");
        ui->login_repeatPasswdState->setText(QString::fromStdString("× 密码重复不正确"));
    }
    else
    {
        ui->login_repeatPasswdState->setStyleSheet("color:green;");
        ui->login_repeatPasswdState->setText(QString::fromStdString("√"));
    }
}


void createaccount::on_login_typeCombobox_currentIndexChanged(int index)
{
    switch (index)
    {
    case 0:
        ui->login_interestInput->setText(QString::fromStdString("1.98"));
        break;
    case 1:
        ui->login_interestInput->setText(QString::fromStdString("2.25"));
        break;
    case 2:
        ui->login_interestInput->setText(QString::fromStdString("3.5"));
        break;
    default:
        ui->login_interestInput->setText(QString::fromStdString("1.98"));
    }
}
