#include <iostream>
#include "Circulo.h"
#include "Cuadrado.h"
#include "Triangulo.h"
#include "Pentagono.h"

using namespace std;

int main(int argc, char** argv){

    Circulo a(5.);
    Triangulo b(5., 7.);

    Circulo* en = (Circulo*)a.Englobante( &b );

    cout << *en << endl;
    return 0;
}

















