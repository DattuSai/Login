/********************************************************************************
** Form generated from reading UI file 'employeesigin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEESIGIN_H
#define UI_EMPLOYEESIGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmployeeSigin
{
public:
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_Username;
    QLineEdit *lineEdit_Password;
    QLineEdit *lineEdit_Reenterpassword;
    QPushButton *pushButton_Back;

    void setupUi(QDialog *EmployeeSigin)
    {
        if (EmployeeSigin->objectName().isEmpty())
            EmployeeSigin->setObjectName(QString::fromUtf8("EmployeeSigin"));
        EmployeeSigin->resize(400, 300);
        pushButton = new QPushButton(EmployeeSigin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 200, 75, 23));
        layoutWidget = new QWidget(EmployeeSigin);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 100, 251, 76));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_Username = new QLineEdit(layoutWidget);
        lineEdit_Username->setObjectName(QString::fromUtf8("lineEdit_Username"));

        verticalLayout_2->addWidget(lineEdit_Username);

        lineEdit_Password = new QLineEdit(layoutWidget);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(lineEdit_Password);

        lineEdit_Reenterpassword = new QLineEdit(layoutWidget);
        lineEdit_Reenterpassword->setObjectName(QString::fromUtf8("lineEdit_Reenterpassword"));
        lineEdit_Reenterpassword->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(lineEdit_Reenterpassword);


        horizontalLayout->addLayout(verticalLayout_2);

        pushButton_Back = new QPushButton(EmployeeSigin);
        pushButton_Back->setObjectName(QString::fromUtf8("pushButton_Back"));
        pushButton_Back->setGeometry(QRect(60, 200, 75, 23));

        retranslateUi(EmployeeSigin);

        QMetaObject::connectSlotsByName(EmployeeSigin);
    } // setupUi

    void retranslateUi(QDialog *EmployeeSigin)
    {
        EmployeeSigin->setWindowTitle(QApplication::translate("EmployeeSigin", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("EmployeeSigin", "Sigin", nullptr));
        label->setText(QApplication::translate("EmployeeSigin", "Username:", nullptr));
        label_2->setText(QApplication::translate("EmployeeSigin", "Create New Password:", nullptr));
        label_3->setText(QApplication::translate("EmployeeSigin", "Re-enter Password:", nullptr));
        pushButton_Back->setText(QApplication::translate("EmployeeSigin", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmployeeSigin: public Ui_EmployeeSigin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEESIGIN_H
