/*EJERCICIO 12: Implementar una función que reciba un vector, su longitud y retorne true si 
el mismo se encuentra ordenado, false en caso contrario.*/

#include <iostream>
#include <windows.h>

using namespace std;

bool estaOr(int arr[], int l) {
   
    for (int i = 0; i < l - 1; ++i) {
        
		if (arr[i] > arr[i + 1]) {
           
		    return false;
        }
    }
  
    return true;
}

int main() {
    int l;
    
	SetConsoleOutputCP(CP_UTF8);
	
	cout << "Digíte la longitud del vector: ";
    cin >> l;

    int arr[l];

    cout << "Digíte los elementos del vector:" << endl;
    
	for (int i = 0; i < l; ++i) {
       
	    cin >> arr[i];
    }

    if (estaOr(arr, l)) {
     
	    cout << "El vector está ordenado" << endl;
    } else {
       
	    cout << "El vector no está ordenado" << endl;
    }

    return 0;
}