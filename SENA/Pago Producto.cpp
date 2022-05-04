#include<iostream>

using namespace std;

int main(){
	float mes = 5000;
    float total = 0;
	for(int i = 1; i<=24; i++){
       cout<<"El mes "<<i<<" debera pagar "<<mes<<endl;
       	total = total + mes;
        mes *= 2;
        }
	cout<<endl<<endl;
    cout<<"El total que pago despues de los 24 meses fue: "<<total;
	
}
