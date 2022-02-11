#include "complejo.h"
#include <cmath>

Complejo::Complejo(){
    _real = 0.;
    _imag = 0.;
}

Complejo::Complejo(double r, double i ){
    _real = r;
    _imag = i;
}

double Complejo::suma(double a, double b){
  _real += a;
  _imag += b;
  return b;
}


Complejo::~Complejo(){
    cout << "usando el destructor" << endl;
}

Complejo Complejo::operator+(const Complejo &a){
    Complejo c;
    c._real = _real + a._real;
    c._imag = _imag + a._imag;
    cout << "Usando el operador de suma sobrecargado para complejos" << endl;
    return c;
}

Complejo Complejo::operator-(Complejo &a){
  Complejo c;

  return c;
}

bool Complejo::operator<(Complejo &a){
  bool c; return c;
}

ostream& operator<<(ostream& stream, Complejo &a){
    stream << a._real << (a._imag >= 0 ? " + ":" - ")  << abs(a._imag) << "j";
    return stream;
}

bool Complejo::operator==(Complejo &a){
  bool c; return c;
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
  double m; 
  
  return m;
}

double Complejo::angulo(){
  double a; 

  return a;
}
