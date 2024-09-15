#ifndef FLOWLIST_H
#define FLOWLIST_H

#include <QDialog>
#include<string>
using namespace std;
//流水账单
extern string shijian;
extern string sj;
namespace Ui
{
    class flowlist;
}

class flowlist : public QDialog
{
    Q_OBJECT

public:
    explicit flowlist(QWidget *parent = nullptr);
    ~flowlist();

private slots:
    void on_accountlist_backButton_clicked();

    void on_accountlist_searchEdit_textChanged(const QString &arg1);//搜索

    void on_accountlist_exportButton_clicked();//导出

private:
    Ui::flowlist *ui;

    void SetDefault();//展示
};

#endif // FLOWLIST_H
