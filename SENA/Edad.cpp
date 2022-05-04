#include<iostream>

using namespace std;

int main(){
	int edad1, edad2, diferencia;
	string nombre1, nombre2;
	
	cout<<"Digite su nombre: ";
	cin>>nombre1;
	cout<<nombre1<<", digite su edad: ";
	cin>>edad1;
	
	cout<<endl;
	
	cout<<"Digite su nombre: "; 
	cin>>nombre2;
	cout<<nombre2<<", digite su edad: "; 
	cin>>edad2;
	
	cout<<endl;
	
	if (edad1 > edad2){
		diferencia = edad1 - edad2;
		cout<<nombre1<<", es mayor que "<<nombre2<<" y le lleva "<<diferencia<<" de diferencia de edad";;;
		
	}else{
		diferencia = edad2 -  edad1;
		cout<<nombre2<<", es mayor que "<<nombre1<<" y le lleva "<<diferencia<<" de diferencia de edad";;
		
	}	
	
	return 0;
}
