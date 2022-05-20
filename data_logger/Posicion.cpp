/**
 * Project Untitled
 */


#include "Posicion.h"
#include <iostream>

/**
 * Posicion implementation
 */

Posicion::Posicion() {
    latitud = longitud = altura = 0.;
}

/**
 * @param lat
 * @param long
 * @param alt
 */
Posicion::Posicion(double lat, double lon, double alt) {
    //std::cout << "Posicion" << ", " << lat << ", " << lon << ", " << alt << std::endl;
    latitud = lat;
    longitud = lon;
    altura = alt;
}

/**
 * @param &lat
 * @param &long
 * @param &alt
 * @return void
 */
void Posicion::getPos(double &lat, double &lon, double &alt) {
    lat = latitud;
    lon = longitud;
    alt = altura;
    return;
}

/**
 * @param lat
 * @param long
 * @param alt
 * @return void
 */
void Posicion::setPos(double lat, double lon, double alt) {
//    std::cout << "setPos" << ", " << lat << ", " << lon << ", " << alt << std::endl;
    latitud = lat;
    longitud = lon;
    altura = alt;
}

void Posicion::setPos(Posicion &pos){
//    std::cout << "setPos" << ", " << pos.latitud << ", " << pos.longitud << ", " << pos.altura << std::endl;
    latitud = pos.latitud;
    longitud = pos.longitud;
    altura = pos.altura;
}


