#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->radioButton->setChecked(true); // make radiobutton is checked as default
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    /*
     * if this radio button checked, show the result
     * this function is activated when your button is clicked
    */
    if(ui->radioButton->isChecked()){
        ui->lineEdit->setText("Apple"); // set directly the content of lineEdit
    }
    else if(ui->radioButton_2->isChecked()){
        ui->lineEdit->setText(ui->radioButton_2->text()); // set by the content of radioButton_2 checkbox
    }
    else if(ui->radioButton_3->isChecked()){
        ui->lineEdit->setText(ui->radioButton_3->text());
    }
}
