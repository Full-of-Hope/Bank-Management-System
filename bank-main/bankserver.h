#ifndef BANKSERVER_H
#define BANKSERVER_H

#include "bankdb.h"
#include <string>

using namespace std;

//各种服务函数

class bankServer
{
public:
    bankServer();

    //账户操作
    bool AccountExist(string);
    bool AccountAdd(string, string, string, string, int, double, string,string);
    bool PasswdEdit(string, string);
    bool Login(string, string);
    void ReportLost(time_t);
    void RidLost();

    void Deposit(double, string, string, int, double);
    bool Withdraw(double, string, string);

    //得到临时账户的信息
    string GetName();
    string GetAddress();
    int GetType();
    double GetInterest();
    bool GetLost();
    time_t GetLostTime();
    string GetOperator();
    string GetOperatornum();

    //通过账户索引得到信息
    string GetNumber(int);
    string GetName(int);
    string GetAddress(int);
    int GetType(int);
    double GetInterest(int);
    bool GetLost(int);
    time_t GetLostTime(int);
    string GetOperator(int);
    string GetOperatornum(int);

    //get number
    int GetNumberOfAccounts();
    int GetNumberOfFlows();

    time_t GetTime(int);
    double GetMoney(int);
    int GetOperationType(int);
    string GetFlowOperator(int);


    double GetTotal();
    double GetPrepare(time_t);

    //export the list
    void ExportAccountFile(string);
    void ExportFlowFile(string);

private:
    bankdb db; //定义一个数据库
    string strCurrentNumber; // 当前登录的账号
};

#endif // BANKSERVER_H
