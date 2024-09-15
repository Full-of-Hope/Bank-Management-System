/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *login_accountLabel;
    QLineEdit *login_accountInput;
    QLabel *login_accountStateLabel;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *login_passwdLabel;
    QLineEdit *login_passwdInput;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *login_okButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *login_backButton;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(276, 270);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(login->sizePolicy().hasHeightForWidth());
        login->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(login);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(login);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        login_accountLabel = new QLabel(widget);
        login_accountLabel->setObjectName(QStringLiteral("login_accountLabel"));
        QFont font;
        font.setPointSize(16);
        login_accountLabel->setFont(font);

        horizontalLayout->addWidget(login_accountLabel);

        login_accountInput = new QLineEdit(widget);
        login_accountInput->setObjectName(QStringLiteral("login_accountInput"));
        login_accountInput->setMaximumSize(QSize(16777211, 16777215));

        horizontalLayout->addWidget(login_accountInput);


        verticalLayout->addLayout(horizontalLayout);

        login_accountStateLabel = new QLabel(widget);
        login_accountStateLabel->setObjectName(QStringLiteral("login_accountStateLabel"));
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font1.setBold(true);
        font1.setWeight(75);
        login_accountStateLabel->setFont(font1);

        verticalLayout->addWidget(login_accountStateLabel);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        login_passwdLabel = new QLabel(widget);
        login_passwdLabel->setObjectName(QStringLiteral("login_passwdLabel"));
        login_passwdLabel->setFont(font);

        horizontalLayout_2->addWidget(login_passwdLabel);

        login_passwdInput = new QLineEdit(widget);
        login_passwdInput->setObjectName(QStringLiteral("login_passwdInput"));
        login_passwdInput->setEchoMode(QLineEdit::Password);
        login_passwdInput->setCursorMoveStyle(Qt::LogicalMoveStyle);
        login_passwdInput->setClearButtonEnabled(false);

        horizontalLayout_2->addWidget(login_passwdInput);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        login_okButton = new QPushButton(widget);
        login_okButton->setObjectName(QStringLiteral("login_okButton"));
        QFont font2;
        font2.setPointSize(18);
        login_okButton->setFont(font2);

        horizontalLayout_3->addWidget(login_okButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        login_backButton = new QPushButton(widget);
        login_backButton->setObjectName(QStringLiteral("login_backButton"));
        login_backButton->setFont(font2);

        horizontalLayout_3->addWidget(login_backButton);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        verticalLayout_2->addWidget(widget);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "\347\231\273\345\275\225", 0));
        login_accountLabel->setText(QApplication::translate("login", "\350\264\246\345\217\267", 0));
        login_accountInput->setInputMask(QString());
        login_accountStateLabel->setText(QString());
        login_passwdLabel->setText(QApplication::translate("login", "\345\257\206\347\240\201", 0));
        login_okButton->setText(QApplication::translate("login", "\347\241\256\350\256\244", 0));
        login_backButton->setText(QApplication::translate("login", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
