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
    model = new QStandardItemModel();
    QStringList titols;
    titols << "DNI" << "Nom" << "Cognoms" << "Data Fi ajuda";
    model->setHorizontalHeaderLabels(titols);
    
    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete model;
}

/***************
 *  MODIFIERS  *
 ***************/

void MainWindow::loadData()
{
    info.read(data);
    info.show(ui->tableView);
}

void MainWindow::addPath(const QDir &data)
{
    this->data = data;
}
