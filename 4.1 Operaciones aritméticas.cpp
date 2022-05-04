#include<iostream>

using namespace std;

int main(){
	
	int numero1, numero2, suma=0, resta=0, multi=0, division=0;
	
	cout<<"Dijite un numero: "; cin>>numero1;
	cout<<"Dijite otro numero: "; cin>>numero2; 
	
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	multi = numero1 * numero2;
	division = numero1 / numero2;
	
	cout<<"\nla suma es "<<suma; //Salida
	cout<<"\nla resta es "<<resta; //Salida
	cout<<"\nla multiplicacion es "<<multi; //Salida
	cout<<"\nla division es "<<division; //Salida
	
	
	return 0;
}
