#include "stdafx.h"
#include <iostream>
#include "Matrices.h"
#include <cstdlib>
using namespace std;

//_____________*_____________________*___________________
int main()
{
	cout << " ___//____//____" << endl << " Ejemplo: " << endl;
	uno();
	cout << " ___//____//____" << endl << " Ejemplo 1: " << endl;
	dos();



	cout << endl; system("PAUSE");

	return 0;
}

//_______________________________________________________
int uno() { // rellenar una  matriz pidiendo al usuario numero de filas y columnas
	int matrix [100][100], filas , columnas;
	cout << " Numero de filas ="; cin >> filas;
	cout << " Numero de columnas ="; cin >> columnas;
	// uso de bucle anidado
	for (int i = 0; i < filas; i++) {

		for (int j = 0; j < columnas; j++) {
			cout << " Digite un numero en la posicion: " << " fila i " << i << " columna j " << j << endl;
			cin >> matrix[i][j];
		}
	}
	
	// mostrar la matriz
	for (int i = 0; i < filas ; i++) {

		for (int j = 0; j < columnas; j++) {
			cout << matrix[i][j];
		}
		cout << " \n "; // cuando se llena la columna se cambia
	}

	int matrix[100][100], filas, columnas;
	cout << " Numero de filas ="; cin >> filas;
	cout << " Numero de columnas ="; cin >> columnas;
	// uso de bucle anidado
	for (int j = 0; j < columnas; j++) {

		for (int i = 0; i < filas; i++) {
			cout << " Digite un numero en la posicion: " << " fila  " << j << " columna  " << i << endl;
			cin >> matrix[i][j];
		}
	}
	// se rellenan primero las columnas hasta acabar la fila y depsues s epasa a la siguiente fila
	// mostrar la matriz
	for (int j = 0; j < columnas; j++) {

		for (int i = 0; i < filas; i++) {
			cout << matrix[i][j];
		}
		cout << " \n "; // cuando se llena la columna se cambia
	}

	return 0;
	}

void dos() {
	// mostrar la diagonal de una matriz
	int numeros[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

	cout << "Mostrando Matriz completa\n";

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << numeros[i][j];
		}
		cout << "\n";
	}

	cout << "\n\nMostrando diagonal principal de la matriz\n";

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j) {
				cout << numeros[i][j] << endl;
			}
		}
	}


}



	
