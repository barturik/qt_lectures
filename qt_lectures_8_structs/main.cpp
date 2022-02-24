#include <QCoreApplication>
#include <QDebug>
enum Colors{black,red,green,blue};

// Precursor to classes

struct product{

    int weight;
    double value;
    Colors color;

};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    product laptop; // No assignments;

    qInfo()<<"size" << sizeof(laptop);

    laptop.color = Colors::green;
    laptop.value = 540.87;
    laptop.weight = 3;

    qInfo()<<"Weight:"<<laptop.weight;
    qInfo()<<"Weight:"<<laptop.value;
    qInfo()<<"Weight:"<<laptop.color;

    return a.exec();
}
