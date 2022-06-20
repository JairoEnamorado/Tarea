/*Desarrollar un programa que solicite ingresar una contraseña, que realice
la confirmación de dicha contraseña y nos diga acceso permitido, o acceso
denegado, dicha solicitud solamente tendrá 5 intentos, de lo contrario se
cerrará */


#include<iostream>
using namespace std; 

int main(){
do{
	int contra = 1234;
	int password;
	cout <<"Ingrese la contraseña: \n";
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
