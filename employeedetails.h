#ifndef EMPLOYEEDETAILS_H
#define EMPLOYEEDETAILS_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class EmployeeDetails;
}

class EmployeeDetails : public QDialog
{
    Q_OBJECT

public:
    explicit EmployeeDetails(QWidget *parent = nullptr);
    ~EmployeeDetails();

private:
    Ui::EmployeeDetails *ui;
    QTimer *timer;
    QTimer *timer1;
public slots:
    void myfunction();
    void myfunction1();
private slots:
    void on_pushButton_LogOut_clicked();
};

#endif // EMPLOYEEDETAILS_H
