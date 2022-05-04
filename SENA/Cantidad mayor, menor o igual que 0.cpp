#include<iostream>

using namespace std;

int main(){

	int cantidad = 0;
    int numeros = 0;
    int mayor = 0, menor=0, igual=0;
    
    cout<<"Digite cuantos numeros desea ingresar: ";cin>>cantidad;

    for(int i = 1; i<=cantidad; i++){
		cout<<i<<". Digite el numero: ";cin>>numeros;
		
        if (numeros > 0){
            mayor++;
        }if (numeros < 0){
            menor++;
        }if (numeros == 0){
            igual++;
        }
    }
    cout<<endl;
    cout<<"Hay "<<mayor<<" numeros son mayores a 0"<<endl;

    cout<<"Hay "<<menor<<" numeros son menores a 0"<<endl;

    cout<<"Hay "<<igual<<" numeros son iguales a 0"<<endl;
}
