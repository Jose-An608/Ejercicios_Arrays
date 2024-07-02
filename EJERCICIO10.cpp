/*EJERCICIO 10: Generar 30 números aleatorios entre 100 y 1000 guardarlos en un arreglo y calcular estadísticas de
tendencia central media, mediana y moda.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

double s_s_mediana(int x, int y) {
    return (x + y) / 2;
}

int main() {
    int numeros[30];
    int s = 0;
    double media, mediana;
	
	SetConsoleOutputCP(CP_UTF8);
	
	srand(time(0));

    cout << "Los números aleatorios del arreglo son: " << endl;
   
    for (int i = 0; i < 30; i++) {
       
	    numeros[i] = 100 + rand() % 900;
        cout << numeros[i] << " ";
  
    }
    cout << endl;
	
	// CALCULANDO MEDIA ARITMETICA
    for (int i = 0; i < 30; i++) {
        s = s + numeros[i];
    }
   
    media = s / 30; 
   
    cout << "La media aritmetica es: " << media << endl;

    //ORDENANDO ASCENDENTEMENTE PARA HALLAR LA MEDIANA
    for (int i = 0; i < 30 - 1; i++) {
       
	    for (int j = i + 1; j < 30; j++) {
            
			if (numeros[i] > numeros[j]) {
                
				int aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            
			}
        }
    }

    cout << "El arreglo ordenado ascendentemente para hallar la mediana es: " << endl;
    
	for (int i = 0; i < 30; i++) {
        
		cout << numeros[i] << " ";
    
	}
    
	cout << endl;

    //CALCULANDO LA MEDIANA    
        mediana = s_s_mediana(numeros[14], numeros[15]);
		
		cout << "La mediana es: " << mediana << endl;

	//CALCULANDO LA MODA
    int moda = -1;
    int m_frecu = 0;
    int c_actu = 1;
    int v_actu = numeros[0];

    for (int i = 1; i < 30; i++) {
      
	    if (numeros[i] == v_actu) {
          
		    c_actu++;
        
		} else {
            
			if (c_actu > m_frecu) {
              
			    moda = v_actu;
               	m_frecu = c_actu;
          
		    }
            
			v_actu = numeros[i];
			c_actu = 1;
       }
    }

    if (c_actu > m_frecu) {
      
	    moda = v_actu;
        m_frecu = c_actu;
  
    }

    //VERIFICAR SI LA MODA EXISTE O NO
    if (m_frecu == 1) {
        cout << "No hay moda" << endl;
    
	} else {
       
	    cout << "La moda es: " << moda << " con una frecuencia de " << m_frecu << " veces" << endl;
    
	}

    return 0;
}