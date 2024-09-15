#include "economiccalc.h"
#include <QDebug>

economiccalc::economiccalc()
{
    dMoney = 0;
    vFlow.clear();
}


void economiccalc::SetType(int iSetType)
{
    iType = iSetType;
}


void economiccalc::Add(double dMoney, time_t tTime)
{
    //链表Flow
    Flow tmpFlow;
    tmpFlow.tTime = tTime;
    tmpFlow.dMoney = dMoney;
    vFlow.push_back(tmpFlow);
}


void economiccalc::Sub(double dMoney, time_t tTime)
{
    double dMoneyNeeded = dMoney;
    int iTmpPos = vFlow.size() - 1;
    while (dMoneyNeeded > 0 && iTmpPos >= 0)
    {
        if (tTime < vFlow[iTmpPos].tTime)

            iTmpPos--;
        else if (vFlow[iTmpPos].dMoney > dMoneyNeeded)
        {
            vFlow[iTmpPos].dMoney -= dMoneyNeeded;
            dMoneyNeeded = 0;
            iTmpPos--;
        }
        else
        {
            dMoneyNeeded -= vFlow[iTmpPos].dMoney;
            vFlow[iTmpPos].dMoney = 0;
            iTmpPos--;
        }
    }
}
//tTime和预先设定的利率来计算并返回累积利息
double economiccalc::Query(time_t tTime)
{
    double dAns = 0;
    int iTmpTime;
    double dInterest;
    switch (iType)
    {
    case 0: // 1 year
        iTmpTime = 31536000;
        dInterest = 1.98;
        break;
    case 1: // 3 year
        iTmpTime = 94608000;
        dInterest = 2.25;
        break;
    case 2: //5 year
        iTmpTime = 157680000;
        dInterest = 3.5;
        break;
    }

    //计算年利息
    for (int i = 0; i < (int)vFlow.size(); i++)
    {

        int iYieldInterestYear = ((int)difftime(tTime, vFlow[i].tTime)) / iTmpTime;
        double dYieldInterest = vFlow[i].dMoney;
        for (int j = 1; j <= iYieldInterestYear; j++)
            dYieldInterest = dYieldInterest * (1 + (dInterest / 100));
        dAns += dYieldInterest;
    }
    return dAns;
}

//计算 tTime1 和 tTime2 之间产生新利息
double economiccalc::QueryPrepare(time_t tTime2)
{
    time_t tTime1 = time(nullptr);
    double dAns = 0;
    int iTmpTime;
    double dInterest;
    switch (iType)
    {
    case 0: // 1 year
        iTmpTime = 31536000;
        dInterest = 1.98;
        break;
    case 1: // 3 year
        iTmpTime = 94608000;
        dInterest = 2.25;
        break;
    case 2: // 5 year
        iTmpTime = 157680000;
        dInterest = 3.5;
        break;
    }

    for (int i = 0; i < (int)vFlow.size(); i++)
    {
        int iDifftime1 = (int)difftime(tTime1, vFlow[i].tTime);
        int iDifftime2 = (int)difftime(tTime2, vFlow[i].tTime);
        if (((iDifftime1 / iTmpTime) + 1) * iTmpTime <= iDifftime2)
        {
            int iYieldInterestYear = iDifftime2 / iTmpTime;
            double dYieldInterest = vFlow[i].dMoney;
            for (int j = 1; j <= iYieldInterestYear; j++)
                dYieldInterest = dYieldInterest * (1 + (dInterest / 100));
            dAns += dYieldInterest;
        }
    }
    return dAns;
}
