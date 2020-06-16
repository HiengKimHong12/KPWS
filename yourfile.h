#ifndef YOURFILE_H
#define YOURFILE_H

#include <QMainWindow>

namespace Ui {
class yourfile;
}

class yourfile : public QMainWindow
{
    Q_OBJECT

public:
    explicit yourfile(QWidget *parent = nullptr);
    ~yourfile();

private:
    Ui::yourfile *ui;
};

#endif // YOURFILE_H
