#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>

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

void MainWindow::on_actionInsertar_triggered()
{
    qDebug() << "Botó apretat!";
}
