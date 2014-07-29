#ifndef INSDIALOG_H
#define INSDIALOG_

#include <QDialog>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QScrollArea>
#include <QLineEdit>
#include <QLabel>
#include <QDialogButtonBox>


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
    QLineEdit* tel1, tel2, address;
    /**
     * @brief Layout containing all data
     */
    QVBoxLayout* all;
    /**
     * @brief Buttons to confirm or reject the dialog
     */
    QDialogButtonBox* confirm;
    /**
     * @brief Scroll area
     */
    QScrollArea* scroll;
    
};

#endif // INSDIALOG_H
