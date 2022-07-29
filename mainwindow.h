#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <employee.h>
#include <administrative.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Employee_clicked();

    void on_Administrative_clicked();

private:
    Ui::MainWindow *ui;
    Employee *employee;
    Administrative *administrative;
};

#endif // MAINWINDOW_H
