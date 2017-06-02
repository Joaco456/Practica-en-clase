#ifndef AVION_H
#define AVION_H
#include <iostream>

using namespace std;


class Avion
{
    private:
        string linea, piloto;

    public:
        Avion(string,string);
        virtual void MostrarMensaje()=0;
        virtual void MostrarDatos();

        ~Avion();

};

#endif // AVION_H
