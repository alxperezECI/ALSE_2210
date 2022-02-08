#include <iostream>
#include "complejo.h"

using namespace std;

int main()
{
    Complejo a;
    Complejo b = Complejo(5.3, 6.1);
    Complejo c = Complejo(5.3, -6.1);
    c.setReal( 89 );

    if(true){
        Complejo d = b + c;
    }
    //cout << c  << endl;
    cout << "Hello World!" << endl;
    return 0;
}
