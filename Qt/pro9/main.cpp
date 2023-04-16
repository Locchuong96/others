#include <QApplication>
#include <QPushButton>
#include <QString>
#include <QStringList>
#include <QProcess>

int main(int argc, char* argv[]){
    QApplication app(argc,argv);

    QPushButton* button = new QPushButton("Run Python Script");

    QStringList params;

    params << "/home/loc/Workspace/Qt/pro9/pyapp.py";

    QProcess p;

    p.start("/home/loc/Workspace/Qt/pro9/env/bin/python3.exe", params);

    p.waitForFinished(-1);

    QString p_stdout = p.readAll();

    button->show();

    return app.exec();
}
