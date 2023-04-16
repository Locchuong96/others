#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QPushButton>
int main(int argc, char* argv[]){
    QApplication app(argc,argv);
    QLabel* label = new QLabel("Hello Qt");
    QPushButton* button = new QPushButton("Quit");
    label->show();
    QObject::connect(button,SIGNAL(clicked()),&app,SLOT(quit()));
    button->show();
    app.exec();
}
