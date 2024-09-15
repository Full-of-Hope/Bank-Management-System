#ifndef EDITPASSWD_H
#define EDITPASSWD_H

#include <QDialog>

//修改密码

namespace Ui
{
    class editpasswd;
}

class editpasswd : public QDialog
{
    Q_OBJECT

public:
    explicit editpasswd(QWidget *parent = nullptr);
    ~editpasswd();

private slots:
    void on_login_backButton_clicked();

    void on_login_okButton_clicked();

    void on_login_confirmPasswdInput_textEdited(const QString &arg1);//第二次输入密码

private:
    Ui::editpasswd *ui;
};

#endif // EDITPASSWD_H
