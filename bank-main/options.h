#ifndef OPTIONS_H
#define OPTIONS_H

#include <QDialog>
#include<QTime>

//选择页面（登陆后）

namespace Ui
{
    class options;
}

class options : public QDialog
{
    Q_OBJECT

public:
    explicit options(QWidget *parent = nullptr);
    ~options();
//    int deposite_choose=3;
//    int withdraw_choose=3;
    QTime time;


private slots:


    void on_options_depositButton_clicked();//存款

    void on_options_passwdButton_clicked();//修改密码

    void on_options_lostButton_clicked();//挂失

    void on_options_withdrawButton_clicked();//取款

    void on_options_flowButton_clicked();//查看流水

    void on_options_interestnoteButton_clicked();//利息单

private:
    Ui::options *ui;
};

#endif // OPTIONS_H
