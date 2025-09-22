//EJERCICIO 2, BUSQUEDA BINARIA

#include <iostream>

using namespace std;

int main(){

int numbers []= {20, 21,22,23,24,25,26,27,28,29,30};

int inicio, fin, mitad, elemento;
char band= 'F';


elemento= 26;

inicio=0;
fin=10;

while(inicio <=fin){
    mitad= (inicio+fin)/2;


    if(numbers[mitad]==elemento){

        band='V';
        break;
    }
    if(numbers[mitad]>elemento){
        fin= mitad;
       mitad=(inicio+fin)/2;
    }
   if(numbers[mitad]<elemento){
    inicio= mitad;
    mitad= (inicio+fin)/2;
   }

}
if(band=='V'){

    cout<<"\nEl numero ha sido encontrado en la posicion: "<<mitad<<endl;
}
else{
    cout<<"\el numero no fue encontrado"<<endl;
}



return 0;

}
