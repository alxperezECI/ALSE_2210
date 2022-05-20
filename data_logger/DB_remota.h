/**
 * Project Untitled
 */


#ifndef _DB_REMOTA_H
#define _DB_REMOTA_H
#include <string>
#include <ctime>
using namespace std;

class DB_remota {
public: 
    
/**
 * @param h
 * @param un
 * @param pw
 * @param dbn
 */
DB_remota(string h, string un, string pw, string dbn);
    
/**
 * @param hora
 */
bool guardarPromHora(int hora);
    
/**
 * @param fecha
 */
void setFecha(std::time_t fecha);
private: 
    string host;
    string user_name;
    string passwd;
    string dbName;
    std::time_t fecha;
    
DB_remota();
};

#endif //_DB_REMOTA_H
