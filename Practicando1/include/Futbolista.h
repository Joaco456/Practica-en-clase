#ifndef FUTBOLISTA_H
#define FUTBOLISTA_H
#include <iostream>
#include <stdlib.h>

using namespace std;


class Futbolista
{
    private:
        int edad, nivel;
        string nombre, nacionalidad;
    public:
        Futbolista(int,int,string,string);
        virtual void MostrarDatos();
        virtual void ValorMercado();
        ~Futbolista();

};

#endif // FUTBOLISTA_H
