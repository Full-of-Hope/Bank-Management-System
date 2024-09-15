#ifndef BANK_H
#define BANK_H

#include <QMainWindow>

//首页

//定义命名空间，声明bank 类
QT_BEGIN_NAMESPACE
namespace Ui
{
    class bank;
}
QT_END_NAMESPACE

//继承QMainWindow
class bank : public QMainWindow
{
    Q_OBJECT

public:
    bank(QWidget *parent = nullptr);
    ~bank();//析构函数

private slots://槽函数
    void on_loginButton_clicked();//登录按钮

    void on_createAccountButton_clicked();//创建账户

    void on_exitButton_clicked();//退出

    void on_printAccountButton_clicked();//查看账户


private:
    Ui::bank *ui;
};
#endif // BANK_H
