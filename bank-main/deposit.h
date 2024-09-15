#ifndef DEPOSIT_H
#define DEPOSIT_H

#include <QDialog>

//存款

namespace Ui
{
    class deposit;
}

class deposit : public QDialog
{
    Q_OBJECT

public:
    explicit deposit(QWidget *parent = nullptr);
    ~deposit();

private slots:
    void on_deposit_okButton_clicked();//确定存款

    void on_deposit_backButton_clicked();//取消

    void on_deposit_typeCombobox_currentIndexChanged(int index);//储种选择

private:
    Ui::deposit *ui;
};

#endif // DEPOSIT_H
