#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <iostream>

using namespace std;

class Complejo{
  private:
    double _real, _imag;
	
  public:
    Complejo();     				// Constructor por omisión
    Complejo(double r, double i );  // Constructor con parámetros
	~Complejo();					// Destructor
    Complejo operator+(Complejo &a);
    Complejo operator-(Complejo &a);
    Complejo operator<(Complejo &a);
    ostream& operator<<(ostream& stream);
    bool operator==(Complejo &a);
    double getReal();
    void setReal(double r);
	double getImag();
	void setImag(double i);
	double magnitud();
	double angulo();
};

#endif // COMPLEJO_H
