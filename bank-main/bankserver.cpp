#include "bankserver.h"
#include "bankdb.h"
#include "economiccalc.h"
#include <fstream>
#include <QDebug>

bankServer::bankServer()
{
}

bool bankServer::AccountExist(string strNumber)
{
    return (db.ExistAccount(strNumber));
}


bool bankServer::AccountAdd(string strNum, string strNam, string strPas, string strAdd, int iTyp, double dInt, string strOpenum,string strOpe)
{
    if (strNam != "" &&
        strPas != "" &&
        strAdd != "" &&
        strOpe != "" &&
        strOpenum != ""
        )
    {
        db.AddAccount(strNum, strNam, strPas, strAdd, iTyp, dInt, strOpenum,strOpe);
        return true;
    }
    return false;
}



bool bankServer::PasswdEdit(string strOldPasswd, string strPasswd)
{
    if (!db.CheckAccount(strCurrentNumber, strOldPasswd))
    {
        return false;
    }
    db.EditPasswd(strCurrentNumber, strPasswd);
    return true;
}


bool bankServer::Login(string strNumber, string strPasswd)
{
    if (!db.CheckAccount(strNumber, strPasswd))
        return false;

    strCurrentNumber = strNumber; /// set the account which has login
    return true;
}


void bankServer::ReportLost(time_t tTime)
{
    db.SetLost(strCurrentNumber, tTime);
}

void bankServer::RidLost()
{
    db.RidLost(strCurrentNumber);
}


void bankServer::Deposit(double dMoney, string strOpenum,string strOpe, int Type, double interest)
{
    time_t tTime = time(NULL);
    db.DepositMoney(strCurrentNumber, tTime, dMoney, strOpenum, strOpe, Type, interest);
}


bool bankServer::Withdraw(double dMoney, string strOpenum,string strOpe)
{
    time_t tTime = time(NULL);
    return db.WithdrawMoney(strCurrentNumber, tTime, dMoney, strOpenum,strOpe);
}


string bankServer::GetName()
{
    return db.GetName(strCurrentNumber);
}

string bankServer::GetAddress()
{
    return db.GetAddress(strCurrentNumber);
}


int bankServer::GetType()
{
    return db.GetType(strCurrentNumber);
}


double bankServer::GetInterest()
{
    return db.GetInterest(strCurrentNumber);
}


bool bankServer::GetLost()
{
    return db.GetLost(strCurrentNumber);
}


time_t bankServer::GetLostTime()
{
    return db.GetLostTime(strCurrentNumber);
}


string bankServer::GetOperator()
{
    return db.GetOperator(strCurrentNumber);
}

string bankServer::GetOperatornum()
{
    return db.GetOperatornum(strCurrentNumber);
}


string bankServer::GetNumber(int iNum)
{
    return db.GetNumber(iNum);
}


string bankServer::GetName(int iNum)
{
    return db.GetName(iNum);
}


string bankServer::GetAddress(int iNum)
{
    return db.GetAddress(iNum);
}


int bankServer::GetType(int iNum)
{
    return db.GetType(iNum);
}


double bankServer::GetInterest(int iNum)
{
    return db.GetInterest(iNum);
}


bool bankServer::GetLost(int iNum)
{
    return db.GetLost(iNum);
}


time_t bankServer::GetLostTime(int iNum)
{
    return db.GetLostTime(iNum);
}


string bankServer::GetOperator(int iNum)
{
    return db.GetOperator(iNum);
}

string bankServer::GetOperatornum(int iNum)
{
    return db.GetOperatornum(iNum);
}

int bankServer::GetNumberOfAccounts()
{
    return db.GetNumberOfAccounts();
}


int bankServer::GetNumberOfFlows()
{
    return db.GetNumberOfFlows(strCurrentNumber);
}


time_t bankServer::GetTime(int iFlow)
{
    return db.GetTime(strCurrentNumber, iFlow);
}

double bankServer::GetMoney(int iFlow)
{
    return db.GetMoney(strCurrentNumber, iFlow);
}


int bankServer::GetOperationType(int iFlow)
{
    return db.GetOperationType(strCurrentNumber, iFlow);
}

string bankServer::GetFlowOperator(int iFlow)
{
    return db.GetOperator(strCurrentNumber, iFlow);
}

//总金额
double bankServer::GetTotal()
{
    economiccalc Ecocalc;
    Ecocalc.SetType(GetType()); // boot up a calculate service
    
    for (int i = 0; i < GetNumberOfFlows(); i++)
    {
        if (GetOperationType(i) == 0) // deposit
            Ecocalc.Add(GetMoney(i), GetTime(i));
        else // withdraw
            Ecocalc.Sub(GetMoney(i), GetTime(i));
    }

    return Ecocalc.Query(time(nullptr));
}

