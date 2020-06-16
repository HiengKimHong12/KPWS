#ifndef WRITER_H
#define WRITER_H

#include <QMainWindow>
#include <QFontDialog>
#include <QtPrintSupport/QPrintDialog>
namespace Ui {
class writer;
}

class writer : public QMainWindow
{
    Q_OBJECT

public:
    explicit writer(QWidget *parent = nullptr);
    ~writer();

private slots:
    void on_actionFont_triggered();

    void on_actionText_color_triggered();

    void on_actionText_background_triggered();

    void on_actionNew_triggered();

    void on_actionPrint_triggered();
    void on_actionBold_triggered();

//    void on_actionClose_triggered();

//    void on_actionClose_2_triggered();


    //void on_actionLeft_triggered();

//protected slots:
//    void	onPrint();
//    void	onPrinterAccepted( QPrinter * pPrinter );

    void on_actionItalic_triggered();

    void on_actionRight_triggered();

    void on_actionleft_triggered();

    void on_actionJustify_triggered();

    void on_actionUnderline_triggered();

    void on_actionClose_triggered();

    void on_actionOpen_triggered();

private:
    Ui::writer *ui;
    bool isBool = true;
    bool Bool = true;
};

#endif // WRITER_H
