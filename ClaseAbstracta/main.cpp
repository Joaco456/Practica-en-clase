#include <iostream>
#include <Persona.h>
#include <Gerente.h>
#include <Conserje.h>

using namespace std;

int main()
{

Persona *vector[3];
vector[0] = new Gerente ("Juan","Male",25,Birtday(1991,3,7),"023445","Marketing");
vector[1] = new Gerente ("Samantha","Female",40,Birtday(1982,8,11),"034548","Finanzas");
vector[2] = new Conserje("Ramon","Male",18,Birtday(1998,6,20),700,"Limpiar_Ventanas");

cout<<"Gerente: "<<endl;
vector[0]->MostrarDatos();
cout<<endl;
cout<<"Gerente: "<<endl;
vector[1]->MostrarDatos();
cout<<endl;
cout<<"Conserje: "<<endl;
vector[2]->MostrarDatos();



    return 0;
}
