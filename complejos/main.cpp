#include <iostream>
#include "complejo.h"

using namespace std;

int main()
{
    Complejo a;
    Complejo b(6.1);
    Complejo c(5.3, -6.1);

    cout << b << endl << c << endl;
    b.setReal( 89 );

    cout  << b.suma(5.3)  << endl;// << c << endl;
    cout  << b.suma( 3., 2.) << endl;

    if(true){
        Complejo d = b + c;
        cout <<"Se modificó: " << c.getReal() << endl;
    }
    cout << c  << endl;
    cout << "Hello World!" << endl;
    return 0;
}
