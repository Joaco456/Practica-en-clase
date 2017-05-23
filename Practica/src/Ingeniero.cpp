#include "Ingeniero.h"
#include <iostream>
using namespace std;


Ingeniero::Ingeniero(string _nombre, int _edad, string _campo, string _area):Persona(_nombre,_edad){
    campo = _campo;
    area = _area;
}
void Ingeniero::MostrarPersona()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Campo: "<<campo<<endl;
    cout<<"Area de especialidad: "<<area<<endl;

}


