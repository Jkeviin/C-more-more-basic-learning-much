//Ejercicio 2: Escribe la siguiente expresión como expresión en C++: (a+b)/(c+d)

#include<iostream>

using namespace std;

int main(){
	float resultado=0,a , b, c , d;
	
	cout<<"Digite el primer numero: "; cin>>a;
	cout<<"Digite el segundo numero: "; cin>>b;
	cout<<"Digite el tercer numero: "; cin>>c;
	cout<<"Digite el cuarto numero: "; cin>>d;
	resultado = (a+b)/(c+d);
	
	cout.precision(2);
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	return 0;
}
