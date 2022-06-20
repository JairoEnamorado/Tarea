#include<iostream>
using namespace std;
int main (){
	int cr;
	char saludo;
	do{
	cout<< "Ingrese la cantidad de saludos:";
	cin>>cr;
	while (cr>0){
		cout<<"Hola \n";
		cr= cr-1;
		//cr -=1;
	}
	cout<<"Eso es todo";
	return 0;
}
