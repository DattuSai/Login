#include "administrativeblock.h"
#include "ui_administrativeblock.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>

AdministrativeBlock::AdministrativeBlock(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdministrativeBlock)
{
    ui->setupUi(this);
    QFile file("C:/Users/SaidattuSai/Documents/OfficeLogin/EmployeeTimings.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,".....","Text File not opened");
    }
    QTextStream in(&file);
    QString data = in.readAll();
    ui->textEdit->setText(data);
    file.close();
}

AdministrativeBlock::~AdministrativeBlock()
{
    delete ui;
}

void AdministrativeBlock::on_pushButton_search_clicked()
{
    ui->textEdit->clear();
    QString text;
    QString line = ui->lineEdit->text();
    if(line.isEmpty()){
        QMessageBox::warning(this,"Empty line","Please enter the name");
        return;
    }   else{ text = line; }

    QFile file("C:/Users/SaidattuSai/Documents/OfficeLogin/EmployeeTimings.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,".....","Text1 File not opened");
    }
    QTextStream in(&file);
    while(!in.atEnd()){
        QString text1 = in.readLine();
        int n = text1.length();
        QString text2;
        for(int i=0; i<n; i++){
            if(text1[i]=="\t"){
                break;
            }   else{
                text2[i] = text1[i];
            }
        }
        if(text==text2){  ui->textEdit->append(text1);  }
    }
    file.close();
}

void AdministrativeBlock::on_pushButton_close_clicked()
{
    close();
}
