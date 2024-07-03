/*EJERCICIO 8: Comprobar si un número de 10 cifras es capicúa usando un vector.*/

#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    
	int longitud = 10;
    int arr[longitud];
    bool esCapicua = true;
    
    SetConsoleOutputCP(CP_UTF8);
    
    for (int i = 0; i < longitud; i++) {
        
		cout << "Digite un dígito de las 10 cifras del número ";
        cin >> arr[i];
    }
    
    for (int i = 0; i < longitud / 2; i++) {
       
	    if (arr[i] != arr[longitud - 1 - i]) {
           
		    esCapicua = false;
           
		    break;
        }
    }
    
    if (esCapicua) {
       
	    cout << "El número es capicúa" << endl;
   
    } else {
        
		cout << "El número no es capicúa" << endl;
   
   }
    
    return 0;
}