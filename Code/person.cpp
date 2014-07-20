#include "person.h"

Person::Person()
{
    maxID = 0;
}

Person::Person(const Person &p)
{
    maxID = p.maxID;
    all = p.all;
}

void Person::read(QDir data)
{
    QFile dataFile(data.filePath("datafile.db"));
    if(not dataFile.open(QIODevice::ReadWrite)) {
        qWarning() << "Cannot create the file" << dataFile.fileName();
    }
    dataFile.close();
}

void Person::show(QTableView *table)
{
    
}
