#ifndef PRODUCTPLANNING_H
#define PRODUCTPLANNING_H

#include <QMainWindow>

namespace Ui {
class productplanning;
}

class productplanning : public QMainWindow
{
    Q_OBJECT

public:
    explicit productplanning(QWidget *parent = nullptr);
    ~productplanning();

private:
    Ui::productplanning *ui;
};

#endif // PRODUCTPLANNING_H
