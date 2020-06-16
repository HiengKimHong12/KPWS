#include "todo.h"
#include "ui_todo.h"

todo::todo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::todo)
{
    ui->setupUi(this);
    setWindowTitle("To Do");
}

todo::~todo()
{
    delete ui;
}
