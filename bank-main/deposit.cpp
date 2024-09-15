#include "deposit.h"
#include "bankserver.h"
#include "options.h"
#include "ui_deposit.h"
#include <QDebug>
#include <QMessageBox>
#include <QPlainTextEdit>

extern bankServer bankserver;

//存款

deposit::deposit(QWidget *parent) : QDialog(parent),
                                    ui(new Ui::deposit)
{
    ui->setupUi(this);
    setWindowFlags(Qt::WindowCloseButtonHint | Qt::MSWindowsFixedSizeDialogHint);

    ui->deposit_moneyInput->setText("0");
    ui->deposit_moneyInput->setFocus();

    resize(600,500);
}

deposit::~deposit()
{
    delete ui;
}

void deposit::on_deposit_okButton_clicked()
{
    switch (QMessageBox::warning(this, NULL,
                                 tr("确认存入") + (ui->deposit_moneyInput->text()) + tr("元吗?"),
                                 tr("确认"), tr("取消"), 0, 1))
    {
    case 0:
        bankserver.Deposit((ui->deposit_moneyInput->text()).toDouble(),
                           (ui->login_employeenumInput->text()).toStdString(),
                           (ui->login_employeeInput->text()).toStdString(),
                           (ui->deposit_typeCombobox->currentIndex()),
                           (ui->deposit_lineEdit->text()).toDouble());
        QMessageBox::information(this, NULL,
                                 tr("成功存入") + (ui->deposit_moneyInput->text()) + tr("元！"),
                                 tr("确认"));
        options *options_windows;
        options_windows = new options();
        options_windows->show();
        this->close();
        break;
    }
}

void deposit::on_deposit_backButton_clicked()
{
    options *options_windows;
    options_windows = new options();
    options_windows->show();
    this->close();
}

void deposit::on_deposit_typeCombobox_currentIndexChanged(int index)
{ switch (index)
    {
    case 0:
        ui->deposit_lineEdit->setText(QString::fromStdString("1.98"));
        break;
    case 1:
        ui->deposit_lineEdit->setText(QString::fromStdString("2.25"));
        break;
    case 2:
        ui->deposit_lineEdit->setText(QString::fromStdString("3.5"));
        break;
    default:
        ui->deposit_lineEdit->setText(QString::fromStdString("1.98"));
    }

}
