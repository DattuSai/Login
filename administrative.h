#ifndef ADMINISTRATIVE_H
#define ADMINISTRATIVE_H

#include <QDialog>
#include <administrativeblock.h>

namespace Ui {
class Administrative;
}

class Administrative : public QDialog
{
    Q_OBJECT

public:
    explicit Administrative(QWidget *parent = nullptr);
    ~Administrative();

private slots:
    void on_pushButton_Login_clicked();

private:
    Ui::Administrative *ui;
    AdministrativeBlock *administrativeblock;
};

#endif // ADMINISTRATIVE_H
