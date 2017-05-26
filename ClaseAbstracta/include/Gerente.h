#ifndef GERENTE_H
#define GERENTE_H
#include <Persona.h>

class Gerente:public Persona
{
    protected:
        string codigo;
        string area;

    public:
        Gerente(string,string,int,Birtday,string,string);
        void MostrarDatos();
        ~Gerente();
};

#endif // GERENTE_H
