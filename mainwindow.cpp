#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Employee_clicked()
{
    //hide();
    employee = new Employee();
    employee->show();
}

void MainWindow::on_Administrative_clicked()
{
    //hide();
    administrative = new Administrative();
    administrative->show();
}
