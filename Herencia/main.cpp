#include <iostream>
#include "Vehiculo.h"
#include "Car.h"
#include "Truck.h"
#include "Bicicleta.h"

using namespace std;

int main()
{
    Car ferrari("ITA-345", "1984","FERRARI-TestaRossa");
    Truck Volvo("PE-R56","2006","Lan Crusser","4*4");

    Bicicleta GOLIAT("AR-1E5F","2017","MOUNTAIN BMX","ROJO");

    cout<<"SU AUTO: "<<endl;
    cout<<"LICENSE: "<<ferrari.getlicense()<<endl;
    cout<<"ANNI: "<<ferrari.getyear()<<endl;
    cout<<"MODELO: "<<ferrari.getmodel()<<endl;
    //cout
    cout<<"SU MIONCA: "<<endl;
    cout<<"LICENSE: "<<Volvo.getlicense()<<endl;
    cout<<"ANNI: "<<Volvo.getyear()<<endl;
    cout<<"MODELO: "<<Volvo.getmodel()<<endl;
    cout<<"TRAXION: "<<Volvo.getTraccion()<<endl;
    //cout
    cout<<"SU BICICLETA: "<<endl;
    cout<<"LICENSE: "<<GOLIAT.getlicense()<<endl;
    cout<<"ANNI: "<<GOLIAT.getyear()<<endl;
    cout<<"MODELO: "<<GOLIAT.getmodel()<<endl;
    cout<<"COLOR: "<<GOLIAT.getcolor()<<endl;



    return 0;
}
