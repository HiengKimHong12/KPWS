#include "gridwindow.h"
#include "ui_gridwindow.h"

gridwindow::gridwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gridwindow)
{
    ui->setupUi(this);
    setWindowTitle("Grid");
}

gridwindow::~gridwindow()
{
    delete ui;
}
