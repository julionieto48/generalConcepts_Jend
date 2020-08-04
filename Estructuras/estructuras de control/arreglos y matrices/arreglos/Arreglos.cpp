// Arreglos.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include "Arreglos.h"
#include <cstdlib>
using namespace std;

//_____________*_____________________*___________________


int main()
{
	cout <<" ___//____//____"<<endl <<" Ejemplo: " << endl;
	ejemplo();
	cout << " ___//____//____" << endl << " Ejemplo 1: " << endl;
	ejemplo_1();
	cout << " ___//____//____" << endl << " Ejemplo 2: " << endl;
	ejemplo_2();
	cout << " ___//____//____" << endl << " Ejemplo 3: " << endl;
	ejemplo_3();
	cout << " ___//____//____" << endl << " Ejemplo 4: " << endl;
	ejemplo_4();


	cout << endl; system("PAUSE");
	
	return 0;
}
//_______________________________________________________
int ejemplo(){
	// programa que define un vector d enumeros y suma sus elementos 
	int vectorsirris[] = {1,2,3,4,5}; // definicion
	//valor    | 1 | 2 | 3 | 4 |5|
    //posicion | 0 | 1 | 2 | 3 |4|
	int resultado_suma = 0;
	for (int i = 0; i < 4; i++) {
		// i = 0 indica que se inicia desde la primera posicion
		resultado_suma += vectorsirris[i]; // se toma el valor en la posicion i, este es sumado al valor almacenado
		// en resultado suma
	}
	cout << " La suma de los elementos es... " << resultado_suma;
	return 0;
	
}
int ejemplo_1() {
	// programa que muestra la multiplicaicon acumulada de sus elementos 
	int vectorsirris[] = { 1,2,3,4};
	int multiplicacion = 0;
	for (int i = 0; i < 5; i++) {
		
		multiplicacion *= vectorsirris[i];
	}
	cout << " La multiplicacion de los elementos es... " << multiplicacion;
	return 0;

}

int ejemplo_2() {
	// lee la entrada de un vector d enumeros y muestra el vector con sus numeros asociados
	int numero[100], n;
	cout << " Ingresar cantidad de elementos que va a tener el arreglo: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Ingresar Valor ";
		cin >> numero[i]; // guardar el elemnto en el vector
    }
	// mostrar elementos con indices
	cout << endl;
	for (int i = 0; i < n; i++) {
		// i controla la posicion donde se guarda el valor
		cout << i << " | " ;
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << numero[i] << " | ";
	}
	cout << endl; 
	// mostrar orden inverso
	for (int i = n; i >= 0; i--) {
		cout << i << " | ";
	}
	cout << endl;
	for (int i = n-1; i >= 0; i--) {
		cout << numero[i] << " | ";
	}
	return 0;

}


int ejemplo_3() {
	// Encontrar el mayor en un arreglo
	int numero[100], n, mayor = 0; // se incicaliza la variable mayor que es donde se va a guardar el mayor valor
	cout << "digite el numero de elementos a ingresar "; cin >> n;
	
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "Digite un numero " << endl ;// i + 1 para no indicar la posicion
		cin >> numero[i];

		if (numero[i] > mayor) { // se compara el valor del arreglo con el valor guardado en mayor
			mayor = numero[i]; // se almacena el valor que se tomo como mayor	
		}
	}
	cout << " El elemento mayor  es: " << mayor  << endl;
	return 0;

}
int ejemplo_4() {
		//encontar si algún número en el vector, cuyo valor equivale a la suma del resto de números
		//del vector
	int numeros[5] = { 1,2,3,4,10 };
	int suma = 0, mayor = 0;
	for (int i = 0; i < 5; i++) {
		suma += numeros[i]; // esta es la suma total
		// encontrar el mayor
		if (numeros[i]>mayor) { 
			mayor = numeros[i];
		}

	}
	if (mayor == suma - mayor) {//comparamos si el numero mayor es igual a suma menos el numero mayor
		cout << "El numero " << mayor << " es la suma de los demas";
	}
	else {
		cout << "No existe ningun numero que sea la suma de los demas";
	}
	return 0;

}
