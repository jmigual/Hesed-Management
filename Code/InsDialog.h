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

class InsDialog : public QDialog
{
    Q_OBJECT
    
public:
    InsDialog(QWidget *parent = 0);
    ~InsDialog();
    
private:
    QLineEdit* tel1, tel2, address;
    QVBoxLayout* all;
    QDialogButtonBox* confirm;
    QScrollArea* scroll;
    
};

#endif // INSDIALOG_H
