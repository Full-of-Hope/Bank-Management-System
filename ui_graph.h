/********************************************************************************
** Form generated from reading UI file 'graph.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH_H
#define UI_GRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Graph
{
public:
    QTableWidget *graph_tableWidget;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QPushButton *searchButton;
    QLabel *beginAddLabel;
    QLabel *endAddLabel;
    QLineEdit *beginAddlineEdit;
    QLineEdit *endAddlineEdit;
    QLabel *deleteLabel;
    QLineEdit *deletelineEdit;
    QLabel *weightAddLabel;
    QLineEdit *weightAddlineEdit;
    QLabel *beginSearchLabel;
    QLineEdit *beginSearchlineEdit;
    QLabel *label;
    QLineEdit *endSearchlineEdit;
    QTextBrowser *textSearchBrowser;
    QTextBrowser *textDistanceBrowser;
    QLabel *label_2;
    QPushButton *backButton;

    void setupUi(QDialog *Graph)
    {
        if (Graph->objectName().isEmpty())
            Graph->setObjectName(QStringLiteral("Graph"));
        Graph->resize(745, 509);
        graph_tableWidget = new QTableWidget(Graph);
        graph_tableWidget->setObjectName(QStringLiteral("graph_tableWidget"));
        graph_tableWidget->setGeometry(QRect(30, 30, 311, 341));
        addButton = new QPushButton(Graph);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(650, 136, 93, 28));
        deleteButton = new QPushButton(Graph);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(650, 246, 93, 28));
        searchButton = new QPushButton(Graph);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(640, 340, 93, 28));
        beginAddLabel = new QLabel(Graph);
        beginAddLabel->setObjectName(QStringLiteral("beginAddLabel"));
        beginAddLabel->setGeometry(QRect(430, 46, 72, 15));
        QFont font;
        font.setPointSize(10);
        beginAddLabel->setFont(font);
        endAddLabel = new QLabel(Graph);
        endAddLabel->setObjectName(QStringLiteral("endAddLabel"));
        endAddLabel->setGeometry(QRect(430, 76, 54, 21));
        endAddLabel->setFont(font);
        endAddLabel->setMidLineWidth(0);
        beginAddlineEdit = new QLineEdit(Graph);
        beginAddlineEdit->setObjectName(QStringLiteral("beginAddlineEdit"));
        beginAddlineEdit->setGeometry(QRect(500, 46, 113, 20));
        endAddlineEdit = new QLineEdit(Graph);
        endAddlineEdit->setObjectName(QStringLiteral("endAddlineEdit"));
        endAddlineEdit->setGeometry(QRect(500, 76, 113, 20));
        deleteLabel = new QLabel(Graph);
        deleteLabel->setObjectName(QStringLiteral("deleteLabel"));
        deleteLabel->setGeometry(QRect(410, 196, 81, 21));
        deleteLabel->setFont(font);
        deletelineEdit = new QLineEdit(Graph);
        deletelineEdit->setObjectName(QStringLiteral("deletelineEdit"));
        deletelineEdit->setGeometry(QRect(500, 196, 113, 20));
        weightAddLabel = new QLabel(Graph);
        weightAddLabel->setObjectName(QStringLiteral("weightAddLabel"));
        weightAddLabel->setGeometry(QRect(430, 106, 71, 20));
        weightAddLabel->setFont(font);
        weightAddlineEdit = new QLineEdit(Graph);
        weightAddlineEdit->setObjectName(QStringLiteral("weightAddlineEdit"));
        weightAddlineEdit->setGeometry(QRect(500, 106, 113, 20));
        beginSearchLabel = new QLabel(Graph);
        beginSearchLabel->setObjectName(QStringLiteral("beginSearchLabel"));
        beginSearchLabel->setGeometry(QRect(430, 296, 54, 21));
        beginSearchLabel->setFont(font);
        beginSearchlineEdit = new QLineEdit(Graph);
        beginSearchlineEdit->setObjectName(QStringLiteral("beginSearchlineEdit"));
        beginSearchlineEdit->setGeometry(QRect(500, 296, 113, 20));
        label = new QLabel(Graph);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(430, 346, 61, 16));
        label->setFont(font);
        endSearchlineEdit = new QLineEdit(Graph);
        endSearchlineEdit->setObjectName(QStringLiteral("endSearchlineEdit"));
        endSearchlineEdit->setGeometry(QRect(500, 346, 113, 20));
        textSearchBrowser = new QTextBrowser(Graph);
        textSearchBrowser->setObjectName(QStringLiteral("textSearchBrowser"));
        textSearchBrowser->setGeometry(QRect(20, 400, 541, 81));
        textDistanceBrowser = new QTextBrowser(Graph);
        textDistanceBrowser->setObjectName(QStringLiteral("textDistanceBrowser"));
        textDistanceBrowser->setGeometry(QRect(590, 440, 131, 31));
        label_2 = new QLabel(Graph);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(610, 410, 91, 16));
        label_2->setFont(font);
        backButton = new QPushButton(Graph);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(640, 20, 93, 28));
        backButton->setFont(font);

        retranslateUi(Graph);

        QMetaObject::connectSlotsByName(Graph);
    } // setupUi

    void retranslateUi(QDialog *Graph)
    {
        Graph->setWindowTitle(QApplication::translate("Graph", "Dialog", 0));
        addButton->setText(QApplication::translate("Graph", "\345\242\236\345\212\240", 0));
        deleteButton->setText(QApplication::translate("Graph", "\345\210\240\351\231\244", 0));
        searchButton->setText(QApplication::translate("Graph", "\346\237\245\350\257\242", 0));
        beginAddLabel->setText(QApplication::translate("Graph", "\350\265\267\347\202\271", 0));
        endAddLabel->setText(QApplication::translate("Graph", "\347\273\210\347\202\271", 0));
        deleteLabel->setText(QApplication::translate("Graph", "\345\210\240\351\231\244\347\232\204\347\202\271", 0));
        weightAddLabel->setText(QApplication::translate("Graph", "\350\276\271\346\235\203", 0));
        beginSearchLabel->setText(QApplication::translate("Graph", "\350\265\267\347\202\271", 0));
        label->setText(QApplication::translate("Graph", "\347\273\210\347\202\271", 0));
        label_2->setText(QApplication::translate("Graph", "\346\234\200\347\237\255\350\267\235\347\246\273\357\274\232", 0));
        backButton->setText(QApplication::translate("Graph", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class Graph: public Ui_Graph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH_H
