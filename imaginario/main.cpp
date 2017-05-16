#include <iostream>
#include "Complejo.h"

using namespace std;
int main()
{
cout <<"LA SUMA DE UN COMPLEJO"<<endl;
Complejo x(3.4,5.6);
Complejo y(7.8,9.10);
Complejo a;
a=x.suma(y);
cout <<"La suma es: "<<endl;
a.imprimir();
a=a.producto_escalar(8);
cout <<"El producto escalar es: "<<endl;
a.imprimir();

return 0;
}

