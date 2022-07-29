/********************************************************************************
** Form generated from reading UI file 'employeehistory.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEHISTORY_H
#define UI_EMPLOYEEHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_EmployeeHistory
{
public:
    QTextEdit *textEdit;
    QPushButton *pushButton_Next;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *EmployeeHistory)
    {
        if (EmployeeHistory->objectName().isEmpty())
            EmployeeHistory->setObjectName(QString::fromUtf8("EmployeeHistory"));
        EmployeeHistory->resize(400, 322);
        textEdit = new QTextEdit(EmployeeHistory);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(9, 9, 381, 251));
        pushButton_Next = new QPushButton(EmployeeHistory);
        pushButton_Next->setObjectName(QString::fromUtf8("pushButton_Next"));
        pushButton_Next->setGeometry(QRect(110, 270, 75, 23));
        commandLinkButton = new QCommandLinkButton(EmployeeHistory);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(310, 270, 71, 41));

        retranslateUi(EmployeeHistory);

        QMetaObject::connectSlotsByName(EmployeeHistory);
    } // setupUi

    void retranslateUi(QDialog *EmployeeHistory)
    {
        EmployeeHistory->setWindowTitle(QApplication::translate("EmployeeHistory", "Dialog", nullptr));
        pushButton_Next->setText(QApplication::translate("EmployeeHistory", "Next", nullptr));
        commandLinkButton->setText(QApplication::translate("EmployeeHistory", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmployeeHistory: public Ui_EmployeeHistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEHISTORY_H
