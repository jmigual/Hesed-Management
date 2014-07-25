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
    inf = new Dialog;
    inf->setWindowTitle("Associació Hesed - Inserir");
    inf->open();
    connect(inf, SIGNAL(accepted()), this, SLOT(endInserir()));
    connect(inf, SIGNAL(rejected()), this, SLOT(endInserir()));
    
}

void MainWindow::endInserir()
{
    if (inf->result()) {
        Info i;
        inf->getData(i);
        qDebug() << "Acceptat";
        qDebug() << i.name << " " << i.surname;
    }
    else qDebug() << "No acceptat";
    delete inf;    
}
