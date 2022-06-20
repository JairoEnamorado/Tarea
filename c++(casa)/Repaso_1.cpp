#include<iostream>
using namespace std;
int main(){
    int opcion;
    cout<<"Seleccine la conversion que desea realizar: \n";
    cout<<"1. Gb a Mb\n";
    cout<<"2. Mb a Kb";
    cout<<"3. Kb a byte";
    cout<<"4. Salir";
    cin>> opcion;
    	switch(opcion){
		case 1
		int gb, producto1;
		cout <<"Haz seleccionado Gb a Mb, ingrese los Gb: \n";
		cin>> gb;
		producto1 = gb * 1024;
		cout <<"El resultado en Mb es: " <<producto1 <<"Mb.\n";
		break;
		
		default:
			cout <<"Valor invalido \n"
			break;
    	
    	
	}
	
	
	return 0;
}
