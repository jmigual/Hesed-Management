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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QDateEdit *dateEdit_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QDateEdit *dateEdit_3;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QLabel *label_9;
    QSpinBox *spinBox;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(640, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dialog->sizePolicy().hasHeightForWidth());
        Dialog->setSizePolicy(sizePolicy);
        widget = new QWidget(Dialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 170, 219, 52));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        dateEdit_2 = new QDateEdit(widget);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setCalendarPopup(true);

        horizontalLayout_5->addWidget(dateEdit_2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_6->addWidget(label_8);

        dateEdit_3 = new QDateEdit(widget);
        dateEdit_3->setObjectName(QStringLiteral("dateEdit_3"));
        dateEdit_3->setCalendarPopup(true);
        dateEdit_3->setTimeSpec(Qt::LocalTime);

        horizontalLayout_6->addWidget(dateEdit_3);


        verticalLayout->addLayout(horizontalLayout_6);

        widget1 = new QWidget(Dialog);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(30, 20, 365, 108));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_3 = new QLineEdit(widget1);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_2->addWidget(lineEdit_3);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lineEdit_4 = new QLineEdit(widget1);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_2->addWidget(lineEdit_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_6 = new QLabel(widget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        lineEdit_5 = new QLineEdit(widget1);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout_3->addWidget(lineEdit_5);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        dateEdit = new QDateEdit(widget1);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setCursor(QCursor(Qt::IBeamCursor));
        dateEdit->setDateTime(QDateTime(QDate(1990, 1, 1), QTime(0, 0, 0)));

        horizontalLayout_4->addWidget(dateEdit);

        label_9 = new QLabel(widget1);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_4->addWidget(label_9);

        spinBox = new QSpinBox(widget1);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setCursor(QCursor(Qt::IBeamCursor));
        spinBox->setMinimum(1);

        horizontalLayout_4->addWidget(spinBox);


        verticalLayout_2->addLayout(horizontalLayout_4);

        widget2 = new QWidget(Dialog);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(350, 440, 206, 27));
        horizontalLayout_8 = new QHBoxLayout(widget2);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pushButton = new QPushButton(widget2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_7->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_7->addWidget(pushButton_2);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label_7->setText(QApplication::translate("Dialog", "Data comen\303\247ament ajuda*", 0));
        label_8->setText(QApplication::translate("Dialog", "Data finalitzaci\303\263 ajuda", 0));
        label->setText(QApplication::translate("Dialog", "Nom*", 0));
        label_2->setText(QApplication::translate("Dialog", "Cognoms*", 0));
        label_3->setText(QApplication::translate("Dialog", "DNI*", 0));
        label_4->setText(QApplication::translate("Dialog", "DNI parella", 0));
        label_6->setText(QApplication::translate("Dialog", "Adre\303\247a", 0));
        label_5->setText(QApplication::translate("Dialog", "Data naixement", 0));
        label_9->setText(QApplication::translate("Dialog", "Membres de la fam\303\255lia*", 0));
        pushButton->setText(QApplication::translate("Dialog", "D'acord", 0));
        pushButton_2->setText(QApplication::translate("Dialog", "Cancela", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
