/*EJERCICIO11: Calcular la suma de elementos positivos y negativos en un arreglo.*/

#include <iostream>
#include <windows.h>

using namespace std;

void numeros(int x){
	int m, sp, sn;
	int numeros[x];

	sp = 0;
	sn = 0;
	
	for (int i=0; i<x; i++ ) {
		
		cout << "Dé el número: " << endl;
		cin >> numeros[i];
		
		if (numeros[i]>0) {
			sp = sp + numeros[i];
			
		} else if (numeros[i]<0) {
			sn = sn + numeros[i];
			
		}
		
	}

	cout << endl;
	
	cout << "La suma de los numeros positivos es: " << sp <<endl;
	cout << "La suma de los numeros negativos es: " << sn <<endl;
	
}

int main(){
int n;
SetConsoleOutputCP(CP_UTF8);

cout << " --------------------------------------------------------------------------------------" << endl;
cout << "  ---BIENVENIDO AL PROGRAMA QUE CALCULA LA SUMA DE ELEMENTOS POSITIVOS Y NEGATIVOS ---" << endl;
cout << " --------------------------------------------------------------------------------------" << endl;

cout << endl;

cout << "Digite la cantidad de números del arreglo: " << endl;
cin >> n;

cout << endl;

numeros(n);	

	return 0;
	
}