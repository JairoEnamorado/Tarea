#include<iostream>
using namespace std;

int main(){
	float num1, num2;
	int opcion;
	float resultado;
	cout <<"Ingrese el primer numero: \n";
	cin >> num1;
	cout <<"Ingrese el primer numero: \n";
	cin >> num2;
	cout <<"Operaciones mate\xa0ticas \n";
	cout <<"\n 1.- Suma";
	cout <<"\n 2.- Resta";
	cout <<"\n 3.- Multiplicaci�n";
	cout <<"\n 4.- Division \n";
	cin >> opcion;
		switch (opcion){
			case 1:
				//Realizar la operaci�n suma
				resultado = num1+ num2;
				cout <<"La suma de los numeros es: "<<resultado<<endl;
			    break;
			case 3:
				//Realizar la operaci�n multiplicaci�n
				resultado = num1* num2;
				cout <<"La multiplicacion de los numeros es:"<<resultado<<endl;
				break;
			 case 2:
			 	//Realizar la operaci�n resta
			 	resultado = num1- num2;
			 	cout <<"La resta de los numeros es: "<<resultado<<endl;
			 	break;
			case 4:
				//Realizar la operaci�n division
				resultado = num1/ num2;
				cout <<"La division de los numeros es:"<<resultado<<endl;
				break;
			
		}
	return 0;
}
