#ifndef TRUCK_H
#define TRUCK_H
#include <iostream>
#include "Vehiculo.h"


class Truck:public Vehiculo
{
    string model,traccion;

public:
    Truck(const string  _license, const string _year, string _model, const string _traccion)
         :Vehiculo(_license, _year),model( _model),traccion(_traccion){}
    const string &getTraccion(){return traccion;}
    const string &getmodel(){return model;}

};

#endif // TRUCK_H
