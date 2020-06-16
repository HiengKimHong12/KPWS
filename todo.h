#ifndef TODO_H
#define TODO_H

#include <QMainWindow>

namespace Ui {
class todo;
}

class todo : public QMainWindow
{
    Q_OBJECT

public:
    explicit todo(QWidget *parent = nullptr);
    ~todo();

private:
    Ui::todo *ui;
};

#endif // TODO_H
