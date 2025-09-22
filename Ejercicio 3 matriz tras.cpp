//EJERCICIO 3 MATRIZ TRASPUESTA

#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){

cout<<"\nLa matriz en su estado puro es: "<<endl;

int matriz [2][3]= {

        {1, 2, 3},
        {4, 5, 6}
};
for(int i= 0; i<2; i++){
    cout<<" ";
        for(int k=0; k<3; k++){

        cout<< setw(2)<<matriz[i][k]<<" ";
}
        cout << "\n";
}
cout << "\n";


cout<<"\nLa matriz traspuesta es: "<<endl;

for(int i= 0; i<3; i++){
    cout<<" ";
        for(int k=0; k<2; k++){

        cout<< setw(2)<<matriz[k][i]<<" ";
}
cout << "\n";

}
cout << "\n";
}
