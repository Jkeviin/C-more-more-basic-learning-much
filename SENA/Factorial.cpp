#include <iostream>

using namespace std;

int main() {
	
	int numero, factorial = 1;
	
	cout<<"Ingrese el numero para determinar factorial: ";
	cin>>numero;
	
	while(numero<1){
		cout<<"Ingrese el numero para determinar factorial: ";
		cin>>numero;
	}
	
	
	
	
	for(int i = 1 ; i <= numero; i++){
		factorial = factorial*i;
	}
	
	cout<<"El factorial de "<<numero<<" es "<<factorial;
	
	cout<<endl<<endl;
	
		
	
	
	
	system("pause");
	return 0;
}


