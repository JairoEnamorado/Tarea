/*Generar un programa que permita ingresar un carácter,e
identifique si es una vocal o una consonante*/

#include<iostream> 
using namespace std;
int main (){
char letra;
    cout<<"Ingrese una letra: ";
    cin>>letra;
    if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'){
        cout<<"La letra es una vocal";
    }
    else{
        cout<<"La letra es una consonante";
    }	
	return 0;
}
