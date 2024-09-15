#include "interestnote.h"
#include "ui_interestnote.h"
#include"bank.h"
#include"bankserver.h"
#include"options.h"
#include <QDate>
#include <QDateTime>
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QTableView>
#include <stdio.h>
#include<ctime>

extern bankServer bankserver;
extern string shijian;
extern string sj;
interestnote::interestnote(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::interestnote)
{
    ui->setupUi(this);

    resize(1000,600);
}

interestnote::~interestnote()
{
    delete ui;
}


void interestnote::on_backButton_2_clicked()
{
    options*options_windows;
    options_windows = new options();
    options_windows->show();
    this->close();
}

void interestnote::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,
                                                    tr("导出"),
                                                    "",
                                                    tr("超文本标记语言文件 (*.html)"));
    if (!fileName.isNull())
    {
        //fileName是文件名
        bankserver.ExportFlowFile(fileName.toStdString());
        QMessageBox::information(this, NULL,
                                 tr("导出成功"),
                                 tr("确认"));
    }
}



void interestnote::on_search_Button_clicked()
{
    string strSearchString =ui->search_lineEdit->text().toStdString();

    QStandardItemModel *model = new QStandardItemModel(this);
    ui->interestnote_tableView->setModel(model);

    model->setHorizontalHeaderItem(0, new QStandardItem("账号"));
    model->setHorizontalHeaderItem(1, new QStandardItem("姓名"));
    model->setHorizontalHeaderItem(2, new QStandardItem("储种"));
    model->setHorizontalHeaderItem(3, new QStandardItem("利息"));
    model->setHorizontalHeaderItem(4, new QStandardItem("本金"));
    model->setHorizontalHeaderItem(5, new QStandardItem("起息时间"));
    model->setHorizontalHeaderItem(6, new QStandardItem("取款金额"));
    model->setHorizontalHeaderItem(7, new QStandardItem("取款时间"));
    model->setHorizontalHeaderItem(8, new QStandardItem("员工号"));
    model->setHorizontalHeaderItem(9, new QStandardItem("操作员"));

    ui->interestnote_tableView->setColumnWidth(0, 150);
    ui->interestnote_tableView->setColumnWidth(1, 100);
    ui->interestnote_tableView->setColumnWidth(2, 100);
    ui->interestnote_tableView->setColumnWidth(3, 80);
    ui->interestnote_tableView->setColumnWidth(4, 100);
    ui->interestnote_tableView->setColumnWidth(5, 300);
    ui->interestnote_tableView->setColumnWidth(6, 100);
    ui->interestnote_tableView->setColumnWidth(7, 300);
    ui->interestnote_tableView->setColumnWidth(8, 80);
    ui->interestnote_tableView->setColumnWidth(9, 100);

    ui->interestnote_tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);//编辑触发器
    ui->interestnote_tableView->setSelectionBehavior(QAbstractItemView::SelectRows);//选择行为，选择整行

    //int iNumberOfFlows = bankserver.GetNumberOfFlows();

    int iNumberOfFlows = bankserver.GetNumberOfAccounts();
    for (int i = 0; i < iNumberOfFlows; i++)
    {

            int iItemsFinded = 1;
            int iTmpType = bankserver.GetType(i);
            time_t tTime = bankserver.GetTime(i);

            string strTypeString, strInterestString;
            switch (iTmpType)
            {
            case 0:
                strTypeString = "一年期";
                strInterestString = "1.98";
                break;
            case 1:
                strTypeString = "三年期";
                strInterestString = "2.25";
                break;
            case 2:
                strTypeString = "五年期";
                strInterestString = "3.5";
                break;
            }

            string strTime;
            char szTime[100] = {'\0'};

            tm *pTm = new tm;
            localtime_s(pTm, &tTime);
            //pTm = localtime(&time_t_time);
            pTm->tm_year += 1900;
            pTm->tm_mon += 1;

            sprintf_s(szTime, "%04d年%02d月%02d日 %02d:%02d:%02d",
                      pTm->tm_year,
                      pTm->tm_mon,
                      pTm->tm_mday,
                      pTm->tm_hour,
                      pTm->tm_min,
                      pTm->tm_sec);

            strTime = szTime;

            delete pTm;
            pTm = NULL;




            if (bankserver.GetNumber(i).find(strSearchString) != string::npos ||
                                bankserver.GetName(i).find(strSearchString) != string::npos ||
                                strTypeString.find(strSearchString) != string::npos ||
                                strInterestString.find(strSearchString) != string::npos ||
                                bankserver.GetMoney(i) == ui->search_lineEdit->text().toDouble() ||
                                bankserver.GetOperatornum(i).find(strSearchString) != string::npos||
                                bankserver.GetOperator(i).find(strSearchString) != string::npos||
                                strTime.find(strSearchString) != string::npos)

            {
                iItemsFinded++;

                model->setItem(iItemsFinded-2, 0, new QStandardItem(QString::fromStdString(bankserver.GetNumber(i))));//账号
                model->setItem(iItemsFinded-2, 1, new QStandardItem(QString::fromStdString(bankserver.GetName(i))));//姓名
                model->setItem(iItemsFinded-2, 2, new QStandardItem(QString::fromStdString(strTypeString)));//储种
                model->setItem(iItemsFinded-2, 3, new QStandardItem(QString::fromStdString(strInterestString)));//利息
                model->setItem(iItemsFinded-2, 4, new QStandardItem(QString::number(bankserver.GetTotal()+bankserver.GetMoney(1))));//本金
                model->setItem(iItemsFinded-2, 5, new QStandardItem(QString::fromStdString(sj)));//存款时间
                model->setItem(iItemsFinded-2, 6, new QStandardItem(QString::number(bankserver.GetMoney(1))));//取款金额
                model->setItem(iItemsFinded-2, 7, new QStandardItem(QString::fromStdString(shijian)));//取款时间
                model->setItem(iItemsFinded-2, 8, new QStandardItem(QString::fromStdString(bankserver.GetOperatornum(i))));//员工号
                model->setItem(iItemsFinded-2, 9, new QStandardItem(QString::fromStdString(bankserver.GetOperator(i))));//员工姓名


            }

    }


}
