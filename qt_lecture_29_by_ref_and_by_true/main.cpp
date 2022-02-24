#include <QCoreApplication>
#include <QDebug>

//Passing by value - Copy - Object do not like being copied
void testVal(int x){

    x = x * 10;//Modifying the copy
    qInfo() << "TextVal X:" << x;

} //Copy is destroyed

// Pass by reference

void testRef(int &y){

    y = y * 10;//Modifying the copy
    qInfo() << "TextVal Y:" << y;

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int x = 5;
    qInfo() << "Main X:" << x;//5
    testVal(x); //COPY - Value
    qInfo() << "Main X:" << x;//5

    int y = 5;
    qInfo() << "Main Y:" << y;//5
    testRef(y); //Ref - Memory
    qInfo() << "Main Y:" << y;//5




    return a.exec();
}
