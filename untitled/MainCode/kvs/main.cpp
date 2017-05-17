#include "kvs.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    kvs w;
    w.show();

    return a.exec();
}
