/*EJERCICIO 17: Escriba una función que dado el nombre completo de una persona y un apellido, compruebe si el apellido 
pertenece a esa persona.*/

#include <iostream>
#include <cstring> 

using namespace std;

bool ape_nomb (char x[], char y[]) {

    if (strstr(x, y) != NULL) {
        
		return true; 
    
	}
   
    return false; 

}

int main () {
    
	const int m = 1000;
    char n_compl[m];
    char apellido[m];

   
    cout << "Digite el nombre completo: ";
    cin.getline(n_compl, m);

    
    cout << "Digite el apellido a buscar: ";
    cin.getline(apellido, m);

    
    if (ape_nomb(n_compl, apellido)) {
      
	    cout << "El apellido '" << apellido << "' pertenece a '" << n_compl << endl;
    
	} else {
       
	    cout << "El apellido '" << apellido << "' no pertenece a '" << n_compl << endl;
    
	}

    return 0;
}