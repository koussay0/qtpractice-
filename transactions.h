#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H

#include <QDialog>

namespace Ui {
class transactions;
}

class transactions : public QDialog
{
    Q_OBJECT

public:
    explicit transactions(QWidget *parent = nullptr);
    ~transactions();

private:
    Ui::transactions *ui;
};

#endif // TRANSACTIONS_H
