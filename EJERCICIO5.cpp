/*EJERCICIO 5:Programa que lee n números, encuentra el mayor y el menor, y cuenta sus repeticiones.*/

#include <iostream>
#include <windows.h>

using namespace std;

int main(){
SetConsoleOutputCP(CP_UTF8);

int n,c_m,c_men,i,menor,mayor;
int numero[100];

c_m = 0;
c_men = 0;

cout << "Digíte la cantidad de números: " << endl;
cin >> n;

cout << endl;

for( i=0; i<n; i++ ){
	cout << "Dé el número: " << endl;
	cin >> numero[i];
}

menor = numero[0];
mayor = numero[0];

for (i=0;i<n;i++) {
	
	if (numero[i]>mayor){
	mayor = numero[i]; 
	c_m = 1;

	}else if(numero[i] == mayor){
		c_m++;
	}
	
	if(numero[i] < menor){
	menor = numero[i];
	c_men = 1;

	}else if(numero[i] == menor){
	c_men++;
	}
}

cout << endl;

cout << "El mayor es: " << mayor << endl;
cout << "El mayor se repite: " << c_m << endl;
cout <<"El menor es: " << menor << endl;
cout <<"El menor se repite: " <<c_men << endl;

return 0;
}
