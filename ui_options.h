/********************************************************************************
** Form generated from reading UI file 'options.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONS_H
#define UI_OPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_options
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *options_depositButton;
    QPushButton *options_withdrawButton;
    QPushButton *options_flowButton;
    QPushButton *options_interestnoteButton;
    QPushButton *options_passwdButton;
    QPushButton *options_lostButton;

    void setupUi(QDialog *options)
    {
        if (options->objectName().isEmpty())
            options->setObjectName(QStringLiteral("options"));
        options->resize(253, 287);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(options->sizePolicy().hasHeightForWidth());
        options->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(options);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(options);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        options_depositButton = new QPushButton(widget);
        options_depositButton->setObjectName(QStringLiteral("options_depositButton"));
        QFont font;
        font.setPointSize(18);
        options_depositButton->setFont(font);

        verticalLayout->addWidget(options_depositButton);

        options_withdrawButton = new QPushButton(widget);
        options_withdrawButton->setObjectName(QStringLiteral("options_withdrawButton"));
        options_withdrawButton->setFont(font);

        verticalLayout->addWidget(options_withdrawButton);

        options_flowButton = new QPushButton(widget);
        options_flowButton->setObjectName(QStringLiteral("options_flowButton"));
        options_flowButton->setFont(font);

        verticalLayout->addWidget(options_flowButton);

        options_interestnoteButton = new QPushButton(widget);
        options_interestnoteButton->setObjectName(QStringLiteral("options_interestnoteButton"));
        options_interestnoteButton->setFont(font);

        verticalLayout->addWidget(options_interestnoteButton);

        options_passwdButton = new QPushButton(widget);
        options_passwdButton->setObjectName(QStringLiteral("options_passwdButton"));
        options_passwdButton->setFont(font);

        verticalLayout->addWidget(options_passwdButton);

        options_lostButton = new QPushButton(widget);
        options_lostButton->setObjectName(QStringLiteral("options_lostButton"));
        options_lostButton->setFont(font);

        verticalLayout->addWidget(options_lostButton);


        verticalLayout_2->addWidget(widget);


        retranslateUi(options);

        QMetaObject::connectSlotsByName(options);
    } // setupUi

    void retranslateUi(QDialog *options)
    {
        options->setWindowTitle(QApplication::translate("options", "\345\267\262\347\231\273\345\275\225", 0));
        options_depositButton->setText(QApplication::translate("options", "\345\255\230\346\254\276", 0));
        options_withdrawButton->setText(QApplication::translate("options", "\345\217\226\346\254\276", 0));
        options_flowButton->setText(QApplication::translate("options", "\346\237\245\347\234\213\346\265\201\346\260\264", 0));
        options_interestnoteButton->setText(QApplication::translate("options", "\345\210\251\346\201\257\345\215\225", 0));
        options_passwdButton->setText(QApplication::translate("options", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
        options_lostButton->setText(QApplication::translate("options", "\346\214\202\345\244\261", 0));
    } // retranslateUi

};

namespace Ui {
    class options: public Ui_options {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONS_H
