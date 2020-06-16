#ifndef GRIDWINDOW_H
#define GRIDWINDOW_H

#include <QMainWindow>

namespace Ui {
class gridwindow;
}

class gridwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit gridwindow(QWidget *parent = nullptr);
    ~gridwindow();

private:
    Ui::gridwindow *ui;
};

#endif // GRIDWINDOW_H
