#include "bank.h"
#include "bankserver.h"
#include <QApplication>
#include <QDebug>


bankServer bankserver;
string shijian;
string sj;
int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  bank w;//声明对象
  w.show();

  return a.exec();//进入事件循环
}
