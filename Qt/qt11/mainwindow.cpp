#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionQuit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionABout_Qt_triggered()
{
//    QMessageBox::information(this,"About Me","Developed by Qt4.5.1");
    QApplication::aboutQt();
}
