/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pepe
{
public:
    QAction *actionProva_2;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *findButton;
    QTextEdit *textEdit;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Pepe)
    {
        if (Pepe->objectName().isEmpty())
            Pepe->setObjectName(QStringLiteral("Pepe"));
        Pepe->resize(388, 304);
        Pepe->setDocumentMode(false);
        Pepe->setDockNestingEnabled(false);
        actionProva_2 = new QAction(Pepe);
        actionProva_2->setObjectName(QStringLiteral("actionProva_2"));
        centralWidget = new QWidget(Pepe);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        findButton = new QPushButton(centralWidget);
        findButton->setObjectName(QStringLiteral("findButton"));

        horizontalLayout->addWidget(findButton);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        Pepe->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Pepe);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Pepe->setStatusBar(statusBar);

        retranslateUi(Pepe);

        QMetaObject::connectSlotsByName(Pepe);
    } // setupUi

    void retranslateUi(QMainWindow *Pepe)
    {
        Pepe->setWindowTitle(QApplication::translate("Pepe", "MainWindow", 0));
        actionProva_2->setText(QApplication::translate("Pepe", "Prova 2", 0));
        label->setText(QApplication::translate("Pepe", "Keyword", 0));
        findButton->setText(QApplication::translate("Pepe", "Find", 0));
    } // retranslateUi

};

namespace Ui {
    class Pepe: public Ui_Pepe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
