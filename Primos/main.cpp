#include <iostream>

using namespace std;

int main()
{
   int maximo, i=0, i2=0, ni=0, residuo=0;
   cout <<"Ingrese hasta que rango quiere evaluar: "; cin >> maximo;
   for(i=1; i <= maximo; i++ )
   {
       for(i2=1; i2 <= maximo; i2++)
        {
            residuo=i%i2;
            if (residuo==0)
            {
                ni = ni +1;
            }
        }
        if(ni == 2)
        {
            cout <<"  "<< i << endl;
        }
        ni = 0;


    }




    return 0;
}
