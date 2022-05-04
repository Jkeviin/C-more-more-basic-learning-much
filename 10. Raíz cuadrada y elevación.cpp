/*Ejercicio 9: Realice un programa que calcule el valor que toma la siguiente función para unos
valores dados de x e y: f(x,y) = sqrt(x) / (pow(y,2)-1)*/

#include<iostream>
#include<math.h> //Libreria trigonometrica y matematica

using namespace std;

int main(){
	float x,y,resultado = 0;

	cout<<"Digite el valor de x: "; cin>>x;
	cout<<"Digite el valor de y: "; cin>>y;

	resultado = (sqrt(x))/(pow(y,2)-1);
	cout.precision(2);
	cout<<"\nEl resultado es: "<<resultado<<endl;

	return 0;
}
