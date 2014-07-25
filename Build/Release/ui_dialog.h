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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *name;
    QLabel *label_2;
    QLineEdit *surname;
    QLabel *label_5;
    QDateEdit *birthDate;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QLineEdit *NIF;
    QLabel *label_4;
    QLineEdit *cNIF;
    QLabel *label_10;
    QLineEdit *phone;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *adress;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout_5;
    QLabel *label_9;
    QSpinBox *famMembers;
    QLabel *label_7;
    QDateEdit *beginHelp;
    QFormLayout *formLayout_2;
    QLabel *label_11;
    QSpinBox *numberHelp;
    QLabel *label_8;
    QDateEdit *endHelp;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(447, 209);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dialog->sizePolicy().hasHeightForWidth());
        Dialog->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(Dialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        name = new QLineEdit(Dialog);
        name->setObjectName(QStringLiteral("name"));

        formLayout->setWidget(0, QFormLayout::FieldRole, name);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        surname = new QLineEdit(Dialog);
        surname->setObjectName(QStringLiteral("surname"));

        formLayout->setWidget(1, QFormLayout::FieldRole, surname);

        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        birthDate = new QDateEdit(Dialog);
        birthDate->setObjectName(QStringLiteral("birthDate"));
        birthDate->setCursor(QCursor(Qt::IBeamCursor));
        birthDate->setDateTime(QDateTime(QDate(1990, 1, 1), QTime(0, 0, 0)));

        formLayout->setWidget(2, QFormLayout::FieldRole, birthDate);


        horizontalLayout_3->addLayout(formLayout);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        NIF = new QLineEdit(Dialog);
        NIF->setObjectName(QStringLiteral("NIF"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, NIF);

        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_4);

        cNIF = new QLineEdit(Dialog);
        cNIF->setObjectName(QStringLiteral("cNIF"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, cNIF);

        label_10 = new QLabel(Dialog);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_10);

        phone = new QLineEdit(Dialog);
        phone->setObjectName(QStringLiteral("phone"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, phone);


        horizontalLayout_3->addLayout(formLayout_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_2->addWidget(label_6);

        adress = new QLineEdit(Dialog);
        adress->setObjectName(QStringLiteral("adress"));

        horizontalLayout_2->addWidget(adress);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        label_9 = new QLabel(Dialog);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_9);

        famMembers = new QSpinBox(Dialog);
        famMembers->setObjectName(QStringLiteral("famMembers"));
        famMembers->setCursor(QCursor(Qt::IBeamCursor));
        famMembers->setMinimum(1);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, famMembers);

        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_7);

        beginHelp = new QDateEdit(Dialog);
        beginHelp->setObjectName(QStringLiteral("beginHelp"));
        beginHelp->setCalendarPopup(true);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, beginHelp);


        horizontalLayout->addLayout(formLayout_5);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_11 = new QLabel(Dialog);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_11);

        numberHelp = new QSpinBox(Dialog);
        numberHelp->setObjectName(QStringLiteral("numberHelp"));
        numberHelp->setCursor(QCursor(Qt::IBeamCursor));
        numberHelp->setMinimum(0);
        numberHelp->setValue(0);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, numberHelp);

        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        endHelp = new QDateEdit(Dialog);
        endHelp->setObjectName(QStringLiteral("endHelp"));
        endHelp->setCalendarPopup(true);
        endHelp->setTimeSpec(Qt::LocalTime);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, endHelp);


        horizontalLayout->addLayout(formLayout_2);


        verticalLayout_2->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        QWidget::setTabOrder(endHelp, birthDate);
        QWidget::setTabOrder(birthDate, adress);
        QWidget::setTabOrder(adress, famMembers);
        QWidget::setTabOrder(famMembers, beginHelp);
        QWidget::setTabOrder(beginHelp, phone);
        QWidget::setTabOrder(phone, cNIF);
        QWidget::setTabOrder(cNIF, numberHelp);
        QWidget::setTabOrder(numberHelp, NIF);
        QWidget::setTabOrder(NIF, surname);
        QWidget::setTabOrder(surname, name);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label->setText(QApplication::translate("Dialog", "Nom*", 0));
        label_2->setText(QApplication::translate("Dialog", "Cognoms*", 0));
        label_5->setText(QApplication::translate("Dialog", "Data naixement", 0));
        label_3->setText(QApplication::translate("Dialog", "DNI*", 0));
        label_4->setText(QApplication::translate("Dialog", "DNI parella", 0));
        label_10->setText(QApplication::translate("Dialog", "Tel\303\250fon", 0));
        label_6->setText(QApplication::translate("Dialog", "Adre\303\247a", 0));
        label_9->setText(QApplication::translate("Dialog", "Membres de la fam\303\255lia*", 0));
        label_7->setText(QApplication::translate("Dialog", "Data comen\303\247ament ajuda*", 0));
        label_11->setText(QApplication::translate("Dialog", "Nombre vegades ajudat", 0));
        label_8->setText(QApplication::translate("Dialog", "Data finalitzaci\303\263 ajuda", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
