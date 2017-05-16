#include "Complejo.h"
#include <iostream>
using namespace std;

Complejo::Complejo()
{
    r = 0.0;
    i = 0.0;
}
Complejo::Complejo(double nx, double ny)
{
    r=nx; i = ny;
}
Complejo Complejo::suma(Complejo x)
{
    Complejo temp;
    temp.r=r+x.r;
    temp.i=i+x.i;
    return temp;
}
void Complejo::imprimir()
{
    cout<<r<<"+"<<i<<"i"<<endl;
}
Complejo Complejo::producto_escalar(int x)
{
    Complejo temp;
    temp.r = r*x;
    temp.i = i*x;
    return temp;
}

