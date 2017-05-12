#include <iostream>
#include <math.h>

using namespace std;

class Punto{
public:
    double x;
    double y;
    void print(){
        cout<<"x---->"<<x << "y--->"<<y<<endl;
    }
    void origen(){
        x = 0;
        y = 0;
    }

};

class Vector{
public:
    Punto start;
    Punto end1;
    void imprimir(){
        start.print();
        end1.print();
    }
    void inicio(){
        start.origen();
        end1.origen();
    }
    double len(){
        return sqrt((end1.x-start.x)*(end1.x-start.x)+(end1.y-start.y)*(end1.y-start.y));
    }


};



int main()
{
Vector vec;
vec.start.x = 1;
vec.end1.x = 2;
vec.start.y= 3;
vec.end1.y = 4;
vec.imprimir();
cout << vec.len();



    return 0;
}
