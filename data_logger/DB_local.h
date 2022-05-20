/**
 * Project Untitled
 */


#ifndef _DB_LOCAL_H
#define _DB_LOCAL_H

#include "Muestra.h"
#include <string>
#include <sqlite3.h>

using namespace std;
class DB_local {
public: 
    
DB_local();
    
/**
 * @param path
 */
DB_local(string path);
    
/**
 * @param dato
 */
    bool guardar(Muestra& dato);
    
/**
 * @param hora
 */
    Muestra getPromHora(int hora);
    
    bool vaciarDB();
    
    void getUltimoMin(Muestra& dato);

    string getUsuarioRemoto();
    string getHostRemoto();
    string getDBNameRemoto();
    string getPassWDRemoto();


private: 
    string path;
    sqlite3 *database;
    
bool crearDB();

static int recuperar(void *data, int argc, char **argv, char **azColName);
};

#endif //_DB_LOCAL_H
