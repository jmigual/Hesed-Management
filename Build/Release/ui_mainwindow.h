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
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionInserir;
    QAction *actionEliminar;
    QAction *actionObrir;
    QAction *actionTancar;
    QAction *actionExportar;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuEditar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(640, 480);
        actionInserir = new QAction(MainWindow);
        actionInserir->setObjectName(QStringLiteral("actionInserir"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/Icons/plus.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionInserir->setIcon(icon);
        actionEliminar = new QAction(MainWindow);
        actionEliminar->setObjectName(QStringLiteral("actionEliminar"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/Icons/delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionEliminar->setIcon(icon1);
        actionObrir = new QAction(MainWindow);
        actionObrir->setObjectName(QStringLiteral("actionObrir"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/Icons/folder.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionObrir->setIcon(icon2);
        actionTancar = new QAction(MainWindow);
        actionTancar->setObjectName(QStringLiteral("actionTancar"));
        actionExportar = new QAction(MainWindow);
        actionExportar->setObjectName(QStringLiteral("actionExportar"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Images/Icons/letter.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionExportar->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 9);
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 21));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        menuArchivo->setEnabled(true);
        menuEditar = new QMenu(menubar);
        menuEditar->setObjectName(QStringLiteral("menuEditar"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setEnabled(true);
        toolBar->setMovable(true);
        toolBar->setIconSize(QSize(16, 16));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuEditar->menuAction());
        menuArchivo->addAction(actionObrir);
        menuArchivo->addAction(actionExportar);
        menuArchivo->addAction(actionTancar);
        menuEditar->addAction(actionInserir);
        menuEditar->addAction(actionEliminar);
        toolBar->addAction(actionInserir);
        toolBar->addAction(actionEliminar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionInserir->setText(QApplication::translate("MainWindow", "Inserir", 0));
        actionEliminar->setText(QApplication::translate("MainWindow", "Eliminar", 0));
        actionObrir->setText(QApplication::translate("MainWindow", "Obrir", 0));
        actionTancar->setText(QApplication::translate("MainWindow", "Tancar", 0));
        actionExportar->setText(QApplication::translate("MainWindow", "Exportar", 0));
        menuArchivo->setTitle(QApplication::translate("MainWindow", "Arxiu", 0));
        menuEditar->setTitle(QApplication::translate("MainWindow", "Editar", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
