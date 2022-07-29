#ifndef ADMINISTRATIVEBLOCK_H
#define ADMINISTRATIVEBLOCK_H

#include <QDialog>
class QLineEdit;
namespace Ui {
class AdministrativeBlock;
}

class AdministrativeBlock : public QDialog
{
    Q_OBJECT

public:
    explicit AdministrativeBlock(QWidget *parent = nullptr);
    ~AdministrativeBlock();

private slots:
    void on_pushButton_search_clicked();

    void on_pushButton_close_clicked();

private:
    Ui::AdministrativeBlock *ui;
    QLineEdit *lineEdit;
};

#endif // ADMINISTRATIVEBLOCK_H
