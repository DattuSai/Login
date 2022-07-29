/********************************************************************************
** Form generated from reading UI file 'administrativeblock.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATIVEBLOCK_H
#define UI_ADMINISTRATIVEBLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AdministrativeBlock
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_search;
    QTextEdit *textEdit;
    QPushButton *pushButton_close;

    void setupUi(QDialog *AdministrativeBlock)
    {
        if (AdministrativeBlock->objectName().isEmpty())
            AdministrativeBlock->setObjectName(QString::fromUtf8("AdministrativeBlock"));
        AdministrativeBlock->resize(400, 300);
        gridLayout = new QGridLayout(AdministrativeBlock);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(AdministrativeBlock);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton_search = new QPushButton(AdministrativeBlock);
        pushButton_search->setObjectName(QString::fromUtf8("pushButton_search"));

        horizontalLayout->addWidget(pushButton_search);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(AdministrativeBlock);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        pushButton_close = new QPushButton(AdministrativeBlock);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));

        verticalLayout->addWidget(pushButton_close);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(AdministrativeBlock);

        QMetaObject::connectSlotsByName(AdministrativeBlock);
    } // setupUi

    void retranslateUi(QDialog *AdministrativeBlock)
    {
        AdministrativeBlock->setWindowTitle(QApplication::translate("AdministrativeBlock", "Dialog", nullptr));
        pushButton_search->setText(QApplication::translate("AdministrativeBlock", "Search", nullptr));
        pushButton_close->setText(QApplication::translate("AdministrativeBlock", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdministrativeBlock: public Ui_AdministrativeBlock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATIVEBLOCK_H
