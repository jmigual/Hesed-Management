/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QFormLayout *formLayout_2;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QLineEdit *name;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_2;
    QLineEdit *surname;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *NIF;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_4;
    QLineEdit *cNIF;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *adress;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QDateEdit *birthDate;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QLineEdit *lineEdit;
    QSplitter *splitter;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QSpinBox *famMembers;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QDateEdit *beginHelp;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QDateEdit *endHelp;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(640, 480);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dialog->sizePolicy().hasHeightForWidth());
        Dialog->setSizePolicy(sizePolicy);
        formLayout_2 = new QFormLayout(Dialog);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_8->addWidget(label);

        name = new QLineEdit(Dialog);
        name->setObjectName(QStringLiteral("name"));

        horizontalLayout_8->addWidget(name);


        formLayout->setLayout(0, QFormLayout::LabelRole, horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_9->addWidget(label_2);

        surname = new QLineEdit(Dialog);
        surname->setObjectName(QStringLiteral("surname"));

        horizontalLayout_9->addWidget(surname);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        NIF = new QLineEdit(Dialog);
        NIF->setObjectName(QStringLiteral("NIF"));

        horizontalLayout_4->addWidget(NIF);


        formLayout->setLayout(2, QFormLayout::LabelRole, horizontalLayout_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_10->addWidget(label_4);

        cNIF = new QLineEdit(Dialog);
        cNIF->setObjectName(QStringLiteral("cNIF"));

        horizontalLayout_10->addWidget(cNIF);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_10);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        adress = new QLineEdit(Dialog);
        adress->setObjectName(QStringLiteral("adress"));

        horizontalLayout_3->addWidget(adress);


        formLayout->setLayout(4, QFormLayout::SpanningRole, horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        birthDate = new QDateEdit(Dialog);
        birthDate->setObjectName(QStringLiteral("birthDate"));
        birthDate->setCursor(QCursor(Qt::IBeamCursor));
        birthDate->setDateTime(QDateTime(QDate(1990, 1, 1), QTime(0, 0, 0)));

        horizontalLayout_2->addWidget(birthDate);


        formLayout->setLayout(6, QFormLayout::LabelRole, horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_10 = new QLabel(Dialog);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout->addWidget(label_10);

        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        formLayout->setLayout(6, QFormLayout::FieldRole, horizontalLayout);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, formLayout);

        splitter = new QSplitter(Dialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        widget = new QWidget(splitter);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_7 = new QHBoxLayout(widget);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_7->addWidget(label_9);

        famMembers = new QSpinBox(widget);
        famMembers->setObjectName(QStringLiteral("famMembers"));
        famMembers->setCursor(QCursor(Qt::IBeamCursor));
        famMembers->setMinimum(1);

        horizontalLayout_7->addWidget(famMembers);

        splitter->addWidget(widget);
        widget1 = new QWidget(splitter);
        widget1->setObjectName(QStringLiteral("widget1"));
        horizontalLayout_5 = new QHBoxLayout(widget1);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        beginHelp = new QDateEdit(widget1);
        beginHelp->setObjectName(QStringLiteral("beginHelp"));
        beginHelp->setCalendarPopup(true);

        horizontalLayout_5->addWidget(beginHelp);

        splitter->addWidget(widget1);
        widget2 = new QWidget(splitter);
        widget2->setObjectName(QStringLiteral("widget2"));
        horizontalLayout_6 = new QHBoxLayout(widget2);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_6->addWidget(label_8);

        endHelp = new QDateEdit(widget2);
        endHelp->setObjectName(QStringLiteral("endHelp"));
        endHelp->setCalendarPopup(true);
        endHelp->setTimeSpec(Qt::LocalTime);

        horizontalLayout_6->addWidget(endHelp);

        splitter->addWidget(widget2);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, splitter);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, buttonBox);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label->setText(QApplication::translate("Dialog", "Nom*", 0));
        label_2->setText(QApplication::translate("Dialog", "Cognoms*", 0));
        label_3->setText(QApplication::translate("Dialog", "DNI*", 0));
        label_4->setText(QApplication::translate("Dialog", "DNI parella", 0));
        label_6->setText(QApplication::translate("Dialog", "Adre\303\247a", 0));
        label_5->setText(QApplication::translate("Dialog", "Data naixement", 0));
        label_10->setText(QApplication::translate("Dialog", "Tel\303\250fon", 0));
        label_9->setText(QApplication::translate("Dialog", "Membres de la fam\303\255lia*", 0));
        label_7->setText(QApplication::translate("Dialog", "Data comen\303\247ament ajuda*", 0));
        label_8->setText(QApplication::translate("Dialog", "Data finalitzaci\303\263 ajuda", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
