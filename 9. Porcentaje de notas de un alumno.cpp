/*Ejercicio 7: La calificación final de un estudiante es la media ponderada de tres notas:
la nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% y la nota
de participación que cuenta el 10% restante. Escriba un programa que lea de la entrada estándar las tres notas de un alumno y
escriba en la salida estándar su nota final.*/


#include<iostream>

using namespace std;

int main(){
	float practica, teorica, participacion, nota_final = 0;

	cout<<"Digite la nota practica: "; cin>>practica;
	cout<<"Digite la nota teorica: "; cin>>teorica;
	cout<<"Digite la nota de participacion: "; cin>>participacion;

	practica *= 0.30; // Eso es igual a Pratica = Pratica *
	teorica *= 0.60;
	participacion *= 0.10;

	nota_final = practica + teorica + participacion;

	cout.precision(2);
	cout<<"\nLa calificacion final es: "<<nota_final<<endl;

	return 0;
}
