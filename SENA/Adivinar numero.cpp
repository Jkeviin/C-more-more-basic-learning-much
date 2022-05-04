#include<iostream>

using namespace std;

int main(){

		int numero;
		cout<<"Digite un numero mayor a 1 y menor a 20: ";cin>>numero;

        while(numero<1 || numero>20){
            cout<<"Error.\nDigite un numero mayor a 1 y menor a 20";cin>>numero;
        }
		cout<<endl;

        int adivinar = 0;
        int oportunidad = 5;
        
        while(oportunidad > 0 && numero != adivinar){
        	
   			if(oportunidad == 1){
                cout<<"TIENES "<<oportunidad<<" OPORTUNIDAD."<<endl<<endl;
            }else{
                cout<<"TIENES "<<oportunidad<<" OPORTUNIDADES."<<endl<<endl;
            }

			cout<<"Digite un numero al azar: ";cin>>adivinar;

            oportunidad--;
            if(adivinar<numero){
                cout<<"El numero "<<adivinar<<" es menor al numero deseado"<<endl<<endl;
            }else if(adivinar>numero){
                cout<<"El numero "<<adivinar<<" es mayor al numero deseado"<<endl<<endl;
            }else{
                cout<<"El numero "<<adivinar<<" igual al numero deseado"<<endl<<endl;
                cout<<"FELICIDADES, has adivinado";
            }
        }
        
        if(oportunidad == 0 && adivinar != numero){
            cout<<"Lo siento, se te Acabaron las oportunidades";
        }
}
