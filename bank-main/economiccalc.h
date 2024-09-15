#ifndef ECONOMICCALC_H
#define ECONOMICCALC_H

#include "bankdb.h"
#include <time.h>
#include <vector>

//利息处理

class economiccalc
{
public:
    economiccalc();
    void SetType(int);//类型
    void Add(double, time_t);//加
    void Sub(double, time_t);//减
    double Query(time_t);//查询1
    double QueryPrepare(time_t);//查询2

private:
    int iType; // type

   //链表 flow
    struct Flow
    {
        double dMoney; //money change
                       //+:deposit
                       // -:withdraw
        time_t tTime;  // time of operation
    };
    double dMoney;     // money till some point of time
    vector<Flow> vFlow;
};

#endif // ECONOMICCALC_H
