#include "Avion1.h"
#include <iostream>
#include "Avion.h"
#include "Avion1.h"

using namespace std;


Avion1::Avion1(string _linea,string _piloto,string _codigo):Avion(_linea,_piloto)
{
    codigo = _codigo;

}
void Avion1::MostrarMensaje(){
    cout<<"Habra turbulencia en la coordenada 01324a al sur"<<endl;
}
void Avion1::MostrarDatos(){
    Avion::MostrarDatos();
    cout<<"Codigo de Vuelo: "<<codigo<<endl;
}

Avion1::~Avion1()
{

}
