#include "productplanning.h"
#include "ui_productplanning.h"

productplanning::productplanning(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::productplanning)
{
    ui->setupUi(this);
    setWindowTitle("Product planning");
}

productplanning::~productplanning()
{
    delete ui;
}
