#include "bankdb.h"
#include <QDebug>
#include <QDialog>
#include <QMessageBox>
#include <fstream>
#include <map>
#include <time.h>

using namespace std;


bankdb::bankdb()
{
    GetFile();
}

//读取文件
void bankdb::GetFile()
{
    vAccount.clear();
    mAccount.clear();
    mMoney.clear();

    int iNumOfAccounts; // number of accounts
    int iNumOfFlow;     // number of flows

    ifstream iFile("D:\\QT try\\BankSystem-QT-CPP-main\\bank-main\\bankdb.txt");
    if (!iFile)
    {
        iNumOfAccounts = 0;
        WriteFile();
        return;
    }

    iFile >> iNumOfAccounts;

    for (int i = 0; i < iNumOfAccounts; i++)
    {
        accountInfo tmpAccount; // 得到临时记录
        string strTmpString;//账号


        iFile >> tmpAccount.strNumber;
        getline(iFile, strTmpString);
        getline(iFile, tmpAccount.strName);
        getline(iFile, tmpAccount.strPasswd);
        getline(iFile, tmpAccount.strAddress);
        iFile >> tmpAccount.iType >> tmpAccount.dInterest >> tmpAccount.bLost >> tmpAccount.tLostTime;
        getline(iFile, strTmpString);
        getline(iFile, tmpAccount.strOperatornum);
        getline(iFile,tmpAccount.strOperator);
        iFile >> iNumOfFlow;

        mMoney[tmpAccount.strNumber] = 0;

        for (int j = 0; j < iNumOfFlow; j++)
        {
            flowInfo tmpFlow;

            iFile >> tmpFlow.tTime >> tmpFlow.dMoney >> tmpFlow.iOperationType;
            getline(iFile, strTmpString);
            getline(iFile, tmpFlow.strOperator);

            if (tmpFlow.iOperationType == 0) // deposit
                mMoney[tmpAccount.strNumber] += tmpFlow.dMoney;
            else // withdraw
                mMoney[tmpAccount.strNumber] -= tmpFlow.dMoney;
            tmpAccount.vFlow.push_back(tmpFlow);
        }

        mAccount[tmpAccount.strNumber] = vAccount.size();

        vAccount.push_back(tmpAccount);
    }
}

//写入文件
void bankdb::WriteFile()
{
    int iNumOfAccounts = vAccount.size();//账户数量

    ofstream oFile("D:\\QT try\\BankSystem-QT-CPP-main\\bank-main\\bankdb.txt");

    oFile << iNumOfAccounts << "\n";

    for (int i = 0; i < iNumOfAccounts; i++)
    {
        accountInfo tmpAccount = vAccount[i];

        int iNumOfFlow = tmpAccount.vFlow.size();

        oFile << tmpAccount.strNumber << "\n"  //账号
              << tmpAccount.strName << "\n"    //姓名
              << tmpAccount.strPasswd << "\n"  //密码
              << tmpAccount.strAddress << "\n" //地址
              << tmpAccount.iType << "\n"      //储种
              << tmpAccount.dInterest << "\n"  //利息
              << tmpAccount.bLost << "\n"      //是否挂失
              << tmpAccount.tLostTime << "\n"  //挂失
              << tmpAccount.strOperatornum << "\n" //员工号
              << tmpAccount.strOperator << "\n"  //操作员
              << iNumOfFlow << "\n";           //流水数量

        for (int j = 0; j < iNumOfFlow; j++)
        {
            flowInfo tmpFlow = tmpAccount.vFlow[j];

            oFile << tmpFlow.tTime << "\n"            //流水时间
                  << tmpFlow.dMoney << "\n"           //金额
                  << tmpFlow.iOperationType << "\n"   //类型：存款0；取款1
                  << tmpFlow.strOperator << "\n";     //操作员
        }
    }
}

//添加账户
void bankdb::AddAccount(string strNum, string strNam, string strPas, string strAdd, int iTyp, double dInt, string strOpenum,string strOpe)
{
    accountInfo tmpAccountInfo;
    tmpAccountInfo.strNumber = strNum;
    tmpAccountInfo.strName = strNam;
    tmpAccountInfo.strPasswd = strPas;
    tmpAccountInfo.strAddress = strAdd;
    tmpAccountInfo.iType = iTyp;
    tmpAccountInfo.dInterest = dInt;
    tmpAccountInfo.bLost = false;
    tmpAccountInfo.tLostTime = time(nullptr);
    tmpAccountInfo.strOperatornum = strOpenum;
    tmpAccountInfo.strOperator=strOpe;
    vAccount.push_back(tmpAccountInfo);
    vAccount[vAccount.size() - 1].vFlow.clear();


    WriteFile();
    GetFile();
}

//修改密码
void bankdb::EditPasswd(string strNum, string strPas)
{
    vAccount[mAccount[strNum]].strPasswd = strPas;
    WriteFile();
}

