#include<iostream>
using namespace std;
int main (){
	float sueldo, SueldoAcumulado=0;
	float promedio;
	int i;
		for (i=0; i<10; i++){
	cout<<"Ingrese el sueldo: "<<endl;
	cin>>sueldo;
	SueldoAcumulado = SueldoAcumulado + sueldo;
}
promedio = SueldoAcumulado/i;

	cout<<"El promedio de los sueldo es: "<<promedio<<endl;
	
	return 0;
}
