#include<iostream>
using namespace std;
int main (){
	int vNota[4];
	int contador = 0;
	
	do{
		cout<< "Ingrese la nota "<<contador + 1<<":";
		cin>>vNota[contador];
		contador+=1;
	}
	while(contador<4);
	cout<<"\nLa nota del segundo parcial es: "<<vNota[450]
	
	
}

