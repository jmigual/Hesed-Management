#ifndef INFO_H
#define INFO_H

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

#endif // INFO_H
