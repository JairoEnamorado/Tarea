#include<iostream>
using namespace std;
int main(){
	int opcion;
	cout <<"Seleccione el mes que desea ver la festividad: \n";
	cout <<"1. enero\n2. febrero\n3. marzo";
	cin >> opcion;
	switch(opcion)
	{
		case 1:
			cout<< "Haz seleccionado el Enero, se celebra el dia de los reyes \n";
			break;
			case 2:
			cout<<"Seleccionaste el dia MARTES \n";
			break;case 3:
			cout<<"Seleccionaste el dia MIERCOLES \n";
			break;case 4:
			cout<<"Seleccionaste el dia JUEVES \n";
			break;case 5:
			cout<<"Seleccionaste el dia VIERNES \n";
			break;case 6:
			cout<<"Seleccionaste el dia SABADO \n";
			break;
			case 7:
			cout<<"Seleccionaste el dia DOMINGO \n";
			default:
				cout <<"Valor inavalido\n";
				break;
	
		return 0;
}
