#include "Doctor.h"
#include <iostream>

using namespace std;


Doctor::Doctor(string _nombre, int _edad, int _internado, string _especialidad):Persona(_nombre,_edad){
    internado = _internado;
    especialidad = _especialidad;
}
void Doctor::MostrarPersona()
{
    //MostrarPersona();
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Internado de: "<<internado<<endl;
    cout<<"Especialidad: "<<especialidad<<endl;

}


