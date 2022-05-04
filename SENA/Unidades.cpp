#include<iostream>

using namespace std;

int main(){
	int numero;
	int unidades, decenas, centenas, unimil, decemil;
	
	cout<<"Digite un numero de 5 cifras: ";cin>>numero;
	
	while (numero>99999 or numero<10000){
		cout<<"Error"<<endl;
		cout<<"Digite un numero de 5 cifras: ";cin>>numero;
	}
	
	decemil = (numero / 10000);
	unimil = (numero - (decemil * 10000)) /1000;
	centenas = (numero - (decemil * 10000 + unimil * 1000)) /100;
	decenas = (numero - (decemil * 10000 + unimil * 1000 + centenas * 100)) /10;
	unidades = (numero - (decemil * 10000 + unimil * 1000 + centenas * 100 + decenas * 10));

	cout<<decemil<<endl;
	cout<<unimil<<endl;
	cout<<centenas<<endl;
	cout<<decenas<<endl;
	cout<<unidades<<endl;

	return 0;
}
