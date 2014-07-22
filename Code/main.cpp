#include "mainwindow.h"
#include <QApplication>
#include <QtDebug>
#include <QStandardPaths>
#include <QDir>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    
    QString path(QStandardPaths::writableLocation(QStandardPaths::DataLocation));
    qDebug() << path;
    QDir data(path);
    w.addPath(data);
    if (data.exists()) {
        qDebug() << "Trobat";
        w.loadData();
    }
    else {
        qDebug() << "No s'ha trobat, creant directori";
        data.mkpath(path);
    }
    QIcon ico("://Images/Hesed.ico");
    w.setWindowIcon(ico);
    w.setWindowTitle("Associació Hesed");
    w.showMaximized();
    
    return a.exec();
}
