#ifndef INTERESTNOTE_H
#define INTERESTNOTE_H

#include <QDialog>

namespace Ui {
class interestnote;
}

class interestnote : public QDialog
{
    Q_OBJECT

public:
    explicit interestnote(QWidget *parent = 0);
    ~interestnote();

private slots:
    void on_backButton_2_clicked();

    void on_pushButton_clicked();//导出

    void on_search_Button_clicked();//搜索



private:
    Ui::interestnote *ui;


};

#endif // INTERESTNOTE_H
