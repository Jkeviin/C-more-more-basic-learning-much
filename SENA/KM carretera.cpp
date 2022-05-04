#include<iostream>

using namespace std;

int main(){
	int persona1 = 0;
    int persona2 = 200;

    while(persona1 != persona2){
        persona1 += 1;
        persona2 -= 1;
	}
    cout<<"Las personas se encuentran en el kilometro "<<persona1;
}
