#ifndef BANKDB_H
#define BANKDB_H

#include <map>
#include <string>
#include <vector>

//准备工作，对文件、账户的处理

using namespace std;


class bankdb
{
public:
    bankdb();
    //文件操作
    void GetFile();//读
    void WriteFile();//写
    //账户操作
    void AddAccount(string, string, string, string, int, double, string,string);//添加账户
    void EditPasswd(string, string);//修改密码
    void SetLost(string, time_t);//设置挂失
    void RidLost(string);//没有挂失
    bool ExistAccount(string);//判断账户是否存在
    bool CheckAccount(string, string);//检查账户是否于密码匹配

    //账户信息
    string GetName(string);//姓名
    string GetAddress(string);//地址
    int GetType(string);//储种
    double GetInterest(string);//利息
    bool GetLost(string);//是否挂失
    time_t GetLostTime(string);//挂失时间
    string GetOperatornum(string);//员工号
    string GetOperator(string);//员工姓名


    //通过账户数组里的索引得到信息
    string GetNumber(int);
    string GetName(int);
    string GetAddress(int);
    int GetType(int);
    double GetInterest(int);
    bool GetLost(int);
    time_t GetLostTime(int);
    string GetOperator(int);
    string GetOperatornum(int);

    //得到数量
    int GetNumberOfAccounts();
    int GetNumberOfFlows(string);//流水

    //通过账号得到流水信息
    time_t GetTime(string, int);
    double GetMoney(string, int);
    int GetOperationType(string, int);//存款或取款
    string GetOperator(string, int);

    //存款和取款
    void DepositMoney(string, time_t, double, string, string, int, double);
    bool WithdrawMoney(string, time_t, double, string, string);

private:
   //结构体，记录流水账户
    struct flowInfo
    {
        time_t tTime;       // 处理时间
        double dMoney;      // 金额
        int iOperationType; // 操作类型
                            // 0:deposit
                            // 1:withdraw
        string strOperatornum;//员工号
        string strOperator; // 操作员
        int strType;//存款利息
        double strinterest;//利息
    };

   //记录银行账户
    struct accountInfo
    {
        string strNumber;       // 账号
        string strName;         // 姓名
        string strPasswd;       // 密码
        string strAddress;      // 地址
        int iType;              //操作类型
                                //  0:1 year
                                //  1:3 year
                                //  2:5 year
        double dInterest;       // 利息
        bool bLost;             // 是否挂失
        time_t tLostTime;       // 挂失时间
        string strOperatornum;  //员工号
        string strOperator;     // 操作员
        vector<flowInfo> vFlow; // 流水（包括存款和取款）

    };

    vector<accountInfo> vAccount; // 使用数组存储所有帐户信息

    map<string, int> mAccount;

    map<string, double> mMoney;
};

#endif /// BANKDB_H
