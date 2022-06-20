#include<iostream>
using namespace std;
int main (){
	string contra = "pollochuco";
	string password;
	cout<<"Ingrse la contrasena: "<<endl;
	cin >> password;
	for(int i=1; i<5; i++){
		if(password == contra ){
			cout << "Contraseña correcta!"<<endl;
			break;
		}else{
			cout<<"Contraseña incorrecta, favor ingresar nuevamente: "<<endl;
			cin >> password;
		}if(i==4){
			cout << "Haz realizado 5 intentos, tu telefono ha sido bloqueado, BYE :p"<<endl;
		}
	}
	return 0;
}
