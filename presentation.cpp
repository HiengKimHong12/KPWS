#include "presentation.h"
#include "ui_presentation.h"

presentation::presentation(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::presentation)
{
    ui->setupUi(this);
    setWindowTitle("Presentation");
}

presentation::~presentation()
{
    delete ui;
}
