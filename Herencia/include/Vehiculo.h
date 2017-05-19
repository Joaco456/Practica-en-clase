#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


class Vehiculo
{
    protected:
      string license;
      string year;
    public :
     Vehiculo(const string _license, const string _year):license(_license), year(_year){}
     const string getDesc()const{return license +  "de"  + year;}
     const string &getlicense() const{return license;}
     const string &getyear() const{return year;}
};

#endif // VEHICULO_H
