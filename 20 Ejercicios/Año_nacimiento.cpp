/*Desarrollar un programa que permita ingresar el año de
nacimiento de una persona y el programa determine si es
mayor de edad o no lo es*/

#include<iostream>
using namespace std; 

int main(){
    int anio;
    cout<<"Ingrese el año de nacimiento: ";
    cin>>anio;
    if(anio>=18){
        cout<<"Es mayor de edad";
    }else{
        cout<<"Es menor de edad";
    }
    return 0;
}
