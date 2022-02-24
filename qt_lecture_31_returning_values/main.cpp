#include <QCoreApplication>
#include <QDebug>

/*QObject get_object(QString name){

    QObject o;

    o.setObjectName(name);
    return o; // Make a copy

}
*/

QObject& get_ref(QString name){

    QObject o; // On the stack, c++ manages for us!

    o.setObjectName(name);
    return o; // Will be deleted

}

QObject* get_ptr(QString name){

    QObject *o = new QObject(); // On the heap, we will manage this!
    o->setObjectName(name);
    return o; // Will be NOT deleted

}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //QObject o1 = get_object("ByRef");
    //QObject o2 = get_ref("ByRef");
    QObject *o3 = get_ptr("ByPtr");
    qInfo() << o3->objectName();

    delete o3; // delete the off the heap

    return a.exec();
}
