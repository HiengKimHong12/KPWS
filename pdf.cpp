#include "pdf.h"
#include "ui_pdf.h"

pdf::pdf(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pdf)
{
    ui->setupUi(this);
    setWindowTitle("PDF");
}

pdf::~pdf()
{
    delete ui;
}
