#include <iostream>

using namespace std;

int main()
{
    /*int c;
    int x;
    c = 5;
    x = c + 1;
    cout << c << endl;
    cout << x << endl;
    cout << ++c << endl;
    cout << c++ << endl;
    c = c - 1;
    cout << c << endl;
    cout << --c << endl;
    cout << c-- << endl;
    */
    /*int i=3;
    cout << i << endl;
    i=i+2;
    cout << i << endl;
    i+=2;
    cout << i << endl;
    */
   /* int a;
    int b;
    int z;
    cout <<"Ingresar primer numero: "<< endl;
    cin >> a;
    cout <<"Ingresar un segundo numero: " << endl;
    cin >> b;
    if(a>b)
        z = a;
    else
        z = b;
    z =(a>b)?a:b;
    cout << z << endl;
    cout <<"El mayor es: "<< z << endl;
    */

    int score[5];
    int c = 5;
    score[0] = c++;
    score[1] = c++;
    score[2] = c++;
    score[3] = c++;
    score[4] = c++;
    score[5] = c++;
    c = 5;
    cout << score[c--]<< endl;
    cout << score[c--]<< endl;
    cout << score[c--]<< endl;
    cout << score[c--]<< endl;
    cout << score[c--]<< endl;
    cout << score[c--]<< endl;







    return 0;
}
