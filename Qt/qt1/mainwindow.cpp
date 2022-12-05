#include "mainwindow.h"
#include "ui_mainwindow.h"

//Define constructor
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this); // Make this object pointed to ui call a function
    ui->pushButton->setText("Hello Qt!"); // Change the text off the button via pointer
    ui->pushButton_2->setText("GUI application!");
}

//define destructor
MainWindow::~MainWindow()
{
    delete ui;
}
