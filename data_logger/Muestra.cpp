/**
 * Project Untitled
 */


#include "Muestra.h"
#include <iostream>

/**
 * Muestra implementation
 */


/**
 * @param ubi
 * @param temp
 * @param hum
 */
Muestra::Muestra(double& lat, double& lon, double& alt, double& temp, double& hum) {
    setLatitud( lat );
    setLongitud( lon );
    setAltura ( alt );
    temperatura = temp;
    humedad = hum;
//    std::cout << "Muestra" << ": " <<  getLatitud() << ", " << getLongitud() << ", " << getAltura()  << ", " ;
//    std::cout << temperatura  << ", " << humedad << std::endl;
}

Muestra::Muestra(){
    temperatura = 0.;
    humedad = 0.;
}

/**
 * @param &ubi
 * @param &temp
 * @param &hum
 * @return void
 */
void Muestra::getDatos(double &lat, double &lon, double &alt, double &temp, double &hum) {
    lat = getLatitud();
    lon = getLongitud();
    alt = getAltura();
    temp = temperatura;
    hum = humedad;
}

/**
 * @param ubi
 * @param temp
 * @param hum
 * @return bool
 */
bool Muestra::setDatos(double &lat, double &lon, double &alt, double &temp, double &hum) {
    try{
        setLatitud( lat );
        setLongitud( lon );
        setAltura ( alt );
        temperatura = temp;
        humedad = hum;
        return true;
    }catch(...){
        return false;
    }
}


