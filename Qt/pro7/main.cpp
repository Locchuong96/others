#include <QApplication>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>

int main(int argc, char* argv[]){

    QApplication app(argc,argv);

    // create window
    QWidget* window = new QWidget;
    window->setWindowTitle("Enter your age");

    // create elements
    QSpinBox* spinbox = new QSpinBox;
    spinbox->setRange(0,130);
    spinbox->setValue(30);

    QSlider* slider = new QSlider(Qt::Horizontal);
    slider->setRange(0,130);

    // create connect
    QObject::connect(spinbox,SIGNAL(valueChanged(int)),slider,SLOT(setValue(int)));
    QObject::connect(slider,SIGNAL(valueChanged(int)),spinbox,SLOT(setValue(int)));

    // create layout
    QHBoxLayout* layout = new QHBoxLayout;
    // add element into layout
    layout->addWidget(spinbox);
    layout->addWidget(slider);

    // set layout for window
    window->setLayout(layout);

    window->show();

    return app.exec();
}
