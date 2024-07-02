/*EJERCICIO 1: Convertir palabras a mayúsculas iniciales: "cáceres patrimonio de la humanidad" → "Cáceres
Patrimonio De La Humanidad"*/

#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

int main() {
    string palabra;
    int m, i, p;
    
    cout << "Ingresa una frase: ";
    getline(cin, palabra);

    m = palabra.length();
    p = 0;

    for (i = 0; i < m; ++i) { 
        
		if (i == 0) {
         
		    cout << (char)toupper(palabra[i]);
        
		} else {
            
			if (palabra[i] == ' ') {
              
			    p = 1;
           
		    } else {
               
			    if (p == 1) {
                   
				    cout << ' ' << (char)toupper(palabra[i]);
                    p = 0;
                
				} else {
                   
				    cout << palabra[i];
                
				}
            }
        }
    }
 return 0;
}