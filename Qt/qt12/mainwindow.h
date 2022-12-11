#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPrinter>
#include <QPrintDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionQuit_triggered();

    void on_actionABout_Qt_triggered();

    void on_actionPrint_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
