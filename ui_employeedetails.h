/********************************************************************************
** Form generated from reading UI file 'employeedetails.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEDETAILS_H
#define UI_EMPLOYEEDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EmployeeDetails
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QLabel *label_username;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_LoginTime;
    QLabel *label_LogOutTime;
    QPushButton *pushButton_LogOut;
    QLabel *label;
    QLabel *label_Date;

    void setupUi(QDialog *EmployeeDetails)
    {
        if (EmployeeDetails->objectName().isEmpty())
            EmployeeDetails->setObjectName(QString::fromUtf8("EmployeeDetails"));
        EmployeeDetails->resize(400, 300);
        horizontalLayout = new QHBoxLayout(EmployeeDetails);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(EmployeeDetails);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        label_username = new QLabel(groupBox);
        label_username->setObjectName(QString::fromUtf8("label_username"));
        label_username->setGeometry(QRect(30, 130, 151, 31));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 20, 71, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 50, 71, 16));
        label_LoginTime = new QLabel(groupBox);
        label_LoginTime->setObjectName(QString::fromUtf8("label_LoginTime"));
        label_LoginTime->setGeometry(QRect(240, 20, 81, 16));
        label_LogOutTime = new QLabel(groupBox);
        label_LogOutTime->setObjectName(QString::fromUtf8("label_LogOutTime"));
        label_LogOutTime->setGeometry(QRect(240, 50, 81, 16));
        pushButton_LogOut = new QPushButton(groupBox);
        pushButton_LogOut->setObjectName(QString::fromUtf8("pushButton_LogOut"));
        pushButton_LogOut->setGeometry(QRect(270, 210, 75, 23));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 80, 47, 13));
        label_Date = new QLabel(groupBox);
        label_Date->setObjectName(QString::fromUtf8("label_Date"));
        label_Date->setGeometry(QRect(240, 80, 81, 16));

        horizontalLayout->addWidget(groupBox);


        retranslateUi(EmployeeDetails);

        QMetaObject::connectSlotsByName(EmployeeDetails);
    } // setupUi

    void retranslateUi(QDialog *EmployeeDetails)
    {
        EmployeeDetails->setWindowTitle(QApplication::translate("EmployeeDetails", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label_username->setText(QString());
        label_2->setText(QApplication::translate("EmployeeDetails", "Login Time:", nullptr));
        label_3->setText(QApplication::translate("EmployeeDetails", "LogOut Time:", nullptr));
        label_LoginTime->setText(QString());
        label_LogOutTime->setText(QString());
        pushButton_LogOut->setText(QApplication::translate("EmployeeDetails", "Log-Out", nullptr));
        label->setText(QApplication::translate("EmployeeDetails", "Date:", nullptr));
        label_Date->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EmployeeDetails: public Ui_EmployeeDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEDETAILS_H
