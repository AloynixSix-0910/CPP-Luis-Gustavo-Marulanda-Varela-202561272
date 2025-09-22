//EJERCICIO 6: ELEMENTOS DUPLICADOS

#include <iostream>

using namespace std;

int main(){
const int n= 7;
int array[n]={4,6,8,7,4,3,6};
int i, j, k;


cout<<"La lista base de numeros es: "<<endl;

for(i=0; i<n; i++){
    cout<<array[i]<<" ";
}

cout<<"\nLos numeros duplicados de la lista son: "<<endl;

for(i=0; i<n; i++){

bool salio= false;

for(j= 0; j<i; j++){
    if(array[j]==array[i]){
    salio= true;
    break;
    }
}

if(salio)continue;
bool visto= false;

for(k= i+1; k<n; k++){
    if(array[k]==array[i]){
        visto= true;
        break;
    }

}

if(visto){
    cout<<array[i]<<" ";
}
}

cout<<endl;
return 0;
}
