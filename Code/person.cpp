#include "person.h"
#include <QtDebug>

/****************
 * CONSTRUCTORS *
 ****************/

Person::Person()
{
    maxID = 0;
}

Person::Person(const Person &p)
{
    maxID = p.maxID;
    all = p.all;
}

/***************
 *  MODIFIERS  *
 ***************/

void Person::read(QDir data)
{
    QFile file(data.filePath("datafile.db"));
    if(not file.open(QIODevice::ReadWrite)) {
        qWarning() << "Cannot create the file" << file.fileName();
    }
    QDataStream in(&file);
    in.setByteOrder(QDataStream::LittleEndian);
    in >> maxID;
    while(not in.atEnd()) {
        info aux;
        in >> aux;
        all.push_back(aux);
    }
    file.close();
}

void Person::write(QDir data)
{
    QFile file(data.filePath("datafile.db"));
    if (not file.open(QIODevice::ReadWrite)) {
        qWarning() << "Cannot create the file" << file.fileName();
    }
    sort(0);
    QDataStream out(&file);
    out.setByteOrder(QDataStream::LittleEndian);
    out << maxID;
    list<info>::iterator it = all.begin();
    while(it != all.end()) {
        out << *it;
        ++it;
    }
    
}

void Person::sort(int type)
{
    if (not all.empty() and type >= 0) {
        comp a;
        a.select(type);
        all.sort(a);
    }
    else qWarning() << "Error while trying to sort";
}

void Person::addTable(QTableView *t) { table = t; }

void Person::addInfo()
{
    
}

/***************
 *  CONSULTOR  *
 ***************/

void Person::show()
{
    QStandardItemModel *model = new QStandardItemModel();
    QStringList titols;
    titols << "DNI" << "Nom" << "Cognoms" << "Data Fi ajuda" << "Nº Ajudat"
           << "Membres";
    model->setHorizontalHeaderLabels(titols);
    
    table->setModel(model);
}
