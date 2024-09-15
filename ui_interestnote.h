/********************************************************************************
** Form generated from reading UI file 'interestnote.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERESTNOTE_H
#define UI_INTERESTNOTE_H

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
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_interestnote
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *search_lineEdit;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *search_Button;
    QTableView *interestnote_tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *backButton_2;

    void setupUi(QDialog *interestnote)
    {
        if (interestnote->objectName().isEmpty())
            interestnote->setObjectName(QStringLiteral("interestnote"));
        interestnote->resize(257, 291);
        verticalLayout_2 = new QVBoxLayout(interestnote);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(interestnote);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        search_lineEdit = new QLineEdit(widget);
        search_lineEdit->setObjectName(QStringLiteral("search_lineEdit"));

        horizontalLayout_3->addWidget(search_lineEdit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        search_Button = new QPushButton(widget);
        search_Button->setObjectName(QStringLiteral("search_Button"));
        search_Button->setFont(font);

        horizontalLayout_3->addWidget(search_Button);


        verticalLayout->addLayout(horizontalLayout_3);

        interestnote_tableView = new QTableView(widget);
        interestnote_tableView->setObjectName(QStringLiteral("interestnote_tableView"));

        verticalLayout->addWidget(interestnote_tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font1;
        font1.setPointSize(18);
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        backButton_2 = new QPushButton(widget);
        backButton_2->setObjectName(QStringLiteral("backButton_2"));
        backButton_2->setFont(font1);

        horizontalLayout->addWidget(backButton_2);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(widget);


        retranslateUi(interestnote);

        QMetaObject::connectSlotsByName(interestnote);
    } // setupUi

    void retranslateUi(QDialog *interestnote)
    {
        interestnote->setWindowTitle(QApplication::translate("interestnote", "Dialog", 0));
        label->setText(QApplication::translate("interestnote", "\345\210\251\346\201\257\345\215\225", 0));
        search_Button->setText(QApplication::translate("interestnote", "\346\220\234\347\264\242", 0));
        pushButton->setText(QApplication::translate("interestnote", "\345\257\274\345\207\272", 0));
        backButton_2->setText(QApplication::translate("interestnote", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class interestnote: public Ui_interestnote {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERESTNOTE_H
