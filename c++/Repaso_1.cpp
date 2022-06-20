#include<iostream>
using namespace std;
int main (){
	int opcion;
	cout <<"Seleccione la convercion que desea realizar: \n";
	cout <<"1. Gb a Mb \n";
	cout <<"2. Mb a Kb \n";
	cout <<"3. Kb a byte \n";
	cout <<"4. Salir \n";
	cin >>opcion;
	switch(opcion){
		case 1:
			int gb,producto1;
			cout << "Haz seccionado Gb a Mb, ingrese los Gb: \n";
			cin >>gb;
			producto1 = gb *1024;
			cout  << "El resultado en Mb es: "<<producto1 <<"Mb. \n";
			break;
		default:
			cout << "Valor invalido\n";
			break;
	}
	return 0;
}
