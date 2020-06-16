#include "writer.h"
#include "ui_writer.h"
#include <QTextEdit>
#include <QDialog>
#include <QFileDialog>
#include <QColorDialog>
#include <QFont>
#include <QColor>
#include <QtPrintSupport/QPrintDialog>
#include <QtPrintSupport/QPrinter>
#include <QTextCursor>
#include <QMessageBox>

writer::writer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::writer)
{
    ui->setupUi(this);
    setWindowTitle("Writer");
}

writer::~writer()
{
    delete ui;
}

void writer::on_actionFont_triggered()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok, QFont("Khmer OS", 12), this);

    if(ok){
        ui->textEdit->setFont(font);
    }
}

void writer::on_actionText_color_triggered()
{
    QColor color = QColorDialog::getColor(Qt::white,this,"Color");
    if(color.isValid()){

       ui->textEdit->setTextColor(color);
    }
}

void writer::on_actionText_background_triggered()
{
    QColor color1 = QColorDialog::getColor(Qt::white,this,"Color");
    if(color1.isValid()){

       ui->textEdit->setTextBackgroundColor(color1);
}
}

void writer::on_actionNew_triggered()
{
    ui->textEdit->setText(QString());
}

void writer::on_actionPrint_triggered()
{
   QPrinter printer;
    printer.setPrinterName("print name");
    QPrintDialog dialog(&printer, this);
    if(dialog.exec()== QDialog::Rejected) return;
    ui->textEdit->print(&printer);

}

void writer::on_actionBold_triggered()
{
    if(isBool){
        ui->textEdit->setFontWeight(QFont::Bold);
        isBool = !isBool;
    }else{
        ui->textEdit->setFontWeight(QFont::Normal);
        isBool = !isBool;
    }

}

void writer::on_actionItalic_triggered()
{
    if(Bool){
        ui->textEdit->setFontItalic(QFont::StyleItalic);
        Bool = !Bool;
    }else{
        ui->textEdit->setFontItalic(QFont::StyleNormal);
        Bool = !Bool;
}}

void writer::on_actionRight_triggered()
{
    QTextEdit *edit1 =new QTextEdit("Right");
    ui->textEdit->setAlignment(Qt::AlignRight);
}

void writer::on_actionleft_triggered()
{
    QTextEdit *edit2 =new QTextEdit("Left");
    ui->textEdit->setAlignment(Qt::AlignLeft);
}

void writer::on_actionJustify_triggered()
{
    QTextEdit *edit3 =new QTextEdit("Center");
    ui->textEdit->setAlignment(Qt::AlignCenter);
}

void writer::on_actionUnderline_triggered()
{
    if(Bool){
    ui->textEdit->setFontUnderline(QFont::UnderlineResolved);
    Bool = ! Bool;
    }else{
        ui->textEdit->setFontUnderline(QFont::StyleNormal);
        Bool = ! Bool;
    }
}

void writer::on_actionClose_triggered()
{
    QMessageBox::information(this, "Title", "Are you want to close?");
    {
        QApplication::quit();
    }
}

void writer::on_actionOpen_triggered()
{
    QMessageBox::information(this, "Title", "Open");
}
