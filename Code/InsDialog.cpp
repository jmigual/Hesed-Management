#include "InsDialog.h"

InsDialog::InsDialog(QWidget *parent) : QDialog(parent)
{
    QVBoxLayout* temp = new QVBoxLayout;
    
    scroll = new QScrollArea;
    scroll->setWidgetResizable(true);
    scroll->setWidget(new QWidget);
    scroll->widget()->setLayout(temp);
    
    // Declarem els elements necessaris del Layout principal
    all = new QVBoxLayout;    
    confirm = new QDialogButtonBox();
    confirm->addButton(tr("Acceptar"), QDialogButtonBox::AcceptRole);
    confirm->addButton(tr("Cancel·lar"), QDialogButtonBox::RejectRole);
    connect(confirm, SIGNAL(accepted()), this, SLOT(accept()));
    connect(confirm, SIGNAL(rejected()), this, SLOT(reject()));
    
    // Afegim les dos parts del Layout principal
    all->addWidget(scroll);
    all->addWidget(confirm);
    setLayout(all);
}

InsDialog::~InsDialog()
{
    
}
