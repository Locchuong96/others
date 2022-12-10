#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    // QStringList is the custom list object of Qt
    QStringList Languages = {"C++","Python","C#","Java","Ruby","PHP"};
    // each item in QStringList is QString, loop over the items and add to listWidget
    foreach(QString item,Languages){
        ui->listWidget->addItem(item);
    }
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_3_clicked()
{
    /*
     * Text Color button clicked
     * click to choice the current item in listWidget
     * set the item text color to red
    */
    QListWidgetItem *item = ui->listWidget->currentItem(); // Create custom object QListWidgetItem pointer
    item->setTextColor(Qt::red);
}

void Dialog::on_pushButton_2_clicked()
{
    /*
     * Font button clicked
    */
    QFont font("Times",14,QFont::Bold);
    QListWidgetItem *item = ui->listWidget->currentItem();
    item->setFont(font);

}

void Dialog::on_pushButton_clicked()
{
    /*
     * Background button clicked
    */
    QListWidgetItem *item = ui->listWidget->currentItem();
    item->setBackgroundColor(Qt::green);
}
