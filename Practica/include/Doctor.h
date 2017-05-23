#ifndef DOCTOR_H
#define DOCTOR_H
#include "Persona.h"



class Doctor:public Persona
{
    protected:
        int internado;
        string especialidad;
    public:
        Doctor(string,int,int,string);
        void MostrarPersona();

};

#endif // DOCTOR_H
