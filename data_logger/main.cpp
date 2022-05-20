#include "Seguidor_app.h"
#include <QCoreApplication>
#include <time.h>
#include <iostream>

int main(int argc, char** argv){
    QCoreApplication a(argc, argv);

    std::time_t fecha = std::time(nullptr);
    struct tm * timeinfo;
    timeinfo = std::localtime ( &fecha );
    std::cout << timeinfo->tm_hour << " : " << timeinfo->tm_min << endl;
    Seguidor_app aplicacion(fecha, timeinfo->tm_hour, timeinfo->tm_min);
    aplicacion.ejecutar();
    a.exec();
    return 0;
}
