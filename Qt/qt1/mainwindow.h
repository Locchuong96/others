#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow // MainWindow is inherited from QMainWindow
{
    Q_OBJECT // Marco

public:
    explicit MainWindow(QWidget *parent = 0); //Constructor
    ~MainWindow(); //Destructor

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
