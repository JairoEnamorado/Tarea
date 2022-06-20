/*Desarrollar un programa que solicite como dato de entrada el sueldo y realice 
el cálculo del IHSS, (si el sueldo es menor o igual a 9326 lps, se multiplica por el 5%), 
pero si es mayor a 9326 lps se multiplica ese mismo valor (9326
lps)*5%. El programa deberá realizar el cálculo a por lo
menos 20 empleados, de igual forma debe mostrar la suma de
la deducción del IHSS de todos los empleados */


#include<iostream>
using namespace std; 

int main(){
   float sueldo, ihss, total;
   cout <<"Ingrese el sueldo : \n";
    cin >> sueldo;
    if (sueldo <= 9326){
        ihss = sueldo * 0.05;
    }else{
        ihss = 9326 * 0.05;
    }
    total = sueldo - ihss;
    cout << "El sueldo es : " << sueldo << endl;
    cout << "El IHSS es : " << ihss << endl; 
    cout << "El total es : " << total << endl;
    

    return 0;
}
