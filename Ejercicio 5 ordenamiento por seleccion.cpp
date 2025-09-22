//EJERCICIO 5: ORDENAMIENTO POR SELECCION

#include <iostream>

using namespace std;

int main(){

int numeros[]= {3,4,1,5,2};
int full, minimo;

//la variable "full" me sirve para hacer el cambio correspondiente de menos a mayor

for(int i= 0; i<5; i++){
    minimo=i;
    for(int j= i+1; j<5; j++){

        if(numeros[j]<numeros[minimo]){
            minimo=j;
        }
    }
    full=numeros[i];
    numeros[i]=numeros[minimo];
    numeros[minimo]=full;


}
cout<<"\nOrdenamiento de menor a mayor: "<<endl;

for(int i= 0;i<5; i++){

    cout<<numeros[i]<<" ";

}

cout<<"\n\n";

cout<<"\nOrdenamiento de mayor a menor: "<<endl;

for(int i=4; i>=0; i--){
    cout<<numeros[i]<<" ";
}
cout<<"\n\n";


return 0;
}
