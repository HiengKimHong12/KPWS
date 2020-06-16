#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_doccumenttoolButton_clicked();

    void on_gridtoolButton_clicked();

    void on_presentationtoolButton_clicked();

    void on_koompitoolButton_clicked();

    void on_gallerytoolButton_clicked();

    void on_producttoolButton_clicked();

    void on_pdftoolButton_clicked();

    void on_yourfiletoolButton_clicked();

    void on_todotoolButton_clicked();

    void on_workspacetoolButton_clicked();

    void showTime();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
