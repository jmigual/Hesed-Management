#ifndef PERSON_H
#define PERSON_H
#include <list>
#include <QString>
#include <QDate>
#include <QDir>
#include <QFile>
#include <QTableView>
#include <QtDebug>
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
     *  <li>Family members</li>
     * </ul>
     */
    struct info {
        /**
         * @var name
         * @brief Name
         * @var surname
         * @brief Surname
         * @var NIF
         * @brief Personal NIF (Número de Identificación Fiscal)
         * @var cNIF
         * @brief Couple NIF (Número de Identificación Fiscal)
         * @var adress
         * @brief Personal home adress
         * @var phone
         * @brief Personal phone
         */
        QString name, surname, NIF, cNIF, adress, phone;
        /**
         * @var birthDate
         * @brief Date of birth
         * @var beginHelp
         * @brief First day recieved help
         * @var endHelp
         * @brief Finishing help date
         */
        QDate birthDate, beginHelp, endHelp;
        /**
         * @var numberHelp
         * @brief Number of times that somebody has been helped
         * @var famMembers
         * @brief Amount of members in the home family
         */
        int numberHelp, famMembers;
        /**
         * @var ID
         * @brief Identification number for internal use
         */
        unsigned int ID;
        
        friend QDataStream& operator>> (QDataStream &in, info &i) {
            in >> i.adress >> i.beginHelp >> i.birthDate >> i.cNIF
               >> i.endHelp >> i.famMembers >> i.ID >> i.name >> i.NIF
               >> i.numberHelp >> i.phone >> i.surname;
            return in;
        }
    };
    list<info> all;
    unsigned int maxID;
    
public:
    /**
     * @brief Default constructor
     */
    Person();
    
    /**
     * @brief Copy constructor
     */
    Person(const Person &p);
    
    /**
     * @brief Function to read all stored data
     * @param data Path to <em>Data</em> folder
     * @pre True
     * @post All data stored in <em>datafile.db</em> has been read and stored
     * to implicit parameter.
     */
    void read(QDir data);
    
    /**
     * @brief Function to show all stored data
     * @param table Pointer to a existing TableView
     */
    void show(QTableView *table);
    
};

#endif // PERSON_H
