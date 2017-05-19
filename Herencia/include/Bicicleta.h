#ifndef BICICLETA_H
#define BICICLETA_H
#include <iostream>
#include "Vehiculo.h"
using namespace std;

class Bicicleta:public Vehiculo
{
    string model, color;
public:
    Bicicleta( string  _license, string _year, string _model, string _color);
     :Vehiculo(_license, _year),model( _model),color(_color){}
    const string &getcolor(){return color;}
    const string &getmodel(){return model;}

};

#endif // BICICLETA_H
