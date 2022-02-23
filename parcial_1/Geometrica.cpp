/**
 * Project Untitled
 */


#include "Geometrica.h"
#include <iostream>
#include "Circulo.h"
#include <cmath>

using namespace std;

float Geometrica::area() {
    return 0.0;
}

float Geometrica::perimetro() {
    return 0.0;
}

Geometrica* Geometrica::Englobante(Geometrica *g){
    Circulo* r = new Circulo(1.);
    fig_G tipo = g->getTipo() ;

    float dx = _xc - g->getX();
    float dy = _yc - g->getY();
    dx = sqrt (dx*dx + dy*dy);

    // Dependiendo del tipo de figura que llama el procedimiento se calcula el radio del círculo englobante
    float rr = 4. ; // Cambiar para adptar al tipo de figura geométrica. Trick: this->getTipo();

    switch( tipo ){
    case circulo:
        r->setRadio(  + ((Circulo*) g)->getRadio() ) ;
        r->setRadio( r->getRadio() + dx );
        break;
    case cuadrado:
        break;
    case triangulo:
        break;
    case pentagono:
        break;
    default:
        cout << "Otros tipos de figura geométrica." << endl;
    }
    return (Geometrica*) r;
}

string Geometrica::queSoy(){
  return "Soy una figura geométrica";
}

ostream& operator<<(ostream& stream, Geometrica& g) {
    cout << "llamada a operador << de Geométrica" << endl;
    cout << g.queSoy();
    return stream   ;
}

Geometrica::Geometrica() {
    _idTipo = circulo;
}

Geometrica::~Geometrica(){
    cout << "Llamando destructor de Geométrica" << endl;
}


