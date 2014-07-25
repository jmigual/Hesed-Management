#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::getData(Info& res)
{
    res.adress = ui->adress->text();
    res.beginHelp = ui->beginHelp->date();
    res.birthDate = ui->birthDate->date();
    res.cNIF = ui->cNIF->text();
    res.endHelp = ui->endHelp->date();
    res.famMembers = ui->famMembers->value();
    res.name = ui->name->text();
    res.NIF = ui->NIF->text();
    res.numberHelp = ui->numberHelp->value();
    res.phone = ui->phone->text();
    res.surname = ui->surname->text();
}

void Dialog::on_buttonBox_accepted()
{
    this->accept();
}

void Dialog::on_buttonBox_rejected()
{
    this->reject();
}