//备金
double bankServer::GetPrepare(time_t iDay)
{
    double dAns = 0; // store the ans

    time_t tTime1 = time(nullptr);
    time_t tTime2 = iDay;

    if (tTime1 >= tTime2) // illegal time
        return 0;

    for (int k = 0; k < GetNumberOfAccounts(); k++) // go over all the accounts
    {
        strCurrentNumber = GetNumber(k);

        economiccalc Ecocalc; // boot up a calculate service
        
        Ecocalc.SetType(GetType());
        
        for (int i = 0; i < GetNumberOfFlows(); i++)
        {
            if (GetOperationType(i) == 0) //deposit
                Ecocalc.Add(GetMoney(i), GetTime(i));
            else // withdraw
                Ecocalc.Sub(GetMoney(i), GetTime(i));
        }

        dAns += (Ecocalc.QueryPrepare(tTime2));
    }

    return dAns;
}

//导出
void bankServer::ExportAccountFile(string strFileName)
{
    ofstream oFile(strFileName, ios::trunc);

    oFile<<"<html>\n<body>\n<table border='1'>\n<tr>\n<th>账号</th>\n<th>姓名</th>\n<th>地址</th>\n<th>储种</th>\n"
         <<"<th>利息</th>\n<th>是否挂失</th>\n<th>操作员</th>\n</tr>\n";

    int iNumberOfAccounts = GetNumberOfAccounts();

    for (int i = 0; i < iNumberOfAccounts; i++)
    {
        int iTmpType = GetType(i);
        bool bLost = GetLost(i);

        string strTypeString; // type to output
        string strInterestString; // interest to output
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

        string strLostString;
        if (bLost)
        {

            time_t tTime = GetLostTime(i);

            char szTime[100] = {'\0'};

            tm *pTm = new tm;
            localtime_s(pTm, &tTime);
            
            pTm->tm_year += 1900;
            pTm->tm_mon += 1;

            sprintf_s(szTime, "%04d年%02d月%02d日 %02d:%02d:%02d",
                      pTm->tm_year,
                      pTm->tm_mon,
                      pTm->tm_mday,
                      pTm->tm_hour,
                      pTm->tm_min,
                      pTm->tm_sec);

            strLostString = szTime;

            delete pTm;
            pTm = NULL;
        }
        else
        {
            strLostString = "否";
        }

        oFile<<"<tr>\n";
        oFile<<"<td>"<<GetNumber(i)<<"</td>\n";
        oFile<<"<td>"<<GetName(i)<<"</td>\n";
        oFile<<"<td>"<<GetAddress(i)<<"</td>\n";
        oFile<<"<td>"<<strTypeString<<"</td>\n";
        oFile<<"<td>"<<strInterestString<<"</td>\n";
        oFile<<"<td>"<<strLostString<<"</td>\n";
        oFile<<"<td>"<<GetOperator(i)<<"</td>\n";
        oFile<<"</tr>\n";
    }


    oFile<<"</table>\n</body>\n</html>\n";
}


void bankServer::ExportFlowFile(string strFileName)
{
    ofstream oFile(strFileName, ios::trunc);

    oFile<<"<html>\n<body>\n<table border='1'>\n<tr>\n<th>操作时间</th>\n<th>操作类型</th>\n<th>金额</th>\n<th>操作员</th>\n</tr>\n";

    int iNumberOfFlows = GetNumberOfFlows();

    for (int i = 0; i < iNumberOfFlows; i++)
    {
        int iTmpType = GetOperationType(i);
        time_t tTime = GetTime(i);
        
        string strTypeString; // type to output

        switch (iTmpType)
        {

        case 0:
            strTypeString = "存款";
            break;
        case 1:
            strTypeString = "取款";
            break;
        }
        
        //transform the format of date
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
        //qDebug()<<"here";

        delete pTm;
        pTm = NULL;

        oFile<<"<tr>\n";
        oFile<<"<td>"<<strTime<<"</td>\n";
        oFile<<"<td>"<<strTypeString<<"</td>\n";
        oFile<<"<td>"<<GetMoney(i)<<"</td>\n";
        oFile<<"<td>"<<GetFlowOperator(i)<<"</td>\n";
        oFile<<"</tr>\n";
    }

    oFile<<"</table>\n</body>\n</html>\n";
}
