#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>

/****************
 * CONSTRUCTORS *
 ****************/

MainWindow::MainWindow(QWidget *parent):QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/***************
 *  MODIFIERS  *
 ***************/

void MainWindow::loadData()
{
    info.read(data);
    info.addTable(ui->tableView);
    info.show();
}

void MainWindow::addPath(const QDir &data)
{
    this->data = data;
}

void MainWindow::on_actionInserir_triggered()
{
    
}
