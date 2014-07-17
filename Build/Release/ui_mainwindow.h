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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionInsertar;
    QAction *action_Eliminar;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(640, 480);
        actionInsertar = new QAction(MainWindow);
        actionInsertar->setObjectName(QStringLiteral("actionInsertar"));
        QIcon icon;
        icon.addFile(QStringLiteral("Images/insert.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral("../Images/insert.png"), QSize(), QIcon::Normal, QIcon::On);
        actionInsertar->setIcon(icon);
        action_Eliminar = new QAction(MainWindow);
        action_Eliminar->setObjectName(QStringLiteral("action_Eliminar"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 21));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setEnabled(true);
        toolBar->setMovable(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        MainWindow->insertToolBarBreak(toolBar);

        menubar->addAction(menuArchivo->menuAction());
        menuArchivo->addAction(actionInsertar);
        menuArchivo->addAction(action_Eliminar);
        toolBar->addAction(actionInsertar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionInsertar->setText(QApplication::translate("MainWindow", "&Insertar", 0));
        actionInsertar->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        action_Eliminar->setText(QApplication::translate("MainWindow", "&Eliminar", 0));
        action_Eliminar->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", 0));
        menuArchivo->setTitle(QApplication::translate("MainWindow", "Archivo", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
