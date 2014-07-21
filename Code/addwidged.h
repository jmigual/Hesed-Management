#ifndef ADDWIDGED_H
#define ADDWIDGED_H

#include <QDialog>

namespace Ui {
class addWidged;
}

class addWidged : public QDialog
{
    Q_OBJECT
    
public:
    explicit addWidged(QWidget *parent = 0);
    ~addWidged();
    
private:
    Ui::addWidged *ui;
};

#endif // ADDWIDGED_H
