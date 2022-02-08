#include "complejo.h"

Complejo::Complejo(){
    _real = 0.;
    _imag = 0.;
}

Complejo::Complejo(double r, double i ){
    _real = r;
    _imag = i;
}

Complejo::~Complejo(){
    cout << "usando el destructor" << endl;
}

Complejo Complejo::operator+(Complejo &a){
    Complejo c;
    c._real = _real + a._real;
    c._imag = _imag + a._imag;
    //cout << "Usando el operador de suma sobrecargado para complejos" << endl;
    return c;
}

Complejo Complejo::operator-(Complejo &a){

}

Complejo Complejo::operator<(Complejo &a){

}

ostream& Complejo::operator<<(ostream& stream){
    stream << _real << " + " << _imag << "j";
    return stream;
}

bool Complejo::operator==(Complejo &a){

}

double Complejo::getReal(){
 return _real;
}

void Complejo::setReal(double r){
    _real = r;
}

double Complejo::getImag(){
 return _real;
}

void Complejo::setImag(double r){
    _real = r;
}

double Complejo::magnitud(){
	
}

double Complejo::angulo(){
	
}
