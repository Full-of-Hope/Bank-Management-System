#include "bankmap.h"
#include<algorithm>
using namespace std;

bankmap::bankmap()
{
    setDefault();

}

void bankmap:: setDefault()
{
    for(int i=1;i<=numNode;i++)
    {
        for(int j=1;j<=numNode;j++)
        {
            if(i==j)
            {
                d[i][j].site=0;
            }
            else
            {
                d[i][j].site=INF;
            }
        }

    }
    srand((unsigned)time(NULL));

    for(int i=1;i<=numSide;i++)
    {
        int a=rand()%numNode+1;
        int b=rand()%numNode+1;
        int c=rand()%numSide+1;
        QString beginbank =
        d[a][b].site=min(d[a][b].site,c);
    }
}

void bankmap::printRoad(int i,int j)
{
    if(i==j)
        return;
    if(pass[i][j]==0)
    {
        road=QString::number(i)+"->"+QString::number(j);
    }
}

void bankmap::floyd()
{
    for(int k=1;k<=numNode;k++)
    {
        for(int i=1;i<=numNode;i++)
        {
            for(int j=1;j<=numNode;j++)
            {
                if(d[i][j].site > d[i][k].site+d[k][j].site)
                {
                    d[i][j].site=d[i][k].site +d[k][k].site;
                    pass[i][j]=k;
                }
            }
        }
    }
}

void bankmap::appendOne(QString name)
{

}
/*
void bankmap::GetFile()
{

}

void bankmap::WriteFile()
{

}

void bankmap::mainwork()
{
    //创建职员表
    //name ID ServeScore
}


int bankmap::changemap(bankmap &mp)
{

}

int bankmap::printpath(bankmap mp)
{

}

void bankmap::flody(bankmap mp)
{
    //1.按ID查询
    //2.按姓名查询

}


bankmap bankmap:: initgraph() {
    bankmap mp;
    return mp;
}//图的初始化
int bankmap::locatevex(bankmap c, int v)
{
    return 1;
}
void bankmap::path(bankmap c, int m, int n, int k) {
    //m到n的路径//查找景点在图中//自递归调用函数
}
int bankmap::creatgragh(bankmap& c) {
    return 1;
}
int bankmap::newgraph(bankmap& c) {
    return 1;
}
int bankmap::enarc(bankmap& c) {
    //增加图的一条边。
    return 1;
}
int bankmap::envex(bankmap& c) {
    //增加图的一个顶点
    return 1;
}
int bankmap::delvex(bankmap& c) {
    //删除图的一个顶点。
    return 1;
}
int bankmap::delarc(bankmap& c) {
    //输出图的邻接矩阵
    return 1;
}
void bankmap::printmatrix(bankmap c) {
    //重建图。以图的邻接矩阵存/ /更新图的信息。返回值:
}
void bankmap::seeabout(bankmap c) {
    //查询景点的信息
}
void bankmap::browsecompus(bankmap c) {
    //显示所有景点信息
}
*/
