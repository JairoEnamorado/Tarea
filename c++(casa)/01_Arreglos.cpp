/*
Cree un vector que almacene 4 notas parciales
y producidasnpor el usuario y al finalizar muestre
la nota del segundo parcial
*/
#include<iostream>
using namespace std;
int main(){
	int vNota[4];
	int contador = 0;
	
	do{
		cout << "Ingrese la nota "<<contador + 1<<":";
		cin>>vNota[contador];
		contador+=1;
		
	}while(contador<4);
	cout<<"\nLa nota del segundo parcial es:"<<vNota[1];
	
	
	
	return 0;
}
