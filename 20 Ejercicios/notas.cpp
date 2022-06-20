/*Desarrollar un ejercicio que solicite 4 notas y muestre la suma y promedio
de dichas notas*/

#include<iostream>
using namespace std; 

int main (){
    int nota1, nota2, nota3, nota4, suma, promedio;
    cout << "Ingrese la nota 1: ";
    cin >> nota1;
    cout << "Ingrese la nota 2: ";
    cin >> nota2;
    cout << "Ingrese la nota 3: ";
    cin >> nota3;
    cout << "Ingrese la nota 4: ";
    cin >> nota4;
    suma = nota1 + nota2 + nota3 + nota4;
    promedio = suma / 4;
    cout << "La suma de las notas es: " << suma << endl;
    cout << "El promedio de las notas es: " << promedio << endl;
    return 0;
}
