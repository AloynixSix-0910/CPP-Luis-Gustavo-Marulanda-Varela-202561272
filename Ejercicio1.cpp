//============EJERCICIO 1: MEDIANA DE UN ARRAY

#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
  int n;
  int conteo;
  cout<<"\nIngrese el numero de elementos que desea: ", cin>>n;

  int array [n];
  for(int i= 0; i<n; i++){

    cout<<"\nIngrese el elemento ["<<i<<"] : ",cin>>array[i];
  }

//ordenar los numeros con el metodo burbuja

for(int i= 0; i<n; i++){

    for(int z=0; z<n-1; z++){

        if(array[z]> array[z+1]){

          conteo= array[z];
          array[z]= array[z+1];
          array[z+1]=conteo;
        }
    }

}

cout<<"\nNumeros ordenados de menor a mayor"<<endl;

for(int i=0; i<n; i++){

    cout<<array[i]<<" ";
}

cout<<"\nLA mediana de su numero de elementos es: "<<endl;

if(n%2 !=0){
   cout<<array[n/2] <<endl;
}
else //se multiplica por 1.0 por si la mediana da decimal, aquel numero aparezca
    cout<<(array[n/2] + array[(n/2) -1])*1.0 /2<<endl;

cout<<"\n\n";





return 0;
}
