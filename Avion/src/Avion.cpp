#include "Avion.h"
#include <vector>
#include <iostream>

using namespace std;


Avion::Avion(string _linea,string _piloto)
{
    linea = _linea;
    piloto = _piloto;
}

void Avion::MostrarDatos(){
    cout<<"Linea del avion: "<<linea<<endl;
    cout<<"Nombre Piloto: "<<piloto<<endl;
}


Avion::~Avion()
{
    cout<<"May Day May Day"<<endl;
}
