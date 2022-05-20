/**
 * Project Untitled
 */


#include "DB_local.h"
#include <string>
#include <iostream>
#include <sstream>
#include <sqlite3.h>
#include <ctime>
#include <stdlib.h>

using namespace std;
/**
 * DB_local implementation
 */



DB_local::DB_local() {
    /* Open database */
    path = "IoTlogger.db" ;
    int rc;

    rc = sqlite3_open(path.c_str(), &database);
    crearDB();

}

/**void
 * @param path
 */
DB_local::DB_local(string path) {
    /* Open database */
    this->path = path ;
    int rc;

    rc = sqlite3_open(path.c_str(), &database);
    crearDB();
}

/**
 * @param dato
 * @return bool
 */
bool DB_local::guardar(Muestra &dato) {
    stringstream sqlstream;
    std::time_t fecha = std::time(nullptr);
    struct tm * timeinfo;
    timeinfo = std::localtime ( &fecha );
    int rc;
    char *zErrMsg = 0;

    /* Create SQL statement */
    sqlstream << "INSERT INTO datos(fecha, hora, minuto, latitud, longitud, altura,";
    sqlstream << " temperatura, humedad) VALUES ( " ;
    sqlstream << fecha << ", " << timeinfo->tm_hour << ", " << timeinfo->tm_min << ", ";
    sqlstream << dato.getLatitud() << ", " ;
    sqlstream << dato.getLongitud() << ", " ;
    sqlstream << dato.getAltura() << ", " ;
    sqlstream << dato.getTemperatura() << ", " ;
    sqlstream << dato.getHumedad() << "); " ;


    string sql( sqlstream.str() );

    //cout << sql << endl;
    /* Execute SQL statement */
    rc = sqlite3_exec(database, sql.c_str(), 0, 0, &zErrMsg);

    if( rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n", zErrMsg);
       sqlite3_free(zErrMsg);
       return false;
    } /*else {
       fprintf(stdout, "Records created successfully\n");
    }*/
    return true;
}

/**
 * @param horadate
 * @return Muestra
 */
Muestra DB_local::getPromHora(int hora) {
    //return NULL;
}

/**
 * @return bool
 */
bool DB_local::vaciarDB() {
    //return false;
}

int DB_local::recuperar(void *data, int argc, char **argv, char **azColName){
   Muestra *dato = (Muestra*)data;
   //std::cout << argv[0] << ", " << argv[1] << ", " << argv[2] << std::endl;
   dato->setPos( atof(argv[0]), atof(argv[1]), atof(argv[2]) );
   dato->setTemperatura( atof(argv[3]) );
   dato->setHumedad( atof(argv[4]) );
   return 0;
}
/**
 * @return Muestra
 */
void DB_local::getUltimoMin(Muestra& dato) {
    stringstream sqlstream;
    char *zErrMsg = 0;
    int rc;

    sqlstream << "SELECT latitud, longitud, altura, temperatura, humedad ";
    sqlstream << "FROM datos WHERE id_dato = (SELECT MAX(id_dato) FROM datos);";

    /* Execute SQL statement */
    rc = sqlite3_exec(database, sqlstream.str().c_str(), recuperar, (void*)&dato, &zErrMsg);

    if( rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n", zErrMsg);
       sqlite3_free(zErrMsg);
    }
}

/**
 * @return bool
 */
bool DB_local::crearDB() {
    stringstream sqlstream;
    char *zErrMsg = 0;
    int rc;
    sqlstream << "CREATE TABLE IF NOT EXISTS datos (id_dato INTEGER PRIMARY KEY NOT NULL,";
    sqlstream << "fecha INTEGER NOT NULL, hora INTEGER NOT NULL,";
    sqlstream << "minuto INTEGER NOT NULL, latitud REAL NOT NULL,";
    sqlstream << "longitud REAL NOT NULL, altura REAL NOT NULL,";
    sqlstream << " temperatura REAL NOT NULL, humedad REAL NOT NULL);";

    /* Execute SQL statement */
    rc = sqlite3_exec(database, sqlstream.str().c_str(), 0, 0, &zErrMsg);

    if( rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n", zErrMsg);
       sqlite3_free(zErrMsg);
    }

    sqlstream.str("");

    sqlstream << "CREATE TABLE IF NOT EXISTS db_remota (id_db INTEGER PRIMARY KEY NOT NULL, ";
    sqlstream << "host TEXT NOT NULL, db_name TEXT NOT NULL, ";
    sqlstream << "user_name TEXT NOT NULL, passwd TEXT NOT NULL);";

    /* Execute SQL statement */
    rc = sqlite3_exec(database, sqlstream.str().c_str(), 0, 0, &zErrMsg);

    if( rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n", zErrMsg);
       sqlite3_free(zErrMsg);
    }

    sqlstream.str("");

    sqlstream << "CREATE TABLE IF NOT EXISTS conexion_log (id_conexion INTEGER PRIMARY KEY NOT NULL, ";
    sqlstream << "fecha INTEGER NOT NULL, hora INTEGER NOT NULL, ";
    sqlstream << "satisfactoria INTEGER NOT NULL);";

    /* Execute SQL statement */
    rc = sqlite3_exec(database, sqlstream.str().c_str(), 0, 0, &zErrMsg);

    if( rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n", zErrMsg);
       sqlite3_free(zErrMsg);
    }
    return false;
}

string DB_local::getUsuarioRemoto(){

}
string DB_local::getHostRemoto(){

}
string DB_local::getDBNameRemoto(){

}
string DB_local::getPassWDRemoto(){

}
