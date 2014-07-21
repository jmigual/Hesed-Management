#include "addwidged.h"
#include "ui_addwidged.h"

addWidged::addWidged(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addWidged)
{
    ui->setupUi(this);
}

addWidged::~addWidged()
{
    delete ui;
}
