#ifndef PERSON_H
#define PERSON_H
#include <list>
#include <QString>
#include <QDate>
#include <QDir>
using namespace std;

/**
 * @brief The Person Class contains all people basic data. 
 */
class Person {
private:
    /**
     * @brief Struct to store basic people information.
     * 
     * Stored info is:
     * <ul>
     *  <li>Name</li>
     *  <li>Surname</li>
     *  <li>NIF</li>
     *  <li>Birth Date</li>
     *  <li>Couple NIF</li>
     *  <li>Adress</li>
     *  <li>Phone number</li>
     *  <li>Start help date</li>
     *  <li>End help date</li>
     *  <li>Times helped</li>
     *  <li>Identification Number</li>
     * </ul>
     */
    struct info {
        QString name, surname, NIF, cNIF, adress, phone;
        QDate birthDate, beginHelp, endHelp;
        int numberHelp, ID;
    };
    list<info> all;
    
public:
    /**
     * @brief Default constructor
     */
    Person();
    
    /**
     * @brief Function to read all stored data
     * @param data Path to <em>Data</em> folder
     * @pre True
     * @post All data stored in <em>datafile.db</em> has been read and stored
     * to implicit parameter.
     */
    void read(QDir data);
    
};

#endif // PERSON_H
