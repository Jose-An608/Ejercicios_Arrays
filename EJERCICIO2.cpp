/*Programa que haga "eco" de la entrada, poniendo cada palabra en una línea separada.*/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int max = 100;
    char palabra[max];

    cout << "Ingrese la frase: " << endl;
	
	while (cin >> palabra) {
	
	cout << palabra << endl;
   
    }

    return 0;
}