#include<iostream>

using namespace std;

int main(){
	float resultado=0,a, b;
	
	cout<<"Digite un numero: "; cin>>a;
	cout<<"Digite otro numero: "; cin>>b;
	resultado = (a/b)+1;
	
	
	cout.precision(2);
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	return 0;
}
