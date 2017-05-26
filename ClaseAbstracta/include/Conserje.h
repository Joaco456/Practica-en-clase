#ifndef CONSERJE_H
#define CONSERJE_H
#include <Persona.h>

class Conserje:public Persona
{
    private:
        int salario_minimo;
        string tarea;
    public:
        Conserje(string,string,int,Birtday,int,string);
        void MostrarDatos();
        ~Conserje();




};

#endif // CONSERJE_H
