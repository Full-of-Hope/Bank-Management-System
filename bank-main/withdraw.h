#ifndef WITHDRAW_H
#define WITHDRAW_H

#include <QDialog>

//取款

namespace Ui
{
    class withdraw;
}

class withdraw : public QDialog
{
    Q_OBJECT

public:
    explicit withdraw(QWidget *parent = nullptr);
    ~withdraw();


private slots:
    void on_deposit_backButton_clicked();//确定

    void on_deposit_okButton_clicked();//取消

private:
    Ui::withdraw *ui;

};

#endif // WITHDRAW_H
