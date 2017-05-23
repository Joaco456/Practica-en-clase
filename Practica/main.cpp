#include <iostream>
#include <Persona.h>
#include <Doctor.h>
#include <Ingeniero.h>


using namespace std;

int main()
{
    Persona *p;
    Doctor a("Rafa",27,5,"Cirujia");
    p = &a;
    p->MostrarPersona();
    cout <<endl;
    Ingeniero b("Marco",25," Ing Fisico","Termodinamica");
    p = &b;
    p->MostrarPersona();
    cout <<endl;
    Doctor c("Lolo",19,2,"Pediatria");
    p = &c;
    p->MostrarPersona();

    return 0;
}
