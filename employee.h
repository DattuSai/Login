#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QDialog>
#include <employeesigin.h>
#include <employeehistory.h>

namespace Ui {
class Employee;
}

class Employee : public QDialog
{
    Q_OBJECT

public:
    explicit Employee(QWidget *parent = nullptr);
    ~Employee();



private slots:
    void on_EmployeeSigin_clicked();

    void on_EmployeeLogin_clicked();

private:
    Ui::Employee *ui;
    EmployeeSigin *employeesigin;
    EmployeeHistory *employeehistory;
};

#endif // EMPLOYEE_H
