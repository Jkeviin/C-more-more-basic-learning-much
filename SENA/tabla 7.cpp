#include <iostream>

using namespace std;

int main() {
	
	int cantidad, tabla = 1;
	
	cout<<"Digite hasta que numero quiere que se multiplique: ";
	cin>>cantidad;
	
	cout<<endl;
	
	for(int i = 1; i<=cantidad; i++){
		tabla = 7 * i;
		cout<<"7 * "<<i<<" = "<<tabla<<endl;
	}
	
	
	
	
	
	cout<<endl<<endl;
	system("pause");
	return 0;
}

