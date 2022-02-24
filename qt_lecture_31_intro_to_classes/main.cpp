#include <QCoreApplication>
#include <QDebug>
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Animal cat;

    Animal dog;

    Animal fish;

    cat.setObjectName("Kitty");

    dog.setObjectName("Fido");

    fish.setObjectName("FishStick");



    cat.speak("Meov");

    dog.speak("bark");

    fish.speak("bubblebubble");



    return a.exec();
}
