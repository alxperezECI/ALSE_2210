/**
 * Project Untitled
 */


#ifndef _POSICION_H
#define _POSICION_H

class Posicion {
public: 
    
/**
 * @param lat
 * @param long
 * @param alt
 */
Posicion(double lat, double lon, double alt);

Posicion();

/**
 * @param &lat
 * @param &long
 * @param &alt
 */
void getPos(double& lat, double& lon, double& alt);
    
/**
 * @param lat
 * @param long
 * @param alt
 */
void setPos(double lat, double lon, double alt);
void setPos(Posicion& pos);
double getLatitud(){return latitud;}
void   setLatitud(double& a){ latitud = a;}
double getLongitud(){return longitud;}
void   setLongitud(double& a){ longitud = a;}
double getAltura(){return altura;}
void   setAltura(double& a){ altura = a;}
void operator =(Posicion& a ){latitud = a.latitud; longitud = a.longitud; altura = a.altura;}
private: 
    double latitud;
    double longitud;
    double altura;
};

#endif //_POSICION_H
