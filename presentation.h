#ifndef PRESENTATION_H
#define PRESENTATION_H

#include <QMainWindow>

namespace Ui {
class presentation;
}

class presentation : public QMainWindow
{
    Q_OBJECT

public:
    explicit presentation(QWidget *parent = nullptr);
    ~presentation();

private:
    Ui::presentation *ui;
};

#endif // PRESENTATION_H
