#ifndef CAR_H
#define CAR_H
#include <iostream>
#include "Vehiculo.h"
using namespace std;

class Car:public Vehiculo
{
    string model;
public:
    Car(const string _license, const string _year, string _model)
        :Vehiculo(_license, _year),model( _model){}
    const string &getmodel(){return model;}

};
#endif // CAR_H


