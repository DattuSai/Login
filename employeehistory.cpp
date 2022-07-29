#include "employeehistory.h"
#include "ui_employeehistory.h"
#include <QFile>
#include <QMessageBox>
#include <QDebug>

QString username;

EmployeeHistory::EmployeeHistory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmployeeHistory)
{
    ui->setupUi(this);

    QFile file("C:/Users/SaidattuSai/Documents/OfficeLogin/EmployeeTimings.txt");
    file.open(QFile::ReadOnly | QFile::Text);
    QTextStream in(&file);
    while(!in.atEnd()){
        QString text1 = in.readLine();
        int n = text1.length();
        QString text2;
        for(int i=0; i<n; i++){
            if(text1[i]=="\t"){ break; }
            else{ text2[i] = text1[i]; }
        }
        if(username==text2){ ui->textEdit->append(text1); }
    }
    file.close();
}

EmployeeHistory::~EmployeeHistory()
{
    delete ui;
}

void EmployeeHistory::on_commandLinkButton_clicked()
{
    hide();
    employeedetails = new EmployeeDetails;
    employeedetails->show();
}
