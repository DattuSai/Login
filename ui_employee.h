/********************************************************************************
** Form generated from reading UI file 'employee.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEE_H
#define UI_EMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Employee
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_Username;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_Password;
    QPushButton *EmployeeLogin;
    QLabel *label_Picture;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QPushButton *EmployeeSigin;

    void setupUi(QDialog *Employee)
    {
        if (Employee->objectName().isEmpty())
            Employee->setObjectName(QString::fromUtf8("Employee"));
        Employee->resize(400, 300);
        horizontalLayout = new QHBoxLayout(Employee);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(Employee);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(150, 80, 211, 131));
        widget = new QWidget(groupBox_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(11, 21, 191, 70));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";"));

        horizontalLayout_2->addWidget(label);

        lineEdit_Username = new QLineEdit(widget);
        lineEdit_Username->setObjectName(QString::fromUtf8("lineEdit_Username"));

        horizontalLayout_2->addWidget(lineEdit_Username);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_Password = new QLineEdit(widget);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(lineEdit_Password);


        verticalLayout->addLayout(horizontalLayout_3);

        EmployeeLogin = new QPushButton(groupBox_2);
        EmployeeLogin->setObjectName(QString::fromUtf8("EmployeeLogin"));
        EmployeeLogin->setGeometry(QRect(120, 100, 75, 23));
        EmployeeLogin->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";"));
        label_Picture = new QLabel(groupBox);
        label_Picture->setObjectName(QString::fromUtf8("label_Picture"));
        label_Picture->setGeometry(QRect(20, 90, 111, 111));
        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(180, 230, 161, 25));
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";"));

        horizontalLayout_4->addWidget(label_3);

        EmployeeSigin = new QPushButton(widget1);
        EmployeeSigin->setObjectName(QString::fromUtf8("EmployeeSigin"));
        EmployeeSigin->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(255, 0, 0);"));

        horizontalLayout_4->addWidget(EmployeeSigin);


        horizontalLayout->addWidget(groupBox);


        retranslateUi(Employee);

        QMetaObject::connectSlotsByName(Employee);
    } // setupUi

    void retranslateUi(QDialog *Employee)
    {
        Employee->setWindowTitle(QApplication::translate("Employee", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("Employee", "Employee Login", nullptr));
        groupBox_2->setTitle(QString());
        label->setText(QApplication::translate("Employee", "Username:", nullptr));
        label_2->setText(QApplication::translate("Employee", "Password:", nullptr));
        EmployeeLogin->setText(QApplication::translate("Employee", "Login", nullptr));
        label_Picture->setText(QString());
        label_3->setText(QApplication::translate("Employee", "New user?", nullptr));
        EmployeeSigin->setText(QApplication::translate("Employee", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Employee: public Ui_Employee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEE_H
