#include <iostream>

using namespace std;

int main() {
	
	string n_completo, cargo;
	double id;
	float gastos[12], ingresos[12];
	float total_gasto, total_ingreso;
	
	
	cout<<"Digite su nombre completo: ";cin>>n_completo;
	cout<<"Digite su numero de documento (sin puntos): ";cin>>id;
	cout<<"Digite su cargo en la empresa: ";cin>>cargo;
	cout<<endl;
	
	cout<<"AHORA DIGITE LOS INGRESOS QUE TUVO POR MES: "<<endl;
	for(int i = 1; i <= 12; i++){
		cout<<"Mes "<<i<<": ";cin>>ingresos[i];
		total_ingreso += ingresos[i];
	}
	
	cout<<endl<<endl;
	
	cout<<"AHORA DIGITE LOS GASTOS QUE TUVO POR MES: "<<endl;
	for(int j = 1 ; j<=12; j++){
		cout<<"Mes "<<j<<": ";cin>>gastos[j];
		total_gasto += gastos[j];
	}
	
	cout<<endl<<"---------------------------"<<endl;
	cout<<"ESTADISTICA: "<<endl;
	cout<<"Su total de ingresos anuales fue: "<<total_ingreso<<endl;
	cout<<"Su total de gastos anuales fue: "<<total_gasto<<endl;
	cout<<"---------------------------";
	
	cout<<endl<<endl;
	if(total_ingreso > total_gasto){
		cout<<"Sr."<<n_completo<<", tuviste mas ingresos que gastos.";
	}if(total_ingreso < total_gasto){
		cout<<"Sr."<<n_completo<<", tuviste mas gastos que ingresos.";
	}if(total_ingreso == total_gasto){
		cout<<"Sr."<<n_completo<<", tuviste los mismos ingresos que gastos.";
	}
	
	cout<<endl<<endl<<"---------------------------"<<endl;
	cout<<"Datos:"<<endl;
	cout<<"Nombre: "<<n_completo<<endl;
	cout<<"ID: "<<id<<endl;
	cout<<"Cargo: "<<cargo<<endl;
	cout<<"---------------------------";
	cout<<endl<<endl;
	system("pause");
	return 0;
}



