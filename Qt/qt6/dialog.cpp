#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    /*
     * Initialize by define the contructor
     * define first parameter and object here
    */
    ui->setupUi(this);
    ui->checkBox->setChecked(true);
}

Dialog::~Dialog()
{
    /*
     * define what we will do when destroy the dialog object
    */
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    /*
     * this function created by go-to-slot of button object
    */
    if(ui->checkBox->isChecked()){
        ui->label->setText("You Love Sport!");
    }
    else{
        ui->label->setText("I don't like sport too!");
    }
}
