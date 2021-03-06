// Ordenamiento.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include "Ordenamiento.h"
#include <cstdlib>
using namespace std;
//_____________*_____________________*___________________


int main()
{

	cout << " ___//____//____" << endl << " Ejemplo: " << endl;
	//   ejemplo();

	cout << " ___//____//____" << endl << " Ejemplo 1: " << endl;
	ejemplo_1();

	cout << " ___//____//____" << endl << " Ejemplo 1: " << endl;
	ejemplo_2();

	cout << endl; system("PAUSE");
	return 0;
}

//_____________*_____________________*___________________
// funcion longitud de un arreglo
int length(int *p) {
	int longitud = sizeof(p) / sizeof(*p);
	//cout << " La longitud de el arreglo es ..." << longitud << endl;
	return longitud;
}

//_____________
void ejemplo(){
	//burbuja
	int arreglo[100] = {4,1,2,5,3};
	int i, j, auxiliar, longitud;
	
	longitud = length(arreglo); cout << longitud << endl;
	for (i = 0; i < longitud; i++) {
		for (j = 0; j < longitud; i++) {
			if (arreglo[j] > arreglo[j + 1]) { // condicion de numero anterior y siguiente
				auxiliar = arreglo[j];// auxiliar hace el intercambio entre los dos valores
				arreglo[j] = arreglo[j + 1];
				arreglo[j + 1] = auxiliar;
			}
		}
	}
	cout << " Orden ascendente" << endl;
	for (i = 0; i < longitud; i++) {
		cout << arreglo[i] << " | ";
	}
	cout << endl;
	cout << " Orden descendente" << endl;
	for (i = longitud-1; i >= 0; --i) {
		cout << arreglo[i] << " | ";
	}
	
}

void ejemplo_1() {
	// insercion
	int arreglo[100] = { 4,1,2,5,3 };
	int i, posicion,auxiliar ; // auxiliar realiza el cambio de los numeros, posicion representa la "flechita __"

	for (i = 0; i < 5; i++) { // se recorre el arreglo desde 0 hasta 4 en posicion
		posicion = i; // posicion en el arreglo
		auxiliar = arreglo[i]; // valor en la posicion i del arreglo

		while ( (posicion > 0)&& (arreglo[posicion -1] > auxiliar )) { // este bucle debe cumplir  dos condiciones
			// 1. por ejemplo cuando se esta en posicion i = 0, no hay nada la iza
			// 2. si el numero a la izda es mayor hay un ccambio arreglo[posicion -1] > numero actual, auxiliar representa el nu,ero actual
			arreglo[posicion] = arreglo[posicion - 1]; // aca se efectuael cambio de numeros
			posicion--; // cuando hay intercambio la posicion se disminuye, ya que se necesita comprobar si el numero a la izda era mayor
		}
		arreglo[posicion] = auxiliar; // para saber en que valor se va de acuerdo a la iteracion principal

	}

	// imprimir en orden ascendente
	cout << " Orden ascendente" << endl;
	for (i = 0; i < 5; i++) {
		cout << arreglo[i] << " | ";
	}
	cout << endl;
	cout << " Orden descendente" << endl;
	for (i = 4; i >= 0; --i) {
		cout << arreglo[i] << " | ";
	}

}

void ejemplo_2(){
	// ordenamiento por seleccion
	int arreglo[100] = { 3,2,1,5,4 };
	int i, j, auxiliar, minimo;

	for (i = 0; i < 5; i++) {
		minimo = i; // se asume que el primer elemento es el minimo
		for (j = i + 1; j < 5; j++) {// se recorren los lementos sobrantes
			if (arreglo[j] < arreglo[minimo] ) { // objetivo:encontar el menos elemento del arreglo
				// arreglo[j]  es el valor en elque nos encontramos sin tener en cuenta el primer elemento ya ordenado
				// < arreglo[minimo] es el valor anterior
				//se comprueba cual es el numero menor // 2 es menor que 3
				minimo = j; // ejemplo se situaria a 2 como las posicion menor
			}

		}
		//intercambio
		auxiliar = arreglo[i];
		arreglo[i] = arreglo[minimo];
		arreglo[minimo] = auxiliar;

	}

	cout << " Orden ascendente" << endl;
	for (i = 0; i < 5; i++) {
		cout << arreglo[i] << " | ";
	}
	cout << endl;
	cout << " Orden descendente" << endl;
	for (i = 4; i >= 0; --i) {
		cout << arreglo[i] << " | ";
	}
}