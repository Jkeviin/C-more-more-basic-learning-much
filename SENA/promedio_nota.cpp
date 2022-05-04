#include<iostream>

using namespace std;

int main(){
	float practica1, practica2, practica3, practica4, promedio = 0;
	string notaEliminada;

	
	cout<<"Digite la nota 1: ";
	cin>>practica1;
	cout<<"Digite la nota 2: ";
	cin>>practica2;
	cout<<"Digite la nota 3: ";
	cin>>practica3;
	cout<<"Digite la nota 4: ";
	cin>>practica4;
	
	if(practica1 <= practica2){
		if(practica1 <= practica3){
			if(practica1 <= practica4){
				practica1 = 0;
				notaEliminada = "Nota 1";
			}
		}
	}
	if(practica2<= practica1){
		if(practica2<=practica3){
			if(practica2<= practica4){
				practica2 = 0;
				notaEliminada = "Nota 2";
			}
		}
	}
	
	if(practica3<= practica1){
		if(practica3<=practica2){
			if(practica3<= practica4){
				practica3 = 0;
				notaEliminada = "Nota 3";
			}
		}
	}
	if(practica4<= practica1){
		if(practica4<=practica2){
			if(practica4<= practica3){
				practica4 = 0;
				notaEliminada = "Nota 4";
			}
		}
	}
	
	cout<<endl;

	promedio = (practica1 + practica2 + practica3 + practica4) / 3;
	
	cout<<"El promedio de las practicas fue: "<<promedio<<endl;
	cout<<"La nota que se elimino al final fua la "<<notaEliminada;
	
	
}

