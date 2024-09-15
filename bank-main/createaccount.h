#ifndef CREATEACCOUNT_H
#define CREATEACCOUNT_H

#include <QDialog>

//创建账户（第一次）

namespace Ui
{
    class createaccount;
}

class createaccount : public QDialog
{
    Q_OBJECT

public:
    explicit createaccount(QWidget *parent = nullptr);
    ~createaccount();

private slots:
    void on_login_backButton_clicked();//确定

    void on_login_okButton_clicked();//取消

    void on_login_confirmPasswdInput_textEdited(const QString &arg1);//确认密码

    void on_login_typeCombobox_currentIndexChanged(int index);//利息选择

private:
    Ui::createaccount *ui;
};

#endif // CREATEACCOUNT_H
