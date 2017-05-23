#include "Persona.h"
#include <iostream>

using namespace std;


Persona::Persona(string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}

 void Persona::MostrarPersona(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}
