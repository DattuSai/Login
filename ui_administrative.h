/********************************************************************************
** Form generated from reading UI file 'administrative.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATIVE_H
#define UI_ADMINISTRATIVE_H

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

class Ui_Administrative
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_Login;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_Username;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_Password;

    void setupUi(QDialog *Administrative)
    {
        if (Administrative->objectName().isEmpty())
            Administrative->setObjectName(QString::fromUtf8("Administrative"));
        Administrative->resize(400, 300);
        groupBox = new QGroupBox(Administrative);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(100, 80, 181, 141));
        groupBox->setAlignment(Qt::AlignCenter);
        pushButton_Login = new QPushButton(groupBox);
        pushButton_Login->setObjectName(QString::fromUtf8("pushButton_Login"));
        pushButton_Login->setGeometry(QRect(90, 100, 75, 23));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 40, 161, 52));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_Username = new QLineEdit(widget);
        lineEdit_Username->setObjectName(QString::fromUtf8("lineEdit_Username"));

        horizontalLayout_2->addWidget(lineEdit_Username);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_Password = new QLineEdit(widget);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEdit_Password);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Administrative);

        QMetaObject::connectSlotsByName(Administrative);
    } // setupUi

    void retranslateUi(QDialog *Administrative)
    {
        Administrative->setWindowTitle(QApplication::translate("Administrative", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("Administrative", "Administrative Login", nullptr));
        pushButton_Login->setText(QApplication::translate("Administrative", "Login", nullptr));
        label->setText(QApplication::translate("Administrative", "Username:", nullptr));
        label_2->setText(QApplication::translate("Administrative", "Password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Administrative: public Ui_Administrative {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATIVE_H
