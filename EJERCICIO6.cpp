/*EJERCICIO 6: Calcular la suma de componentes de índice par e impar en un vector.*/

#include <iostream>
#include <windows.h>

using namespace std;

void SumadeComponentes(int x){
	int numeros[x];
	int m,sp,si,i;
	
	sp=0;
	si=0;

	for(i=0; i<x; i++){
	
	cout<<"Digite el número: "<<endl;
	cin>>numeros[i];

	}
	
	for(i=0; i<x; i++){
	
	if(numeros[i] % 2 == 0) {
		
		sp = sp + numeros[i];
	
	}else if(numeros[i] % 2 != 0){
			
			si = si + numeros[i];
	
	}
}
	
	cout << endl;
	
	cout << "La suma de los números pares es: " << sp <<endl;
	cout << "La suma de los números impares es: " << si <<endl;
	
}
int main(){
	
	int n;
	SetConsoleOutputCP(CP_UTF8);
	
	cout << "-------------------------------------------------------------------------------------------" << endl;
	cout << " ---BIENVENIDO AL PROGRAMA QUE DA LA SUMA DE LOS NÚMEROS PARES E IMPARES DE UN ARREGLO ---" << endl;
	cout << "-------------------------------------------------------------------------------------------" << endl;
	
	cout << endl;
	
	cout << "Digíte la cantidad de numeros del arreglo: " << endl;
	cin >> n;
	
	cout << endl;
	
	SumadeComponentes(n);
	
	return 0;
}