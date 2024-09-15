/********************************************************************************
** Form generated from reading UI file 'editpasswd.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPASSWD_H
#define UI_EDITPASSWD_H

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

class Ui_editpasswd
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLabel *login_passwdLabel_old;
    QLineEdit *login_passwdInput_old;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *login_passwdLabel;
    QLineEdit *login_passwdInput;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *login_confirmPasswdLabel;
    QLineEdit *login_confirmPasswdInput;
    QLabel *login_repeatPasswdState;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *login_okButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *login_backButton;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *editpasswd)
    {
        if (editpasswd->objectName().isEmpty())
            editpasswd->setObjectName(QStringLiteral("editpasswd"));
        editpasswd->resize(279, 292);
        verticalLayout_2 = new QVBoxLayout(editpasswd);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(editpasswd);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        login_passwdLabel_old = new QLabel(widget);
        login_passwdLabel_old->setObjectName(QStringLiteral("login_passwdLabel_old"));
        QFont font;
        font.setPointSize(16);
        login_passwdLabel_old->setFont(font);

        horizontalLayout->addWidget(login_passwdLabel_old);

        login_passwdInput_old = new QLineEdit(widget);
        login_passwdInput_old->setObjectName(QStringLiteral("login_passwdInput_old"));
        login_passwdInput_old->setFocusPolicy(Qt::StrongFocus);
        login_passwdInput_old->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(login_passwdInput_old);


        verticalLayout->addLayout(horizontalLayout);

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
        login_passwdInput->setFocusPolicy(Qt::StrongFocus);
        login_passwdInput->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(login_passwdInput);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        login_confirmPasswdLabel = new QLabel(widget);
        login_confirmPasswdLabel->setObjectName(QStringLiteral("login_confirmPasswdLabel"));
        login_confirmPasswdLabel->setFont(font);

        horizontalLayout_3->addWidget(login_confirmPasswdLabel);

        login_confirmPasswdInput = new QLineEdit(widget);
        login_confirmPasswdInput->setObjectName(QStringLiteral("login_confirmPasswdInput"));
        login_confirmPasswdInput->setEchoMode(QLineEdit::Password);
        login_confirmPasswdInput->setClearButtonEnabled(false);

        horizontalLayout_3->addWidget(login_confirmPasswdInput);


        verticalLayout->addLayout(horizontalLayout_3);

        login_repeatPasswdState = new QLabel(widget);
        login_repeatPasswdState->setObjectName(QStringLiteral("login_repeatPasswdState"));
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font1.setBold(true);
        font1.setWeight(75);
        login_repeatPasswdState->setFont(font1);

        verticalLayout->addWidget(login_repeatPasswdState);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        login_okButton = new QPushButton(widget);
        login_okButton->setObjectName(QStringLiteral("login_okButton"));
        QFont font2;
        font2.setPointSize(18);
        login_okButton->setFont(font2);

        horizontalLayout_4->addWidget(login_okButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        login_backButton = new QPushButton(widget);
        login_backButton->setObjectName(QStringLiteral("login_backButton"));
        login_backButton->setFont(font2);

        horizontalLayout_4->addWidget(login_backButton);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        verticalLayout_2->addWidget(widget);


        retranslateUi(editpasswd);

        QMetaObject::connectSlotsByName(editpasswd);
    } // setupUi

    void retranslateUi(QDialog *editpasswd)
    {
        editpasswd->setWindowTitle(QApplication::translate("editpasswd", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
        login_passwdLabel_old->setText(QApplication::translate("editpasswd", "\346\227\247\345\257\206\347\240\201", 0));
        login_passwdLabel->setText(QApplication::translate("editpasswd", "\346\226\260\345\257\206\347\240\201", 0));
        login_confirmPasswdLabel->setText(QApplication::translate("editpasswd", "\347\241\256\350\256\244\345\257\206\347\240\201", 0));
        login_repeatPasswdState->setText(QString());
        login_okButton->setText(QApplication::translate("editpasswd", "\347\241\256\350\256\244", 0));
        login_backButton->setText(QApplication::translate("editpasswd", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class editpasswd: public Ui_editpasswd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPASSWD_H
