#include "Conserje.h"
#include <iostream>

using namespace std;

Conserje::Conserje(string _name,string _sex,int _edad,Birtday _b,int _s,string _tarea):Persona(_name,_sex,_edad,_b)
{
    salario_minimo = _s;
    tarea = _tarea;

}
void Conserje::MostrarDatos()
{
    Persona::MostrarDatos();
    cout<<"Salario minimo: "<<salario_minimo<<endl;
    cout<<"Tarea: "<<tarea<<endl;
}

Conserje::~Conserje()
{
    cout<<"Murio"<<endl;
}


