#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    // Set the item for the combox
    ui->comboBox->addItem("Apple");
    ui->comboBox->addItem("Banana");
    ui->comboBox->addItem("Pear");
    ui->comboBox->addItem("Melon");
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    /*
     * display what you choice on the comboBox
     * this function is called when the button is clicked
    */
    // ui->label->setText("Pushed!");
    ui->label->setText(ui->comboBox->currentText());
}
