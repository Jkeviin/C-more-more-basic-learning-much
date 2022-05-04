#include<iostream>
#include <unistd.h>

using namespace std;

int main(){
	
	double numero;
	int unidades, decenas, centenas, unimil, decemil;
	
	cout<<"Digite la gasolina que quiera ingresar: ";cin>>numero;
	
	while (numero>99999){
		cout<<"Error"<<endl;
		cout<<"Digite un numero de 5 cifras: ";cin>>numero;
	}
	
	decemil = (numero / 10000);
	unimil = (numero - (decemil * 10000)) /1000;
	centenas = (numero - (decemil * 10000 + unimil * 1000)) /100;
	decenas = (numero - (decemil * 10000 + unimil * 1000 + centenas * 100)) /10;
	unidades = (numero - (decemil * 10000 + unimil * 1000 + centenas * 100 + decenas * 10));
	
	
	for(int a = 0; a<=9; a++){
		for(int b = 0; b <= 9; b++){
			for(int c= 0; c<=9; c++){
				for(int d=0; d<=9; d++){
					for(int e=0; e<= 9; e++){
						if(a==decemil && b==unimil && c==centenas && d==decenas && e == unidades){
							
							cout<<a<<b<<c<<d<<e;
							
							a=10;
							b=10;
							c=10;
							d=10;
							e=10;
							
						}else{
			 				cout<<a<<b<<c<<d<<e;
			 				system("cls");
			 				usleep(1000000);
						}	
					}
				}
			}
		}	
	}
	cout<<endl;
	system("PAUSE()");


	return 0;
}
