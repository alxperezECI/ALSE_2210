#include "ventppal.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VentPPal w;
    w.show();
    return a.exec();
}
