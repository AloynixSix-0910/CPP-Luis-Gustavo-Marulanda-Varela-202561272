//Ejercicio 4: inventario simple con arrays

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
using namespace std;

int main(){

string productos[]{"Manzana", "Pera", "Pina", "Papa", "Tomate", "Cebolla", "Batavia"};

int cantidad_producto[]{20,10,15,49,36,78,4};

int cantidad_de_producto= 7;

cout<<"=======================INVENTARIO ACTUAL DE VERDURAS=================="<<endl;

cout<<"\nLista de productos en el inventario"<<endl;
cout<<"PRODUCTO\tCANTIDAD\n";
cout<<"------------------------\n";

for(int i= 0; i< cantidad_de_producto; i++){
    cout<<productos[i]<<"\t\t"<<cantidad_producto[i]<<"\n\n";
}






}
