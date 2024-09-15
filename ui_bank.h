/********************************************************************************
** Form generated from reading UI file 'bank.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANK_H
#define UI_BANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bank
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_8;
    QPushButton *loginButton;
    QSpacerItem *verticalSpacer_6;
    QPushButton *createAccountButton;
    QSpacerItem *verticalSpacer_4;
    QPushButton *printAccountButton;
    QSpacerItem *verticalSpacer_5;
    QPushButton *exitButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QMainWindow *bank)
    {
        if (bank->objectName().isEmpty())
            bank->setObjectName(QStringLiteral("bank"));
        bank->resize(234, 490);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bank->sizePolicy().hasHeightForWidth());
        bank->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(bank);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);

        loginButton = new QPushButton(widget);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        QFont font1;
        font1.setPointSize(18);
        loginButton->setFont(font1);

        verticalLayout->addWidget(loginButton);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        createAccountButton = new QPushButton(widget);
        createAccountButton->setObjectName(QStringLiteral("createAccountButton"));
        createAccountButton->setFont(font1);

        verticalLayout->addWidget(createAccountButton);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        printAccountButton = new QPushButton(widget);
        printAccountButton->setObjectName(QStringLiteral("printAccountButton"));
        printAccountButton->setFont(font1);

        verticalLayout->addWidget(printAccountButton);

        verticalSpacer_5 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        exitButton = new QPushButton(widget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setFont(font1);
        exitButton->setMouseTracking(false);

        verticalLayout->addWidget(exitButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_2->addWidget(widget);

        bank->setCentralWidget(centralwidget);

        retranslateUi(bank);

        loginButton->setDefault(true);


        QMetaObject::connectSlotsByName(bank);
    } // setupUi

    void retranslateUi(QMainWindow *bank)
    {
        bank->setWindowTitle(QApplication::translate("bank", "\351\223\266\350\241\214\347\263\273\347\273\237", 0));
        label->setText(QApplication::translate("bank", "\346\254\242\350\277\216\357\274\201", 0));
        loginButton->setText(QApplication::translate("bank", "\347\231\273\345\275\225", 0));
        createAccountButton->setText(QApplication::translate("bank", "\345\210\233\345\273\272\350\264\246\346\210\267", 0));
        printAccountButton->setText(QApplication::translate("bank", "\350\264\246\346\210\267\346\237\245\347\234\213", 0));
        exitButton->setText(QApplication::translate("bank", "\351\200\200\345\207\272\347\263\273\347\273\237", 0));
    } // retranslateUi

};

namespace Ui {
    class bank: public Ui_bank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANK_H
