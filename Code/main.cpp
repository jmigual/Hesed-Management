#include "mainwindow.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Pepe w;
    w.show();
    
    return a.exec();
}
