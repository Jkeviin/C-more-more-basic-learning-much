//Ejercicio 3: Escribe la siguiente expresión como expresión en C++: (a+(b/c))/(d+(e/f))

#include<iostream>

using namespace std;

int main(){
	float resultado=0, a , b, c , d, e, f;
	
	cout<<"Digite a numero: "; cin>>a;
	cout<<"Digite b numero: "; cin>>b;
	cout<<"Digite c numero: "; cin>>c;
	cout<<"Digite d numero: "; cin>>d;
	cout<<"Digite e numero: "; cin>>e;
	cout<<"Digite f numero: "; cin>>f;
	
	resultado = (a+(b/c))/(d+(e/f));
	
	cout.precision(2);
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	return 0;
}
