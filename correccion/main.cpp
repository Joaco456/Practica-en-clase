#include <iostream>

using namespace std;
void intercalar(int arr[], int a, int b, int c);
void ordenarMezcla(int arr[], int inf, int sup)
{
int pivot;
if(inf<sup){
    pivot = (inf+sup)/2;
    ordenarMezcla( arr, inf, pivot );
    ordenarMezcla( arr, pivot+1, sup);
    intercalar( arr, inf, pivot, sup );
  }
}

void intercalar(int arr[], int a, int c, int b ){
int k = 0;
int i = a;
int j = c + 1;
int n = b - a;
int B[100];
while (( i < c + 1 ) && ( j < b + 1 )){
   if ( arr[i] < arr[j] ){
     B[k] =arr[i];
      i = i + 1;
    }
    else{
     B[k] = arr[j];
      j = j + 1;
    }
   k = k + 1;
  };
while ( i < c + 1 )
{ B[k] = arr[i];
  i++;
  k++;
};
while ( j < b + 1 ){
 B[k] = arr[j];
  j++;
  k++;
};
i = a;
for ( k = 0; k < n; i++ ){
 arr[i] = B[k];
  i++;
};
};


int main()
{
int a[] = {12, 10, 43, 23, -78, 45, 123, 56, 98, 41, 90, 24};
int num;

num = sizeof(a)/sizeof(int);

int B[num]; // temporary array to be used for merging

ordenarMezcla(a, 0, num-1);

for (int i = 0; i < num; i++)
cout << a[i] << " ";
cout << endl;
return 0;
}
