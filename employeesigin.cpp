#include "employeesigin.h"
#include "ui_employeesigin.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

EmployeeSigin::EmployeeSigin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmployeeSigin)
{
    ui->setupUi(this);
}

EmployeeSigin::~EmployeeSigin()
{
    delete ui;
}

void EmployeeSigin::on_pushButton_clicked()
{
    QString a = ui->lineEdit_Username->text();
    QString b = ui->lineEdit_Password->text();
    QString c = ui->lineEdit_Reenterpassword->text();
    if((a=="") && (b=="") && (c=="")){
        QMessageBox::warning(this,"Data Required","Please enter valid data");
    }   else{
        if(b==c){
            QFile file("C:/Users/SaidattuSai/Documents/OfficeLogin/EmployeeSigin.xls");
            if(file.open(QFile::WriteOnly | QFile::Text | QFile::Append)){
                if(file.pos()==0){
                    QTextStream Out(&file);
                    QString text = "UserName";
                    QString text1 = "Created Password";
                    Out<<text<<text1<<endl;
                }
                QTextStream Out(&file);
                Out<<a<<b<<endl;
                file.flush();
                file.close();
                close();
            }
        }   else{ QMessageBox::warning(this,"WARNING","Check you are Re-enter Password"); }
    }
}

void EmployeeSigin::on_pushButton_Back_clicked()
{
    close();
}
