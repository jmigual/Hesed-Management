#include "mainwindow.hpp"
#include <QApplication>
#include <QtPlugin>

Q_IMPORT_PLUGIN(qsqloci)
Q_IMPORT_PLUGIN(qgif)

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Pepe w;
    w.show();
    
    return a.exec();
}
