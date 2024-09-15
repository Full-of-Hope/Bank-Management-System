#ifndef ACCOUNTLIST_H
#define ACCOUNTLIST_H

#include <QDialog>

//账户查看

namespace Ui
{
    class accountlist;
}

class accountlist : public QDialog
{
    Q_OBJECT

public:
    explicit accountlist(QWidget *parent = nullptr);
    ~accountlist();

private slots:
    void on_accountlist_backButton_clicked();//返回按钮

    void on_accountlist_searchEdit_textChanged(const QString &arg1);//搜索

    void on_dateEdit_dateChanged(const QDate &date);//改变时间

    void on_accountlist_exportButton_clicked();//导出按钮

private:
    Ui::accountlist *ui;

    void SetDefault();//展示函数
};

#endif // ACCOUNTLIST_H
