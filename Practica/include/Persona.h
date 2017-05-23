#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;



class Persona
{
    protected:
       string nombre;
       int edad;
    public:
        Persona(string _nombre,int _edad);
        virtual void MostrarPersona();

};




#endif // PERSONA_H
