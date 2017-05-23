#ifndef INGENIERO_H
#define INGENIERO_H
#include "Persona.h"


class Ingeniero:public Persona
{
    protected:
        string campo;
        string area;
    public:
        Ingeniero(string,int,string,string);
        void MostrarPersona();
};

#endif // INGENIERO_H
