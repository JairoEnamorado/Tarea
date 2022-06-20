/*Elaborar un programa que permita convertir GB a MB, MB
a KB, y KB a Byte a través de un menú, el cual mostrará
las opciones sobre cual conversión deseará realizar*/

#include<iostream>
using namespace std; 

int main(){
    int opcion;
    cout<<"Seleccine la conversion que desea realizar: \n";
    cout<<"1. Gb a Mb\n";
    cout<<"2. Mb a Kb\n";
    cout<<"3. Kb a byte\n";
    cout<<"4. Salir\n";
    cin>> opcion;
    	switch(opcion){
		case 1: 
        int gb, producto1;
		cout <<"Haz seleccionado Gb a Mb, ingrese los Gb: \n";
		cin>> gb;
		producto1 = gb * 1024;
		cout <<"El resultado en Mb es: " <<producto1 <<"Mb.\n";
		break;
		case 2:
        int mb, producto2;
        cout <<"Haz seleccionado Mb a Kb, ingrese los Mb.\n";
        cin>> mb;
        producto2 = mb * 1024;
        cout <<"El resultado en Kb es: " <<producto2 <<"Kb.\n";
        break;
        case 3:
        int kb, producto3;
        cout <<"Haz seleccionado Kb a byte, ingrese los Kb: \n";
        cin>> kb;
        producto3 = kb * 1024;
        cout <<"El resultado en byte es: " <<producto3 <<"byte.\n";
        break;
        case 4:
        cout <<"Haz seleccionado salir.\n";
        break;
        default:
        cout <<"Opcion no valida.\n";
        break;
    }
    return 0;
}
