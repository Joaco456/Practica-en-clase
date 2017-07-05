#include "Futbolista.h"
#include <iostream>
#include <stdlib.h>
using namespace std;


Futbolista::Futbolista(int _edad, int _nivel, string _nombre, string _nacionalidad)
{
    edad = _edad;
    nivel = _nivel;
    nombre =_nombre;
    nacionalidad=_nacionalidad;
}
void Futbolista::MostrarDatos()
{
    cout<<"Edad: "<<edad<<endl;
    cout<<"Nivel: "<<nivel<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Nacionalidad: "<<nacionalidad<<endl;
}
void Futbolista::ValorMercado()
{
    if(nivel>60 || nivel<80){
        cout<<"El valor del pase esta entre 10 y 50 millones";
    }
    else if(nivel>80 || nivel<90){
        cout<<"El valor del pase esta entre 50 y 100 millones";
    }
    else if(nivel>90){
        cout<<"El valor del pase esta entre 100 y 150 millones";
    }

}

Futbolista::~Futbolista()
{

}
