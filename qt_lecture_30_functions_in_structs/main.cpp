#include <QCoreApplication>
#include <QDebug>

struct laptop{
    int weight;


    double asKilograms(){
        return weight * 0.453592;
    }
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    laptop notebook;

    notebook.weight = 5;

    qInfo() <<"Pounds" << notebook.weight;
    qInfo() <<"Kilograms" << notebook.asKilograms();



    return a.exec();
}
