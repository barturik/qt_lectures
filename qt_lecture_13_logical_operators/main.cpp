#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int x = 10;
    qInfo()<<"x between 5 and 20" << (x > 5 && x < 20);
    qInfo()<<"x greater than 20, greater than 8" << (x > 8 || x > 20);
    qInfo()<<"x not equals 10" << !(x != 10);
    qInfo()<<"Complex" << ((x > 11 && x < 20) || x==10);




    return a.exec();
}
