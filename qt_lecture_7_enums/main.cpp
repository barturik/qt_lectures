#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //int red = 0;
    //int green = 1;
    //int blue = 123;
    //qInfo()<<"Color"<<green;
    enum Color{red=20,green,blue=10};
    Color mycolor = Color::blue;
    qInfo()<<"Color"<<red;



    return a.exec();
}
