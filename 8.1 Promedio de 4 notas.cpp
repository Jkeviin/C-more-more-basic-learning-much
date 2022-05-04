//Ejercicio 6: Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos.

#include<iostream>

using namespace std;

int main(){
	float nota1, nota2, nota3, nota4, resultado;
	
	cout<<"Digite la primera nota: "; cin>>nota1;
	cout<<"Digite la segunda nota: "; cin>>nota2;	
	cout<<"Digite la tercera nota: "; cin>>nota3;
	cout<<"Digite la cuarta nota: "; cin>>nota4;
	
	resultado = (nota1+nota2+nota3+nota4)/4;
	
	cout.precision(2);
	cout<<"\nEl promedio es: "<<resultado<<endl;

	return 0;
}
