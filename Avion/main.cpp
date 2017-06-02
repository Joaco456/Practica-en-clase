#include <iostream>
#include <vector>


using namespace std;
class Avion{
    public:
        virtual void Mensaje()=0;
};
class Avion1:public Avion
{
    public:
        void Mensaje() {cout<<"Posible turbulencia"<<endl;}
};
class Avion2:public Avion
{
    public:
        void Mensaje() {cout<<"Clima favorable"<<endl;}
};
class Torre{
    public:
       vector <Avion *> aviones;
       Torre(){}
       void add(Avion1 elemento){
        aviones.push_back(&elemento);
        elemento.Mensaje();
        }
        void add(Avion2 elemento){
        aviones.push_back(&elemento);
        elemento.Mensaje();
        }


};


int main()
{
    Avion1 a;
    Avion2 b;
    Torre t;
    t.add(a);
    t.add(b);


    return 0;
}
