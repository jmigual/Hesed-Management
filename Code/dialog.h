#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "info.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    void 
    
private:
    Ui::Dialog *ui;
    info data;
};

#endif // DIALOG_H
