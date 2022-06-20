/*Elaborar un programa que reciba un numero entre el 10 y
15 y mencionar si el numero ingresado fue elegido, de lo
contrario utilizar el default para imprimir, numero
ingresado esta fuera del rango*/

#include<iostream> 
using namespace std;
int main (){
int num;
    cout<<"Ingrese un numero entre el 10 y el 15: ";
    cin>>num;
    switch(num){
        case 10:
            cout<<"El numero ingresado es 10";
            break;
        case 11:
            cout<<"El numero ingresado es 11";
            break;
        case 12:
            cout<<"El numero ingresado es 12";
            break;
        case 13:
            cout<<"El numero ingresado es 13";
            break;
        case 14:
            cout<<"El numero ingresado es 14";
            break;
        case 15:
            cout<<"El numero ingresado es 15";
            break;
        default:
            cout<<"El numero ingresado no esta entre el 10 y el 15";
            break;
    }
    	
	return 0;
}
