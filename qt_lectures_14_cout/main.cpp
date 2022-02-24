#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using namespace std;



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//C++ way
    cout << "Hello" << endl;
    // Qt way
    qInfo() << "Hello";
    int age = 44;
    cout << age;
    cout << endl;
    cout << flush;

    return a.exec();
}
