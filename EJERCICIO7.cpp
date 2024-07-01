/*7. Invertir un vector e imprimirlo.*/

#include <iostream>
#include <windows.h>

using namespace std;

void Vectorinvertido(int x){
SetConsoleOutputCP(CP_UTF8);

	int numeros[x];

	for(int i=0; i<x; i++){
		
		cout<<"Digíte el número: "<<endl;
		cin>>numeros[i];
		
	}

	cout << endl;
	
	cout<<"Los índices asignados a cada elemento es: "<<endl;
	
	for(int i=0; i<x; i++){
		
		cout<<i<<"->"<<numeros[i]<<endl;
		
	}

	cout << endl;

	cout<<"Su inverso es: "<<endl;
	
	for(int i=x-1; i>=0; i--){

	cout << numeros[i] << endl;

	}

}

int main(){
int n,m;

SetConsoleOutputCP(CP_UTF8);
cout << "---------------------------------------------------------------------" << endl;
cout << " --- BIENVENIDO AL PROGRAMA QUE CALCULA EL INVERSO DE UN ARREGLO --- " << endl;
cout << "---------------------------------------------------------------------" << endl;

cout <<endl;

cout<<"Digíte la cantidad de números del arreglo: "<<endl;
cin>>n;

cout<<endl;

Vectorinvertido(n);

return 0;

}