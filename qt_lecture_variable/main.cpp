#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Variables are something that will change

    bool isOn = false;

    qInfo() <<"Is on:" << isOn;

    isOn = true;

    qInfo()<<"Is on:" << isOn;


    return a.exec();
}
