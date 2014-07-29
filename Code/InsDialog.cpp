#include "InsDialog.h"

InsDialog::InsDialog(QWidget *parent) : QDialog(parent)
{
    QHBoxLayout* temp = new QHBoxLayout;
    temp->addWidget(new QLabel(tr("Prova")));
    scroll = new QScrollArea;
    scroll->setWidget(new QWidget);
    scroll->widget()->setLayout(temp);
    
    all = new QVBoxLayout;    
    confirm = new QDialogButtonBox(QDialogButtonBox::Ok |
                                   QDialogButtonBox::Cancel);
    connect(confirm, SIGNAL(accepted()), this, SLOT(accept()));
    connect(confirm, SIGNAL(rejected()), this, SLOT(reject()));
    
    all->addWidget(scroll);
    all->addWidget(confirm);
    setLayout(all);
}

InsDialog::~InsDialog()
{
    
}
