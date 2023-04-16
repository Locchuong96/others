#include <QApplication>
#include <QHBoxLayout>
#include <QLabel>

int main(int argc, char* argv[]){
    QApplication app(argc,argv);

    QWidget* window = new QWidget;
    window->setWindowTitle("MyApp");

    QLabel* label = new QLabel("Hello World!");

    QHBoxLayout* layout = new QHBoxLayout;
    layout->addWidget(label);

    window->setLayout(layout);

    window->show();

    return app.exec();
}
