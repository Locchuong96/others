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

void MainWindow::on_actionPrint_triggered()
{
    QPrinter printer;
    QPrintDialog dialog(&printer,this);
    dialog.setWindowTitle("Print Document");
    if(ui->textEdit->textCursor().hasSelection()){
        dialog.addEnabledOption(QAbstractPrintDialog::PrintSelection);
    }
    if(dialog.exec() != QDialog::Accepted){
        return;
    }

}

void MainWindow::on_actionFont_triggered()
{
    /*
     * Font action
    */
    bool ok;
    // create an font variable by font dialog
    QFont font = QFontDialog::getFont(&ok,QFont("Helvetica[Cronyx]",12),this);
    if(ok){
        ui->textEdit->setFont(font);
    }
}

void MainWindow::on_actionColor_triggered()
{
    bool ok;
    QColor color = QColorDialog::getColor(Qt::yellow,this);
    if (&ok){
        ui->textEdit->setTextColor(color);
    }
}

void MainWindow::on_actionOpen_triggered()
{
    // Create file dialog
    QString filename = QFileDialog::getOpenFileName(this,"Open A File","/home/loc/Workspace/Qt/");
    ui->textEdit->setText(filename);
}
