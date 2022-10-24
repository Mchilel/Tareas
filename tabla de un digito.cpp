#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	do{
		cout<<"INGRESE EL UNO: ";
		cin>>numero;
		
	}while((numero<1) || (numero>1));
	
	for(int i=1; i<=10; i++){
		cout<<numero<<" * "<<i<<" = "<<numero * i<<endl;
	}
	return 0;
}
