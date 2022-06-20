/*Elaborar un programa que muestre la sumatoria de los números entre 1 y 15*/

#include <iostream>
using namespace std; 

int main (){
    int suma=0;
    for(int i=1; i<=15; i++){
        suma=suma+i;
    }
    cout<<"La suma de los numeros entre 1 y 15 es: "<<suma<<endl;
    return 0;
}
