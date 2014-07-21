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
     *  <li>Beginning help date</li>
     *  <li>End help date</li>
     *  <li>Times helped</li>
     *  <li>Family members</li>
     *  <li>Identification Number</li>
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
        
        /**
         * @brief Definition of the operator '>>' to the struct
         */
        friend QDataStream& operator>> (QDataStream &in, info &i) {
            in >> i.adress >> i.beginHelp >> i.birthDate >> i.cNIF
               >> i.endHelp >> i.famMembers >> i.ID >> i.name >> i.NIF
               >> i.numberHelp >> i.phone >> i.surname;
            return in;
        }
        
        /**
         * @brief Definition of the operator '<<' to the struct
         */
        friend QDataStream& operator<< (QDataStream &out, info &i) {
            out << i.adress << i.beginHelp << i.birthDate << i.cNIF
                << i.endHelp << i.famMembers << i.ID << i.name << i.NIF
                << i.numberHelp << i.phone << i.surname;
            return out;
        } 
    };
    
    /**
     * @brief The comp struct is used to sort the info
     */
    struct comp {
        /**
         * @brief Stores the selected ordering type
         */
        int sel;
        
        /**
         * @brief Needed to sort info
         */
        bool operator()(info a, info b) 
        {
            if(sel == 0) return a.ID < b.ID;
            else if (sel == 1) return a.name < b.name;
            else if (sel == 2) return a.surname < b.surname;
            else if (sel == 3) return a.NIF < b.NIF;
            else if (sel == 4) return a.birthDate < b.birthDate;
            else if (sel == 5) return a.cNIF < b.cNIF;
            else if (sel == 6) return a.adress < b.adress;
            else if (sel == 7) return a.phone < b.phone;
            else if (sel == 8) return a.beginHelp < b.beginHelp;
            else if (sel == 9) return a.endHelp < b.endHelp;
            else if (sel == 10) return a.numberHelp < b.numberHelp;
            return a.famMembers < b.famMembers;
        }
        /**
         * @brief Default constructor
         */
        comp() 
        {
            sel = 0;
        }
        /**
         * @brief To selec the desired option
         */
        void select(int s) { sel = s; }
    };

    /**
     * @brief List to store all data
     */
    list<info> all;
    /**
     * @brief Contains de maximum ID that has ever been assigned
     */
    unsigned int maxID;
    
public:
    
    /****************
     * CONSTRUCTORS *
     ****************/
    
    /**
     * @brief Default constructor
     */
    Person();
    
    /**
     * @brief Copy constructor
     */
    Person(const Person &p);
    
    /***************
     *  MODIFIERS  *
     ***************/
    
    /**
     * @brief Function to read all stored data
     * @param data Path to <em>Data</em> folder
     * @pre True
     * @post All data stored in <em>datafile.db</em> has been read and stored
     * to implicit parameter.
     */
    void read(QDir data);
    
    /**
     * @brief Function to store all data to a file
     * @param data Path to <em>Data</em> folder
     * @pre True
     * @post All existing data has been stored in <em>datafile.db</em>
     * overwriting existing data
     */
    void write(QDir data);
    
    
    /**
     * @brief Function to sort the data with the specified metod
     * 
     * <h2>Order</h2>
     * <ul>
     *  <li><b>0</b> -> Identification Number (ID)</li>
     *  <li><b>1</b> -> Name (name)</li>
     *  <li><b>2</b> -> Surname (surname)</li>
     *  <li><b>3</b> -> NIF (NIF)</li>
     *  <li><b>4</b> -> Birth Date(birthDate)</li>
     *  <li><b>5</b> -> Couple NIF (cNIF)</li>
     *  <li><b>6</b> -> Adress (adress)</li>
     *  <li><b>7</b> -> Phone number (phone) </li>
     *  <li><b>8</b> -> Beginning help date (beginHelp)</li>
     *  <li><b>9</b> -> End help date (endHelp)</li>
     *  <li><b>10</b> -> Times helped (numberHelp)</li>
     *  <li><b>11</b> -> Family members (famMembers)</li>
     * </ul>
     * @param type Variable to specify the desired metod to sort the data
     * @pre True
     * @post All data has been stored as type specifies
     */
    void sort(int type);
    
    /**
     * @brief Function to show all stored data
     * @param table Pointer to a existing TableView
     */
    void show(QTableView *table);    
};

#endif // PERSON_H
