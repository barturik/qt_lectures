#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /*
     * This is a multi-line
     * comment
     */

    qInfo()<<"Hello World";

    return a.exec();
}
/* This is single line comment */
// This is a comment too
