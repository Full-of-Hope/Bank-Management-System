/********************************************************************************
** Form generated from reading UI file 'deposit.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSIT_H
#define UI_DEPOSIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
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

class Ui_deposit
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *deposit_moneyLabel;
    QLineEdit *deposit_moneyInput;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *deposit_typeLabel;
    QComboBox *deposit_typeCombobox;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *deposit_interestLabel;
    QLineEdit *deposit_lineEdit;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *login_employeenumLabel;
    QLineEdit *login_employeenumInput;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *login_employeeLabel;
    QLineEdit *login_employeeInput;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *deposit_okButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *deposit_backButton;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *deposit)
    {
        if (deposit->objectName().isEmpty())
            deposit->setObjectName(QStringLiteral("deposit"));
        deposit->resize(237, 354);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(deposit->sizePolicy().hasHeightForWidth());
        deposit->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(deposit);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(deposit);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        deposit_moneyLabel = new QLabel(widget);
        deposit_moneyLabel->setObjectName(QStringLiteral("deposit_moneyLabel"));
        QFont font;
        font.setPointSize(16);
        deposit_moneyLabel->setFont(font);

        horizontalLayout->addWidget(deposit_moneyLabel);

        deposit_moneyInput = new QLineEdit(widget);
        deposit_moneyInput->setObjectName(QStringLiteral("deposit_moneyInput"));
        deposit_moneyInput->setMaximumSize(QSize(16777211, 16777215));

        horizontalLayout->addWidget(deposit_moneyInput);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        deposit_typeLabel = new QLabel(widget);
        deposit_typeLabel->setObjectName(QStringLiteral("deposit_typeLabel"));
        deposit_typeLabel->setFont(font);

        horizontalLayout_5->addWidget(deposit_typeLabel);

        deposit_typeCombobox = new QComboBox(widget);
        deposit_typeCombobox->setObjectName(QStringLiteral("deposit_typeCombobox"));

        horizontalLayout_5->addWidget(deposit_typeCombobox);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_7 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        deposit_interestLabel = new QLabel(widget);
        deposit_interestLabel->setObjectName(QStringLiteral("deposit_interestLabel"));
        deposit_interestLabel->setFont(font);

        horizontalLayout_6->addWidget(deposit_interestLabel);

        deposit_lineEdit = new QLineEdit(widget);
        deposit_lineEdit->setObjectName(QStringLiteral("deposit_lineEdit"));
        deposit_lineEdit->setFont(font);
        deposit_lineEdit->setFocusPolicy(Qt::WheelFocus);
        deposit_lineEdit->setReadOnly(true);

        horizontalLayout_6->addWidget(deposit_lineEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_6 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        login_employeenumLabel = new QLabel(widget);
        login_employeenumLabel->setObjectName(QStringLiteral("login_employeenumLabel"));
        login_employeenumLabel->setFont(font);

        horizontalLayout_2->addWidget(login_employeenumLabel);

        login_employeenumInput = new QLineEdit(widget);
        login_employeenumInput->setObjectName(QStringLiteral("login_employeenumInput"));

        horizontalLayout_2->addWidget(login_employeenumInput);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_5 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        login_employeeLabel = new QLabel(widget);
        login_employeeLabel->setObjectName(QStringLiteral("login_employeeLabel"));
        login_employeeLabel->setFont(font);

        horizontalLayout_3->addWidget(login_employeeLabel);

        login_employeeInput = new QLineEdit(widget);
        login_employeeInput->setObjectName(QStringLiteral("login_employeeInput"));

        horizontalLayout_3->addWidget(login_employeeInput);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        deposit_okButton = new QPushButton(widget);
        deposit_okButton->setObjectName(QStringLiteral("deposit_okButton"));
        QFont font1;
        font1.setPointSize(18);
        deposit_okButton->setFont(font1);

        horizontalLayout_4->addWidget(deposit_okButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        deposit_backButton = new QPushButton(widget);
        deposit_backButton->setObjectName(QStringLiteral("deposit_backButton"));
        deposit_backButton->setFont(font1);

        horizontalLayout_4->addWidget(deposit_backButton);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        verticalLayout_2->addWidget(widget);


        retranslateUi(deposit);

        QMetaObject::connectSlotsByName(deposit);
    } // setupUi

    void retranslateUi(QDialog *deposit)
    {
        deposit->setWindowTitle(QApplication::translate("deposit", "\345\255\230\346\254\276", 0));
        deposit_moneyLabel->setText(QApplication::translate("deposit", "\345\255\230\346\254\276\351\207\221\351\242\235", 0));
        deposit_moneyInput->setInputMask(QString());
        deposit_typeLabel->setText(QApplication::translate("deposit", "\345\202\250\347\247\215", 0));
        deposit_typeCombobox->clear();
        deposit_typeCombobox->insertItems(0, QStringList()
         << QApplication::translate("deposit", "\344\270\200\345\271\264\346\234\237", 0)
         << QApplication::translate("deposit", "\344\270\211\345\271\264\346\234\237", 0)
         << QApplication::translate("deposit", "\344\272\224\345\271\264\346\234\237", 0)
        );
        deposit_interestLabel->setText(QApplication::translate("deposit", "\345\210\251\346\201\257", 0));
        deposit_lineEdit->setText(QApplication::translate("deposit", "1.98", 0));
        login_employeenumLabel->setText(QApplication::translate("deposit", "\345\221\230\345\267\245\345\217\267\347\240\201", 0));
        login_employeeLabel->setText(QApplication::translate("deposit", "\345\221\230\345\267\245\345\247\223\345\220\215", 0));
        deposit_okButton->setText(QApplication::translate("deposit", "\347\241\256\350\256\244", 0));
        deposit_backButton->setText(QApplication::translate("deposit", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class deposit: public Ui_deposit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSIT_H
