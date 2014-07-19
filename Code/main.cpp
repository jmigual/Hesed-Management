#include "mainwindow.h"
#include <QApplication>
#include <QtDebug>
#include <QStandardPaths>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.showMaximized();
    QDir data;
    if (data.exists(QStandardPaths::writableLocation(QStandardPaths::DataLocation))) {
        qDebug() << "Trobat";
        w.loadData(data);
    }
    else qDebug() << "No s'ha trobat";
    
    return a.exec();
}
