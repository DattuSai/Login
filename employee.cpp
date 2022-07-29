#include "employee.h"
#include "ui_employee.h"
#include <QPixmap>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

extern QString username ;

Employee::Employee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Employee)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/SaidattuSai/Pictures/Saved Pictures/Picture.png");
    ui->label_Picture->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
}

Employee::~Employee()
{
    delete ui;
}

void Employee::on_EmployeeSigin_clicked()
{
    //hide();
    employeesigin = new EmployeeSigin();
    employeesigin->show();
}

void Employee::on_EmployeeLogin_clicked()
{
    username = ui->lineEdit_Username->text();
    QString password = ui->lineEdit_Password->text();
    if((username=="") && (password=="")){
        QMessageBox::warning(this,".....","Enter the valid data");
    } else{
        QString text = username+password;
        QFile file("C:/Users/SaidattuSai/Documents/OfficeLogin/EmployeeSigin.xls");
        if(file.open(QFile::ReadOnly | QFile::Text)){
            QTextStream in(&file);
            QString line;
            while(!in.atEnd()){
                line = in.readLine();
                if(text==line){
                    hide();
                    employeehistory = new EmployeeHistory;
                    employeehistory->show();
                    break;
                }
            }
            if(line!=text){QMessageBox::warning(this,"Wrong Entry","Username and Password is not correct");}
        }
    }
}
