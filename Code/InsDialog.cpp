#include "InsDialog.h"

InsDialog::InsDialog(QWidget *parent) : QDialog(parent)
{
    helpCounter = authMembers = famMembers = 0;
    
    // Definition of the main container
    content = new QVBoxLayout;
    
    // H1Form1 creation
    QFormLayout *H1Form1 = new QFormLayout;
    tel1 = new QLineEdit;
    address = new QLineEdit;
    H1Form1->addRow(new QLabel(tr("Telèfon 1")), tel1);
    H1Form1->addRow(new QLabel(tr("Adreça")), address);
    
    // H1Form2 creation
    QFormLayout* H1Form2 = new QFormLayout;
    tel2 = new QLineEdit;
    lastColl = new QDateEdit(QDate::currentDate());
    lastColl->setCalendarPopup(true);
    H1Form2->addRow(new QLabel(tr("Telèfon 2")), tel2);
    H1Form2->addRow(new QLabel(tr("Última recollida")), lastColl);    
    
    // H1Form1 and H1Form2 addition to H1 (Header 1)
    QHBoxLayout *H1 = new QHBoxLayout;
    H1->addLayout(H1Form1);
    H1->addLayout(H1Form2);
    
    // H1 (Header 1) addition to main layout
    content->addLayout(H1);
    
    // Horitzontal line
    QFrame *line = new QFrame;
    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);
    line->setLineWidth(1);
    line->setMidLineWidth(0);
    content->addWidget(line);
    
    // Creation of the Help addition area
    // Title
    QHBoxLayout *H2 = new QHBoxLayout;
    H2->addWidget(new QLabel(tr("Ajudes")));
    // Button to add
    QPushButton *But1 = new QPushButton(tr("Afegir"));
    connect(But1, SIGNAL(clicked()), this, SLOT(addHelp()));
    H2->addWidget(But1);
    // Spacer
    H2->addSpacerItem(new QSpacerItem(0, 0, QSizePolicy::Expanding));
    content->addLayout(H2);
            
    scroll = new QScrollArea;
    scroll->setWidgetResizable(true);
    scroll->setWidget(new QWidget);
    scroll->widget()->setLayout(content);
    
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
    tel1->setFocus();
}

InsDialog::~InsDialog()
{
    
}

void InsDialog::addHelp()
{
    QHBoxLayout *cont = new QHBoxLayout;
    cont->addWidget(new QLabel(tr("Ajuda %n:", "", helpCounter + 1)));
    
    
    content->insertLayout(helpCounter + 3, cont);
    ++helpCounter;
}
