/**
 * Project Untitled
 */

#include "Posicion.h"

#ifndef _MUESTRA_H
#define _MUESTRA_H

class Muestra: public Posicion {
public: 
    
/**
 * @param ubi
 * @param temp
 * @param hum
 */
Muestra(double& lat, double& lon, double& alt, double& temp, double& hum);

Muestra();
/**
 * @param &ubi
 * @param &temp
 * @param &hum
 */
void getDatos(double& lat, double& lon, double& alt, double& temp, double& hum);
    
/**
 * @param ubi
 * @param temp
 * @param hum
 */
bool setDatos(double& lat, double& lon, double& alt, double& temp, double& hum);

double  getTemperatura(){return temperatura;}
void    setTemperatura(double temp){temperatura = temp;}
double  getHumedad(){return humedad;}
void    setHumedad(double hum){humedad = hum;}
//void operator=(Muestra& a){setLatitud( a.getLatitud() );
//                           setLongitud( a.getLongitud() );
//                           setAltura( a.getAltura() );
//                           temperatura= a.temperatura;
//                           humedad = a.humedad;}
private: 
    double      temperatura;
    double      humedad;
    
};

#endif //_MUESTRA_H
