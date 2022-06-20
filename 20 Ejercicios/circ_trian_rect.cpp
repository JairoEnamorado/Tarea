/*Desarrolle un programa que muestre un menu
que sea
1. encontrar el área de un triangulo
2. encontrar el área de un rectangulo
3. encontrar el área de un circulo
4. salir */

#include<iostream>
using namespace std; 
int main(){
int opcion;
	cout<<"Seleccine la opcion que desea realizar: \n";
	cout<<"1. Encontrar el area de un triangulo\n";
	cout<<"2. Encontrar el area de un rectangulo\n";
	cout<<"3. Encontrar el area de circulo\n";
    cout<<"4. Salir\n";
    cin>>opcion;
    switch(opcion){
        case 1:
        int base, altura, area;
    	cout<<"Ingrese la base del triangulo: ";
        cin>>base;
        cout<<"Ingrese la altura del triangulo: ";
        cin>>altura;
        area=base*altura/2;
        cout<<"El area del triangulo es: "<<area<<endl;
        break;
        case 2:
        int base2, altura2, area2;
		cout<<"Ingrese la base del rectangulo: ";
        cin>>base2;
        cout<<"Ingrese la altura del rectangulo: ";
        cin>>altura2;
        area2=base2*altura2;
        cout<<"El area del rectangulo es: "<<area2<<endl;
        break;
        case 3:
        int radio, area3;
		cout<<"Ingrese el radio del circulo: ";
        cin>>radio;
        area3=3.1416*radio*radio;
        cout<<"El area del circulo es: "<<area3<<endl;
        break;
        case 4:
        cout<<"Gracias por usar el programa";
        break;
        default:
        cout<<"Opcion no valida";
        break;
    }
    return 0;
}
