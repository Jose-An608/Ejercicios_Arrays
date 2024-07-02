/*EJERCICIO 3: Contar la ocurrencia de una letra específica en una cadena de entrada*/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char palabra[100];
    char n;
    int c = 0;

    cout << "Digite la cadena de texto: ";
    cin.getline(palabra, 100);

    cout << "Digite la letra que desea encontrar: ";
    cin >> n;

    for (int i = 0; i < strlen(palabra); i++) {
       
	    if (palabra[i] == n) {
            c++;
       
	    }
    }

    cout << "Aparece: " << endl;
    cout << c << " veces ";

    return 0;
}