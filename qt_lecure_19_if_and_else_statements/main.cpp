#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;

    qInfo() <<"Please enter your age:";
    cin >> age;

    if(age > 17){
        //True
        qInfo() <<"You are older 17 years old";

    }

    else if (age < 12){
        qInfo() <<"You are not even a teen yet!";

    }


    else {//False

        qInfo() <<"You are not over 17 years old";

    }

    return a.exec();
}
