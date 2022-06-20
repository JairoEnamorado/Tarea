/*Elaborar un porgramoa que me permita 
ingresar un numero, del 1 al 7
y muestre que dia de la semana es*/
#include<iostream>
using namespace std;
int main (){
	int option;
	cout << "Ingrese un numero del 1 al 7, para identificar el dia de la semana \n";
	cin >> option;
	switch (option)
	{
		case 1:
			cout<<"Seleccionaste el dia LUNES \n";
			break;
			case 2:
			cout<<"Seleccionaste el dia MARTE \n";
			break;
			case 3:
			cout<<"Seleccionaste el dia MIERCOLES \n";
			break;
			case 4:
			cout<<"Seleccionaste el dia JUEVES \n";
			break;
			case 5:
			cout<<"Seleccionaste el dia VIERNES \n";
			break;
			case 6:
			cout<<"Seleccionaste el dia SABADO \n";
			break;
			case 7:
			cout<<"Seleccionaste el dia DOMINGO \n";
			break;
			
	}
	return 0;
}
