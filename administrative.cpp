#include "administrative.h"
#include "ui_administrative.h"
#include <QMessageBox>

Administrative::Administrative(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Administrative)
{
    ui->setupUi(this);
}

Administrative::~Administrative()
{
    delete ui;
}

void Administrative::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_Username->text();
    QString password = ui->lineEdit_Password->text();
    if(username=="test" && password=="test"){
        hide();
        administrativeblock = new AdministrativeBlock();
        administrativeblock->show();
    }   else{ QMessageBox::warning(this,"....","Username and Password is not correct"); }
}
