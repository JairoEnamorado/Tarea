#include<iostream>
using namespace std;
int main (){
	int vSueldos [] = {5000,6000,7890,15000,16780,10000,9000};
	int vSuma = 0;
	cout <<"*********Mostrar los sueldos**********"<<endl;
	
	for(int i = 0; i < 7;i++){
		//motrar el valor que tenga la posicion 1 en vSueldo
		cout << vSueldos [1]<<endl;
		vSuma = vSuma + vSueldos[i]; 	
	}
	cout <<"\n--------------Suma----------------"<<endl;
	cout <<"La suma de los sueldos es: "<<vSuma<<endl;
	return 0;
}
