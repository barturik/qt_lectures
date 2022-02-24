#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 44;
    double height = 6.02;
    qInfo()<<"Age:"<< age;
    qInfo()<<"Height:"<< height;

    age = 44.90;
    qInfo()<<"Age:"<< age;

    unsigned int dogs = -1;
    unsigned int cats = -1;
    qInfo()<<"Dogs:"<<dogs;
    dogs = 15;
    qInfo()<<"Dogs:"<<dogs;

    qInfo()<<sizeof(dogs);
    qInfo()<<sizeof(cats);
    qInfo()<<sizeof(height);


    return a.exec();
}
