#ifndef INSDIALOG_H
#define INSDIALOG_

#include <QtWidgets>
#include <QDialog>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QScrollArea>
#include <QLineEdit>
#include <QLabel>
#include <QDialogButtonBox>
#include <QDateEdit>


/**
 * @brief Dialog to insert new families in the Database
 */
class InsDialog : public QDialog
{
    Q_OBJECT
    
public:
    /**
     * @brief Default constructor
     */
    InsDialog(QWidget *parent = 0);
    
    /**
     * @brief Default desctructor
     */
    ~InsDialog();
    
private:
    /**
     * @var tel1
     * @brief Phone nº 1
     * @var tel2
     * @brief Phone nº 2
     * @var address
     * @brief Home address
     */
    QLineEdit *tel1, *tel2, *address;
    /**
      * @brief Las collection date
      */
    QDateEdit *lastColl;
    /**
     * @brief Layout containing all data
     */
    QVBoxLayout *all, *content;
    /**
     * @brief Buttons to confirm or reject the dialog
     */
    QDialogButtonBox *confirm;
    /**
     * @brief Scroll area
     */
    QScrollArea *scroll;
    /**
      * @
      */
    int helpCounter, authMembers, famMembers;
    
private slots:
    void addHelp();
    
};

#endif // INSDIALOG_H
