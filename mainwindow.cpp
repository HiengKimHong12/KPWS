#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopServices>
#include <QUrl>
#include "writer.h"
#include <QDialog>
#include "gridwindow.h"
#include "presentation.h"
#include "gallery.h"
#include "productplanning.h"
#include "pdf.h"
#include "yourfile.h"
#include "todo.h"
#include "workspace.h"
#include <QDateTime>
#include <QTimer>
#include <QPixmap>
#include <qtimer.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("KOOMPI WorkSpace");
    QPixmap pix("/home/koompi/sunset.jpg");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_doccumenttoolButton_clicked()
{
    writer *dialog = new writer(this);
    dialog->show();
}

void MainWindow::on_gridtoolButton_clicked()
{
    gridwindow *window = new gridwindow(this);
    window ->show();
}

void MainWindow::on_presentationtoolButton_clicked()
{
    presentation *tion = new presentation(this);
    tion->show();
}

void MainWindow::on_koompitoolButton_clicked()
{
    QString link = "http://www.koompi.com"
                   "";
    QDesktopServices::openUrl(QUrl(link));
}

void MainWindow::on_gallerytoolButton_clicked()
{
    gallery *lery  = new gallery(this);
    lery->show();
}

void MainWindow::on_producttoolButton_clicked()
{
    productplanning *plan = new productplanning(this);
    plan->show();
}

void MainWindow::on_pdftoolButton_clicked()
{
    pdf *dd = new pdf(this);
    dd->show();
}

void MainWindow::on_yourfiletoolButton_clicked()
{
    yourfile *file  = new yourfile(this);
    file->show();
}

void MainWindow::on_todotoolButton_clicked()
{
    todo *dooo = new todo(this);
    dooo->show();
}

void MainWindow::on_workspacetoolButton_clicked()
{
    workspace *space = new workspace(this);
    space->show();
}


void MainWindow::showTime()
{
    QTime time=QTime::currentTime();
    QString time_text = time.toString("hh : mm : ss");
    ui->timeEdit_clock->setTime(time);
}
