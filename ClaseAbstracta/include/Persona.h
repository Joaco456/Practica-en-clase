#ifndef PERSONA_H
#define PERSONA_H
#include "Birtday.h"
#include <iostream>

using namespace std;


class Persona
{
    private:
        string name,sex;
        int edad;
        Birtday b;
    public:
        Persona(string,string,int,Birtday);
        void MostrarDatos();
        ~Persona();


};

#endif // PERSONA_H
