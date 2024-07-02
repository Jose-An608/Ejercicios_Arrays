/*EJERCICIO 4: Leer una secuencia de nombres, ordenarlos alfabéticamente y presentarlos.*/

#include <iostream>
#include <cstring>
#include <windows.h>

using namespace std;

void OrdendeNombres(int x){
	char nombres[x][50];
	char tem[50];

	for(int i=0; i<x; i++){
		
		cout << "De el nombre: " << endl;
		cin >> nombres[i];
	}

    for (int i = 0; i < x - 1; i++) {
        
		for (int j = i + 1; j < x; j++) {
           
		    if (strcmp(nombres[i], nombres[j]) > 0) {
               
			    strcpy(tem, nombres[i]);
                strcpy(nombres[i], nombres[j]);
                strcpy(nombres[j], tem);
            }
        }
    }

    cout << "\nLos nombres ordenados alfabeticamente son:\n";
    
	for (int i = 0; i < x; i++) {
        
		cout << nombres[i] << endl;
   
    }

}

int main(){
int m;
SetConsoleOutputCP(CP_UTF8);

cout<<"Digite la cantidad de nombres: "<<endl;
cin>>m;

OrdendeNombres(m);
	return 0;
}
