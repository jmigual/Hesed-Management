#ifndef PERSON_H
#define PERSON_H
#include <vector>
#include <QString>
#include <QDate>
using namespace std;

class Person {
private:
    struct info {
        QString name, surname, DNI, adress, phone;
        QDate birthDate, beginHelp, endHelp;
        int numberHelp, ID;
    };
    vector<info> all;
    
public:
    /**
     * @brief Default constructor
     */
    Person();
    
};

#endif // PERSON_H
