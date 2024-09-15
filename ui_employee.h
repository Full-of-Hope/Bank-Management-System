/********************************************************************************
** Form generated from reading UI file 'employee.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEE_H
#define UI_EMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Employee
{
public:
    QTableWidget *Employee_tableWidget;
    QPushButton *Employee_backButton;
    QPushButton *Employee_deleteButton;
    QPushButton *Employee_insertButton;
    QLineEdit *insert_line;
    QLineEdit *delete_line;
    QPushButton *Employee_searchButton;
    QLineEdit *search_line;

    void setupUi(QDialog *Employee)
    {
        if (Employee->objectName().isEmpty())
            Employee->setObjectName(QStringLiteral("Employee"));
        Employee->resize(505, 301);
        Employee_tableWidget = new QTableWidget(Employee);
        Employee_tableWidget->setObjectName(QStringLiteral("Employee_tableWidget"));
        Employee_tableWidget->setGeometry(QRect(10, 10, 201, 261));
        Employee_backButton = new QPushButton(Employee);
        Employee_backButton->setObjectName(QStringLiteral("Employee_backButton"));
        Employee_backButton->setGeometry(QRect(380, 230, 93, 28));
        Employee_deleteButton = new QPushButton(Employee);
        Employee_deleteButton->setObjectName(QStringLiteral("Employee_deleteButton"));
        Employee_deleteButton->setGeometry(QRect(240, 90, 93, 28));
        Employee_insertButton = new QPushButton(Employee);
        Employee_insertButton->setObjectName(QStringLiteral("Employee_insertButton"));
        Employee_insertButton->setGeometry(QRect(240, 40, 93, 28));
        insert_line = new QLineEdit(Employee);
        insert_line->setObjectName(QStringLiteral("insert_line"));
        insert_line->setGeometry(QRect(370, 40, 113, 21));
        delete_line = new QLineEdit(Employee);
        delete_line->setObjectName(QStringLiteral("delete_line"));
        delete_line->setGeometry(QRect(370, 90, 111, 21));
        Employee_searchButton = new QPushButton(Employee);
        Employee_searchButton->setObjectName(QStringLiteral("Employee_searchButton"));
        Employee_searchButton->setGeometry(QRect(240, 150, 93, 28));
        search_line = new QLineEdit(Employee);
        search_line->setObjectName(QStringLiteral("search_line"));
        search_line->setGeometry(QRect(370, 150, 113, 21));

        retranslateUi(Employee);

        QMetaObject::connectSlotsByName(Employee);
    } // setupUi

    void retranslateUi(QDialog *Employee)
    {
        Employee->setWindowTitle(QApplication::translate("Employee", "Dialog", 0));
        Employee_backButton->setText(QApplication::translate("Employee", "\350\277\224\345\233\236", 0));
        Employee_deleteButton->setText(QApplication::translate("Employee", "\345\210\240\351\231\244", 0));
        Employee_insertButton->setText(QApplication::translate("Employee", "\346\217\222\345\205\245", 0));
        Employee_searchButton->setText(QApplication::translate("Employee", "\346\237\245\346\211\276", 0));
    } // retranslateUi

};

namespace Ui {
    class Employee: public Ui_Employee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEE_H
