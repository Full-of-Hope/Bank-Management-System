/********************************************************************************
** Form generated from reading UI file 'createaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEACCOUNT_H
#define UI_CREATEACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_createaccount
{
public:
    QLineEdit *login_passwdInput;
    QPushButton *login_backButton;
    QLineEdit *login_accountInput;
    QLabel *login_passwdLabel;
    QPushButton *login_okButton;
    QLabel *login_accountLabel;
    QLabel *login_confirmPasswdLabel;
    QLineEdit *login_confirmPasswdInput;
    QLabel *login_nameLabel;
    QLineEdit *login_nameInput;
    QLabel *login_addressLabel;
    QLineEdit *login_addressInput;
    QLabel *login_typeLabel;
    QLabel *login_interestLabel;
    QLineEdit *login_interestInput;
    QLabel *login_employeenumLabel;
    QLineEdit *login_employeenumInput;
    QLabel *login_repeatPasswdState;
    QComboBox *login_typeCombobox;
    QLabel *login_employeeLabel;
    QLineEdit *login_employeeInput;

    void setupUi(QDialog *createaccount)
    {
        if (createaccount->objectName().isEmpty())
            createaccount->setObjectName(QStringLiteral("createaccount"));
        createaccount->resize(512, 457);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(createaccount->sizePolicy().hasHeightForWidth());
        createaccount->setSizePolicy(sizePolicy);
        login_passwdInput = new QLineEdit(createaccount);
        login_passwdInput->setObjectName(QStringLiteral("login_passwdInput"));
        login_passwdInput->setGeometry(QRect(110, 90, 351, 31));
        login_passwdInput->setFocusPolicy(Qt::StrongFocus);
        login_passwdInput->setEchoMode(QLineEdit::Password);
        login_backButton = new QPushButton(createaccount);
        login_backButton->setObjectName(QStringLiteral("login_backButton"));
        login_backButton->setGeometry(QRect(270, 409, 93, 28));
        login_accountInput = new QLineEdit(createaccount);
        login_accountInput->setObjectName(QStringLiteral("login_accountInput"));
        login_accountInput->setGeometry(QRect(110, 10, 351, 31));
        login_accountInput->setMaximumSize(QSize(16777211, 16777215));
        login_accountInput->setReadOnly(true);
        login_passwdLabel = new QLabel(createaccount);
        login_passwdLabel->setObjectName(QStringLiteral("login_passwdLabel"));
        login_passwdLabel->setGeometry(QRect(40, 100, 72, 15));
        login_okButton = new QPushButton(createaccount);
        login_okButton->setObjectName(QStringLiteral("login_okButton"));
        login_okButton->setGeometry(QRect(160, 409, 93, 28));
        login_accountLabel = new QLabel(createaccount);
        login_accountLabel->setObjectName(QStringLiteral("login_accountLabel"));
        login_accountLabel->setGeometry(QRect(40, 20, 72, 15));
        login_confirmPasswdLabel = new QLabel(createaccount);
        login_confirmPasswdLabel->setObjectName(QStringLiteral("login_confirmPasswdLabel"));
        login_confirmPasswdLabel->setGeometry(QRect(40, 140, 72, 15));
        login_confirmPasswdInput = new QLineEdit(createaccount);
        login_confirmPasswdInput->setObjectName(QStringLiteral("login_confirmPasswdInput"));
        login_confirmPasswdInput->setGeometry(QRect(110, 130, 351, 31));
        login_confirmPasswdInput->setEchoMode(QLineEdit::Password);
        login_confirmPasswdInput->setClearButtonEnabled(false);
        login_nameLabel = new QLabel(createaccount);
        login_nameLabel->setObjectName(QStringLiteral("login_nameLabel"));
        login_nameLabel->setGeometry(QRect(40, 60, 72, 15));
        login_nameInput = new QLineEdit(createaccount);
        login_nameInput->setObjectName(QStringLiteral("login_nameInput"));
        login_nameInput->setGeometry(QRect(110, 50, 351, 31));
        login_addressLabel = new QLabel(createaccount);
        login_addressLabel->setObjectName(QStringLiteral("login_addressLabel"));
        login_addressLabel->setGeometry(QRect(40, 209, 72, 15));
        login_addressInput = new QLineEdit(createaccount);
        login_addressInput->setObjectName(QStringLiteral("login_addressInput"));
        login_addressInput->setGeometry(QRect(110, 199, 351, 31));
        login_typeLabel = new QLabel(createaccount);
        login_typeLabel->setObjectName(QStringLiteral("login_typeLabel"));
        login_typeLabel->setGeometry(QRect(40, 249, 72, 15));
        login_interestLabel = new QLabel(createaccount);
        login_interestLabel->setObjectName(QStringLiteral("login_interestLabel"));
        login_interestLabel->setGeometry(QRect(40, 289, 72, 15));
        login_interestInput = new QLineEdit(createaccount);
        login_interestInput->setObjectName(QStringLiteral("login_interestInput"));
        login_interestInput->setGeometry(QRect(110, 279, 351, 31));
        login_interestInput->setFocusPolicy(Qt::WheelFocus);
        login_interestInput->setReadOnly(true);
        login_employeenumLabel = new QLabel(createaccount);
        login_employeenumLabel->setObjectName(QStringLiteral("login_employeenumLabel"));
        login_employeenumLabel->setGeometry(QRect(40, 329, 72, 15));
        login_employeenumInput = new QLineEdit(createaccount);
        login_employeenumInput->setObjectName(QStringLiteral("login_employeenumInput"));
        login_employeenumInput->setGeometry(QRect(110, 319, 351, 31));
        login_repeatPasswdState = new QLabel(createaccount);
        login_repeatPasswdState->setObjectName(QStringLiteral("login_repeatPasswdState"));
        login_repeatPasswdState->setGeometry(QRect(110, 170, 351, 16));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font.setBold(true);
        font.setWeight(75);
        login_repeatPasswdState->setFont(font);
        login_typeCombobox = new QComboBox(createaccount);
        login_typeCombobox->setObjectName(QStringLiteral("login_typeCombobox"));
        login_typeCombobox->setGeometry(QRect(110, 239, 351, 31));
        login_employeeLabel = new QLabel(createaccount);
        login_employeeLabel->setObjectName(QStringLiteral("login_employeeLabel"));
        login_employeeLabel->setGeometry(QRect(40, 369, 72, 15));
        login_employeeInput = new QLineEdit(createaccount);
        login_employeeInput->setObjectName(QStringLiteral("login_employeeInput"));
        login_employeeInput->setGeometry(QRect(110, 360, 351, 31));

        retranslateUi(createaccount);

        QMetaObject::connectSlotsByName(createaccount);
    } // setupUi

    void retranslateUi(QDialog *createaccount)
    {
        createaccount->setWindowTitle(QApplication::translate("createaccount", "\345\210\233\345\273\272\350\264\246\346\210\267", 0));
        login_passwdInput->setText(QString());
        login_backButton->setText(QApplication::translate("createaccount", "\350\277\224\345\233\236", 0));
        login_accountInput->setInputMask(QString());
        login_passwdLabel->setText(QApplication::translate("createaccount", "\345\257\206\347\240\201", 0));
        login_okButton->setText(QApplication::translate("createaccount", "\347\241\256\350\256\244", 0));
        login_accountLabel->setText(QApplication::translate("createaccount", "\350\264\246\345\217\267", 0));
        login_confirmPasswdLabel->setText(QApplication::translate("createaccount", "\347\241\256\350\256\244\345\257\206\347\240\201", 0));
        login_confirmPasswdInput->setText(QString());
        login_nameLabel->setText(QApplication::translate("createaccount", "\345\247\223\345\220\215", 0));
        login_addressLabel->setText(QApplication::translate("createaccount", "\345\234\260\345\235\200", 0));
        login_typeLabel->setText(QApplication::translate("createaccount", "\345\202\250\347\247\215", 0));
        login_interestLabel->setText(QApplication::translate("createaccount", "\345\210\251\346\201\257", 0));
        login_interestInput->setText(QApplication::translate("createaccount", "1.98", 0));
        login_employeenumLabel->setText(QApplication::translate("createaccount", "\345\221\230\345\267\245\345\217\267", 0));
        login_repeatPasswdState->setText(QString());
        login_typeCombobox->clear();
        login_typeCombobox->insertItems(0, QStringList()
         << QApplication::translate("createaccount", "\344\270\200\345\271\264\346\234\237", 0)
         << QApplication::translate("createaccount", "\344\270\211\345\271\264\346\234\237", 0)
         << QApplication::translate("createaccount", "\344\272\224\345\271\264\346\234\237", 0)
        );
        login_employeeLabel->setText(QApplication::translate("createaccount", "\345\221\230\345\267\245\345\247\223\345\220\215", 0));
    } // retranslateUi

};

namespace Ui {
    class createaccount: public Ui_createaccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEACCOUNT_H
