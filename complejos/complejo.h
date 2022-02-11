#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <iostream>

using namespace std;

class Complejo{
  private:
    double _real, _imag;
	
  public:
    Complejo();     				// Constructor por omisión
    Complejo(double r, double i = 0. );         // Constructor con parámetros
    ~Complejo();					// Destructor
    Complejo operator+(const Complejo &a);
    Complejo operator-(Complejo &a);
    bool operator<(Complejo &a);
    friend ostream& operator<<(ostream& stream, Complejo &a);
  
    double suma(double a, double b = 7.);

    bool operator==(Complejo &a);
    double getReal();
    void setReal(double r);
    double getImag();
    void setImag(double i);
    double magnitud();
    double angulo();
};

#endif // COMPLEJO_H
