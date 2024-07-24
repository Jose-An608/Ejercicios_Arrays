/*EJERCICIO 20: Solicite al contador del almacén La Milagrosa el monto de las ventas mensuales de todo el año 2020. Luego,
el contador desea obtener los siguientes resultados:
• Valor de la venta mensual promedio.
• Obtenga el porcentaje de los meses del año que cumplieron los siguientes niveles de ventas:
Nivel ventas Descripción
Mínimo Menos del 40% del promedio anual de ventas
Regular Entre el 40% a 75% del promedio de ventas
Excelente Más del 75% del promedio mensual

• Indique los nombres de los meses (enero, febrero, etc.) en los cuales la venta fue Excelente.

*/

#include <iostream>
#include <windows.h>

using namespace std;
int main(){
	
	string meses[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Setiembre", "Octubre", "Noviembre", "Diciembre"};
	int ventas[12];
	int s = 0, min=0, reg=0, exce=0;
	double p;
	
	SetConsoleOutputCP(CP_UTF8);
	
	//Almacenando ventas de cada mes del año
	for (int i = 0; i<12; i++){
		
		cout << "Ingrese la venta del mes de " << meses[i] << " : ";
		cin >> ventas[i];
		
	}
	
	//Promedio de las ventas
	for ( int i = 0; i<12; i++){
		
		s = s + ventas[i];
	}
	
	p = s / 12.0;
	
	cout << endl;
	
	cout << "El promedio de las ventas es: " << p << endl << endl;
	
	
	for ( int i = 0; i<12; i++){
		
		if (ventas[i] < p*0.4 ){
			min++;
		}else if(ventas[i] < p*0.75){
			reg++;
		}else{
			exce++;	
			cout << "Mes donde fue excelente: " << meses[i] << endl;
		}
	}
	
	cout << endl << endl;
	
	cout << "El porcentaje de las ventas del año donde fue mínimo es de " << (min / 12.0) * 100 <<"%"<<endl;
	cout << "El porcentaje de las ventas del año donde fue regular es de " << (reg / 12.0) * 100 <<"%"<<endl;
	cout << "El porcentaje de las ventas del año donde fue excelente es de " << (exce / 12.0) * 100 <<"%"<<endl;

	return 0;
}