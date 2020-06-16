#include "yourfile.h"
#include "ui_yourfile.h"

yourfile::yourfile(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::yourfile)
{
    ui->setupUi(this);
    setWindowTitle("Your File");
}

yourfile::~yourfile()
{
    delete ui;
}
