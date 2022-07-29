#ifndef EMPLOYEESIGIN_H
#define EMPLOYEESIGIN_H

#include <QDialog>
#include "employeedetails.h"

namespace Ui {
class EmployeeSigin;
}

class EmployeeSigin : public QDialog
{
    Q_OBJECT

public:
    explicit EmployeeSigin(QWidget *parent = nullptr);
    ~EmployeeSigin();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_Back_clicked();

private:
    Ui::EmployeeSigin *ui;
    EmployeeDetails *employeedetails;
};

#endif // EMPLOYEESIGIN_H
