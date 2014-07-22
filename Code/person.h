#ifndef PERSON_H
#define PERSON_H
#include <list>
#include <QString>
#include <QDate>
#include <QDir>
#include <QFile>
#include <QTableView>
#include <QStandardItemModel>
#include "info.h"
using namespace std;

/**
 * @brief The Person Class contains all people basic data. 
 */
class Person {
private:
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
        bool operator()(Info a, Info b) 
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
         * @brief Constructor with the selected option
         * @param s Selected option
         */
        comp(int s)
        {
            sel = s;
        }

        /**
         * @brief To selec the desired option
         */
        void select(int s) { sel = s; }
    };

    /**
     * @brief List to store all data
     */
    list<Info> all;
    /**
     * @brief Contains de maximum ID that has ever been assigned
     */
    unsigned int maxID;
    QTableView *table;
    
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
     * @brief Adds the pointer to a QTableView
     * @param t Pointer to a QTabletView
     * @pre t is not NULL
     * @post The pointer has been added
     */
    void addTable(QTableView *t);
    
    void addInfo(Info i);
    
    /***************
     *  CONSULTOR  *
     ***************/
    
    /**
     * @brief Function to show all stored data
     */
    void show();    
};

#endif // PERSON_H
