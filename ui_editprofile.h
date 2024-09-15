/********************************************************************************
** Form generated from reading UI file 'editprofile.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROFILE_H
#define UI_EDITPROFILE_H

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

class Ui_editprofile
{
public:
    QLineEdit *login_nameInput;
    QPushButton *login_backButton;
    QLineEdit *login_interestInput;
    QLabel *login_interestLabel;
    QComboBox *login_typeCombobox;
    QLabel *login_nameLabel;
    QLineEdit *login_addressInput;
    QPushButton *login_okButton;
    QLabel *login_typeLabel;
    QLabel *login_addressLabel;

    void setupUi(QDialog *editprofile)
    {
        if (editprofile->objectName().isEmpty())
            editprofile->setObjectName(QStringLiteral("editprofile"));
        editprofile->resize(488, 290);
        login_nameInput = new QLineEdit(editprofile);
        login_nameInput->setObjectName(QStringLiteral("login_nameInput"));
        login_nameInput->setGeometry(QRect(100, 40, 351, 31));
        login_backButton = new QPushButton(editprofile);
        login_backButton->setObjectName(QStringLiteral("login_backButton"));
        login_backButton->setGeometry(QRect(260, 230, 93, 28));
        login_interestInput = new QLineEdit(editprofile);
        login_interestInput->setObjectName(QStringLiteral("login_interestInput"));
        login_interestInput->setGeometry(QRect(100, 160, 351, 31));
        login_interestInput->setFocusPolicy(Qt::WheelFocus);
        login_interestInput->setReadOnly(true);
        login_interestLabel = new QLabel(editprofile);
        login_interestLabel->setObjectName(QStringLiteral("login_interestLabel"));
        login_interestLabel->setGeometry(QRect(30, 170, 72, 15));
        login_typeCombobox = new QComboBox(editprofile);
        login_typeCombobox->setObjectName(QStringLiteral("login_typeCombobox"));
        login_typeCombobox->setGeometry(QRect(100, 120, 351, 31));
        login_nameLabel = new QLabel(editprofile);
        login_nameLabel->setObjectName(QStringLiteral("login_nameLabel"));
        login_nameLabel->setGeometry(QRect(30, 50, 72, 15));
        login_addressInput = new QLineEdit(editprofile);
        login_addressInput->setObjectName(QStringLiteral("login_addressInput"));
        login_addressInput->setGeometry(QRect(100, 80, 351, 31));
        login_okButton = new QPushButton(editprofile);
        login_okButton->setObjectName(QStringLiteral("login_okButton"));
        login_okButton->setGeometry(QRect(150, 230, 93, 28));
        login_typeLabel = new QLabel(editprofile);
        login_typeLabel->setObjectName(QStringLiteral("login_typeLabel"));
        login_typeLabel->setGeometry(QRect(30, 130, 72, 15));
        login_addressLabel = new QLabel(editprofile);
        login_addressLabel->setObjectName(QStringLiteral("login_addressLabel"));
        login_addressLabel->setGeometry(QRect(30, 90, 72, 15));

        retranslateUi(editprofile);

        QMetaObject::connectSlotsByName(editprofile);
    } // setupUi

    void retranslateUi(QDialog *editprofile)
    {
        editprofile->setWindowTitle(QApplication::translate("editprofile", "\344\277\256\346\224\271\350\265\204\346\226\231", 0));
        login_backButton->setText(QApplication::translate("editprofile", "\350\277\224\345\233\236", 0));
        login_interestInput->setText(QString());
        login_interestLabel->setText(QApplication::translate("editprofile", "\345\210\251\346\201\257", 0));
        login_typeCombobox->clear();
        login_typeCombobox->insertItems(0, QStringList()
         << QApplication::translate("editprofile", "\344\270\200\345\271\264\346\234\237", 0)
         << QApplication::translate("editprofile", "\344\270\211\345\271\264\346\234\237", 0)
         << QApplication::translate("editprofile", "\344\272\224\345\271\264\346\234\237", 0)
        );
        login_nameLabel->setText(QApplication::translate("editprofile", "\345\247\223\345\220\215", 0));
        login_okButton->setText(QApplication::translate("editprofile", "\347\241\256\350\256\244", 0));
        login_typeLabel->setText(QApplication::translate("editprofile", "\345\202\250\347\247\215", 0));
        login_addressLabel->setText(QApplication::translate("editprofile", "\345\234\260\345\235\200", 0));
    } // retranslateUi

};

namespace Ui {
    class editprofile: public Ui_editprofile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROFILE_H
