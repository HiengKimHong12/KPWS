#ifndef GALLERY_H
#define GALLERY_H

#include <QMainWindow>

namespace Ui {
class gallery;
}

class gallery : public QMainWindow
{
    Q_OBJECT

public:
    explicit gallery(QWidget *parent = nullptr);
    ~gallery();

private:
    Ui::gallery *ui;
};

#endif // GALLERY_H
