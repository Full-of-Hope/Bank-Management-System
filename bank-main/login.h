#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

//登录

namespace Ui
{
    class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_login_okButton_clicked();//确定

    void on_login_backButton_clicked();//取消

private:
    Ui::login *ui;
};

#endif // LOGIN_H
