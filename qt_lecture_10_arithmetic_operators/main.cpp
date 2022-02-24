#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age; //no assaignment



    qInfo()<<age;

    age = 21;

    qInfo()<<age;

    age++; //increment
    qInfo()<<age;

    age--;
    qInfo()<<age;

    int older = age*5;
    qInfo()<<older;

    int younger = older/3;
    qInfo()<<younger;




    return a.exec();
}
