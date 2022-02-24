#include <QCoreApplication>
#include <QDebug>

#include <array>
using namespace std;



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age[4] = {1,2,3,4};
    age[2]=99;
    qInfo() << age[0];
    qInfo() << age[1];
    qInfo() << age[2];
    qInfo() << age[3];
    qInfo() << age;

    array<int,5> cars;
    cars[0]=99;
    cars[1]=98;
    cars[2]=97;
    cars[3]=96;
    cars[4]=95;
    qInfo() << cars[0];
    qInfo() << cars[1];
    qInfo() << cars[2];
    qInfo() << cars[3];
    qInfo() << cars[4];
    //qInfo() << cars;

    qInfo()<<"Size:"<<cars.size();

    qInfo()<<"Sizeof:"<<sizeof(cars);

    qInfo()<<"Last:"<<cars[cars.size()-1];
    return a.exec();
}
