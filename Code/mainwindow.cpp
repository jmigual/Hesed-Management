#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>

Pepe::Pepe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Pepe)
{
    ui->setupUi(this);
    loadTextFile();
}

Pepe::~Pepe()
{
    delete ui;
}

void Pepe::on_findButton_clicked()
{
    QString searchString = ui->lineEdit->text();
    ui->textEdit->find(searchString, QTextDocument::FindWholeWords);
}

void Pepe::loadTextFile()
{
    QFile inputFile(":/Prova.txt");
    inputFile.open(QIODevice::ReadOnly);
    
    QTextStream in(&inputFile);
    QString line = in.readAll();
    inputFile.close();
    
    ui->textEdit->setPlainText(line);
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
    
}
