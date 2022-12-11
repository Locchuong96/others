#include "dialog.h"
#include "ui_dialog.h"
#include "QMessageBox" //add QMessageBox library

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    /*
     * function called when click Information Box button
    */
    QMessageBox::information(this,"Information Box","This is the text");
}

void Dialog::on_pushButton_2_clicked()
{
    /*
     * function called when click Warning Box button
    */
    QMessageBox::information(this,"Warning Box","This is  Warning text");
}

void Dialog::on_pushButton_3_clicked()
{
    /*
     * function called when About Box button
    */
    QMessageBox::information(this,"About Box","This is ABout Text");
}

void Dialog::on_pushButton_4_clicked()
{
    /*
     * function called when click Question Box button
    */
    QMessageBox::information(this,"Question Box","This is  Question text");
}
