#include <iostream>

using namespace std;

/*int sum(const int arr[], const int length){
    int sum = 0;
    for(int i = 0; i<length; sum += arr[i++]);
    return sum;
}

float prom(const int arr[], const int length){
    return (float)sum(arr, length)/length;
    cout.precision(2);
}
void invertir( int arr[], const int lenght){
    int temp;
    for( int i = 0; i<(lenght/2); i++){
        temp = arr[i];
        arr[i] = arr[lenght-i-1];
        arr[lenght-i-1] = temp;
    }
    for(int i=0;i<lenght;i++){
        cout<<i<<"->"<<arr[i]<<endl;
    }
    }
*/
int ordenar(int arr[], const int lenght){
    int temp;
    for(int i=0; i<lenght; i++){
        for(int n=i+1; n<lenght; n++){
            if (arr[i] > arr[n]){
                temp = arr[i];
                arr[i] = arr[n];
                arr[n] = temp;
            }
        }
    }
}


int main()
{
    /*int i;
    int n;
    cout << "Ingrese el numero de elementos: " ; cin >> n;
    int arr[n];
    for(i = 0; i < n; i++){
        cout <<"Ingresar valor: " ; cin >> arr[i];
    }
        //cout << "La suma es: " << sum(arr, n)<< endl;
        //cout << "El promedio es: " <<prom(arr, n)<<endl;
        //invertir(arr,n);

    //int arr[n];
    cout <<"El arreglo ordenado es: " << ordenar(arr,n) << endl;
    for(i = 0; i <n; i++){
        cout <<"El valor del elemento: " << i+1 << "es =" << arr[i] << endl;
    }
*/






    }



