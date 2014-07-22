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
    inf->setAttribute(Qt::WA_DeleteOnClose);
    inf->setWindowTitle("Associació Hesed - Inserir");
    inf->open();
    connect(inf, SIGNAL(accepted()), SLOT(endInserir()));    
}

void MainWindow::endInserir()
{
    Info i;
    
}
