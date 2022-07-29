#ifndef EMPLOYEEHISTORY_H
#define EMPLOYEEHISTORY_H

#include <QDialog>
#include <employeedetails.h>

namespace Ui {
class EmployeeHistory;
}

class EmployeeHistory : public QDialog
{
    Q_OBJECT

public:
    explicit EmployeeHistory(QWidget *parent = nullptr);
    ~EmployeeHistory();

private slots:
    void on_commandLinkButton_clicked();

private:
    Ui::EmployeeHistory *ui;
    EmployeeDetails *employeedetails;
};

#endif // EMPLOYEEHISTORY_H
