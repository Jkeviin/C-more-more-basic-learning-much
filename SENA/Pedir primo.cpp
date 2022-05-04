#include <iostream>
using namespace std;
int main() {
	int divisor = 1, divisores = 0, numero = 0;
	
	cout<<"Ingrese numero: ";
	cin>>numero;
	
	do{
		if(numero % divisor == 0){
		divisores++;
	}
		divisor++;
		
	}while(divisor <= numero);
	
	if(divisores == 2){

	}else{
		cout<<"El numero NO es primo.";
	}
	return 0;
}	



