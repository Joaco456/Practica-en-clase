#ifndef DELANTERO_H
#define DELANTERO_H
#include <Futbolista.h>
#include <Delantero.h>
#include <iostream>


using namespace std;


class Delantero:public Futbolista
{
    private:

        int disparos,  pase_largo,  pase_corto,  centros,  velocidad, regate;
        string posicion;

    public:
        Delantero();
        void MostrarDatos();
        void ValorMercado();
        int goles_ultima_temporada();



//virtual ~Delantero();


};

#endif // DELANTERO_H