//设置挂失
void bankdb::SetLost(string strNum, time_t tTim)
{
    vAccount[mAccount[strNum]].bLost = true;
    vAccount[mAccount[strNum]].tLostTime = tTim;
    WriteFile();
}
//取消挂失
void bankdb::RidLost(string strNum)
{
    vAccount[mAccount[strNum]].bLost = false;
    vAccount[mAccount[strNum]].tLostTime = 0;
    WriteFile();
}

//判断账户是否存在
bool bankdb::ExistAccount(string strNumber)
{

    map<string, int>::iterator iter;
    iter = mAccount.find(strNumber);
    return (iter != mAccount.end());
}

//检查账户
bool bankdb::CheckAccount(string strNumber, string strPasswd)
{
    if (!ExistAccount(strNumber))
        return false;
    
    return (vAccount[mAccount[strNumber]].strPasswd == strPasswd);
}


string bankdb::GetName(string strNumber)
{
    return vAccount[mAccount[strNumber]].strName;
}


string bankdb::GetAddress(string strNumber)
{
    return vAccount[mAccount[strNumber]].strAddress;
}


int bankdb::GetType(string strNumber)
{
    return vAccount[mAccount[strNumber]].iType;
}


double bankdb::GetInterest(string strNumber)
{
    return vAccount[mAccount[strNumber]].dInterest;
}


bool bankdb::GetLost(string strNumber)
{
    return vAccount[mAccount[strNumber]].bLost;
}


time_t bankdb::GetLostTime(string strNumber)
{
    return vAccount[mAccount[strNumber]].tLostTime;
}

string bankdb::GetOperatornum(string strNum)
{
    return vAccount[mAccount[strNum]].strOperatornum;
}
string bankdb::GetOperator(string strNumber)
{
    return vAccount[mAccount[strNumber]].strOperator;
}



string bankdb::GetNumber(int iNum)
{
    return vAccount[iNum].strNumber;
}


string bankdb::GetName(int iNum)
{
    return vAccount[iNum].strName;
}


string bankdb::GetAddress(int iNum)
{
    return vAccount[iNum].strAddress;
}


int bankdb::GetType(int iNum)
{
    return vAccount[iNum].iType;
}


double bankdb::GetInterest(int iNum)
{
    return vAccount[iNum].dInterest;
}


bool bankdb::GetLost(int iNum)
{
    return vAccount[iNum].bLost;
}


time_t bankdb::GetLostTime(int iNum)
{
    return vAccount[iNum].tLostTime;
}


string bankdb::GetOperator(int iNum)
{
    return vAccount[iNum].strOperator;
}


string bankdb::GetOperatornum(int iNum)
{
    return vAccount[iNum].strOperatornum;
}

int bankdb::GetNumberOfAccounts()
{
    return vAccount.size();
}


int bankdb::GetNumberOfFlows(string strNumber)
{
    return vAccount[mAccount[strNumber]].vFlow.size();
}


time_t bankdb::GetTime(string strNumber, int iFlow)
{
    return vAccount[mAccount[strNumber]].vFlow[iFlow].tTime;
}


double bankdb::GetMoney(string strNumber, int iFlow)
{
    return vAccount[mAccount[strNumber]].vFlow[iFlow].dMoney;
}


int bankdb::GetOperationType(string strNumber, int iFlow)
{
    return vAccount[mAccount[strNumber]].vFlow[iFlow].iOperationType;
}


string bankdb::GetOperator(string strNumber, int iFlow)
{
    return vAccount[mAccount[strNumber]].vFlow[iFlow].strOperator;
}

//存款金额
void bankdb::DepositMoney(string strNumber, time_t tTim, double dMon, string strOpenum, string strOpe, int Type, double interest)
{
    flowInfo tmpFlowInfo;
    tmpFlowInfo.tTime = tTim;
    tmpFlowInfo.dMoney = dMon;
    tmpFlowInfo.iOperationType = 0;
    tmpFlowInfo.strOperatornum=strOpenum;
    tmpFlowInfo.strOperator = strOpe;
    tmpFlowInfo.strType=Type;
    tmpFlowInfo.strinterest=interest;
    vAccount[mAccount[strNumber]].vFlow.push_back(tmpFlowInfo);
    mMoney[strNumber] += dMon;
    WriteFile();
    GetFile();
}

//取款金额
bool bankdb::WithdrawMoney(string strNumber, time_t tTim, double dMon, string strOpenum, string strOpe)
{
    if (dMon > mMoney[strNumber])
    {
        return false;
    }
    flowInfo tmpFlowInfo;
    tmpFlowInfo.tTime = tTim;
    tmpFlowInfo.dMoney = dMon;
    tmpFlowInfo.iOperationType = 1;
    tmpFlowInfo.strOperatornum = strOpenum;
    tmpFlowInfo.strOperator = strOpe;
    vAccount[mAccount[strNumber]].vFlow.push_back(tmpFlowInfo);
    mMoney[strNumber] -= dMon;
    WriteFile();
    GetFile();
    return true;
}
