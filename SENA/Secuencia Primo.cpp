#include <iostream>

using namespace std;

int main() {
	int divisor = 1, divisores = 0, cantidad;
	
	cout<<"Cuantas veces quieres que se repita: ";
	cin>>cantidad;

	for(int i; i <= cantidad; i++){
		
		while(divisor <= i ){
			
			if(i % divisor == 0){
				divisores++;
			}
			divisor++;	
		}
		
		if (divisores == 2){
		cout<<i<<" ";
		
		}
		divisores= 0;
		divisor = 1;
	}
	return 0;
}	

