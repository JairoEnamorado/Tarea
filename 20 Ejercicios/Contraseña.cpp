/*Desarrollar un programa que solicite ingresar una contrase�a, que realice
la confirmaci�n de dicha contrase�a y nos diga acceso permitido, o acceso
denegado, dicha solicitud solamente tendr� 5 intentos, de lo contrario se
cerrar� */


#include<iostream>
using namespace std; 

int main(){
do{
	int contra = 1234;
	int password;
	cout <<"Ingrese la contrase�a: \n";
    cin >> password;
    if(password == contra){
    	cout <<"Acceso permitido\n";
    }
    else{
    	cout <<"Acceso denegado\n";
    }
}while(password != 1234);
return 0;
}
