#include "employeedetails.h"
#include "ui_employeedetails.h"
#include <QDateTime>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QDate>

extern QString username;

EmployeeDetails::EmployeeDetails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmployeeDetails)
{
    ui->setupUi(this);

    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(myfunction()));
    timer->start(1000);
    timer1 = new QTimer();
    connect(timer1,SIGNAL(timeout()),this,SLOT(myfunction1()));
    timer1->start(1000);

    QDate date = QDate::currentDate();
    QString setDate = date.toString();
    ui->label_Date->setText(setDate);
}

EmployeeDetails::~EmployeeDetails()
{
    delete ui;
}

void EmployeeDetails::myfunction()
{
    QTime time = QTime::currentTime();
    QString time_text = time.toString("hh:mm:ss");
    ui->label_LoginTime->setText(time_text);
    timer->stop();
}
void EmployeeDetails::myfunction1()
{
    QTime time = QTime::currentTime();
    QString time_text = time.toString("hh:mm:ss");
    ui->label_LogOutTime->setText(time_text);
}

void EmployeeDetails::on_pushButton_LogOut_clicked()
{
    timer1->stop();
    QFile f("C:/Users/SaidattuSai/Documents/OfficeLogin/EmployeeTimings.txt");
    if(f.open(QFile::WriteOnly | QFile::Text | QFile::Append)){
        QTextStream Out(&f);
        QString text = username;
        QString text1 = ui->label_Date->text();
        QString text2 = ui->label_LoginTime->text();
        QString text3 = ui->label_LogOutTime->text();
        ui->label_username->setText(username);
        Out<<text<<"\t"<<text1<<"\t"<<"\t"<<text2<<"\t"<<text3<<endl;
        f.close();
    }
    close();

}
