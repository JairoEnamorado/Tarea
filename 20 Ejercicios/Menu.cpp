/*Realice un programa que reciba dos números y que
permita mostrar un menú, y elegir si quiere, sumar, restar,
multiplicar o dividir dichos números*/

#include<iostream> 
using namespace std;
int main (){
int num1, num2, opcion;
    cout << "Introduce el primer numero: ";
    cin >> num1;
    cout << "Introduce el segundo numero: ";
    cin >> num2;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "Introduce la opcion: ";
    cin >> opcion;
    switch (opcion) {
        case 1:
            cout << "La suma es: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "La resta es: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "La multiplicacion es: " << num1 * num2 << endl;
            break;
        case 4:
            cout << "La division es: " << num1 / num2 << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
    }
	return 0;
}
