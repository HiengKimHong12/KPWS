#include "gallery.h"
#include "ui_gallery.h"

gallery::gallery(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gallery)
{
    ui->setupUi(this);
    setWindowTitle("Gallery");
}

gallery::~gallery()
{
    delete ui;
}
