#include <QApplication>
#include <QPushButton>

int main(int argc, char* argv[]){
    QApplication app(argc,argv);
    QPushButton* button = new QPushButton("quit");
    QObject::connect(button,SIGNAL(clicked()),&app,SLOT(quit()));
    button->show();
    return app.exec();
}
