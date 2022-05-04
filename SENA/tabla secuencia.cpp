#include <iostream>

using namespace std;

int main() {
	
	int resultado;
	
	for(int tabla = 2 ; tabla<= 10; tabla++){
		cout<<"LA TABLA DEL "<<tabla<<endl;
		
		for(int i = 1; i<=10; i++){
			resultado = tabla * i;	
			cout<<tabla<<" * "<<i<<" = "<<resultado<<endl;
		}	
		cout<<endl<<endl;
		
	}
	cout<<endl<<endl;
	system("pause");
	return 0;
}

