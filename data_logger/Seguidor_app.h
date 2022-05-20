/**
 * Project Untitled
 */
#include <QtCore/QTimer>

#ifndef _SEGUIDOR_APP_H
#define _SEGUIDOR_APP_H

#include "DB_local.h"
#include "DB_remota.h"
#include "Muestra.h"
#include "Posicion.h"
#include <ctime>
#include <vector>


class Seguidor_app:QObject {
    Q_OBJECT
public: 
    
/**
 * @param fecha
 * @param hora
 * @param minuto
 */
Seguidor_app(std::time_t fecha, int hora, int minuto);
    
int ejecutar();
private: 
    std::time_t fecha;
    int hora;
    int minuto;
    QTimer *timer1;
    QTimer *timer2;
    DB_local *base_datos;
    DB_remota *remota_Db;
    vector<Muestra> _datos;

    Seguidor_app();

    void adquirirDatos();

    bool almacenarDatoMin();

    bool almacenarDatoDia();

    double leerTemperatura();

    double leerHumedad();

    void leerGPS(Posicion& a);
private  slots:
    void cada5Seg(void);
    void cada24Horas(void);
};

#endif //_SEGUIDOR_APP_H
