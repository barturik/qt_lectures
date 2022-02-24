#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int calc(int offset, int age){

    int x = offset * age;

    qInfo() << "Calc:" << x;

    return x;

}


int catYears(int age){
    //Other Things
    qInfo()<<"Performing math for cat years";
    return calc(9,age);
}

int dogYears(int age){
    //Other Things
    qInfo()<<"Performing math for dog years";
    return calc(7,age);
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;

    qInfo() << "Enter your age:";
    cin>> age;
    qInfo() << "Age:" << age;


    int value = calc(2,age);
    qInfo() << "Double:" << value;

    qInfo() << "Cat Years:" << catYears(age);
    qInfo() << "Dog Years:" << dogYears(age);


    return a.exec();
}
