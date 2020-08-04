

#include "pch.h"
#include <iostream>
#include <math.h>
#include <Ciclos.h>
using namespace std;
int main()
{
	cout << " Ejemplo 8: " << endl;
	ejemplo_8();
	
	cout << endl; system("PAUSE");
	return 0;

}

void ejemplo7(){
	// tablas de multiplicar
	int numero_ingresado = 2;

	for (int = 1; i <= 20; i++) {
		cout << numero_ingresado << " * " << i << " = " << numero_ingresado * i << endl;
	}

}

void ejemplo8() {
	// usuario ingresa numero hasta que se introduzca un cero (en ese momento termina el programa y muestra los numero ingresado previamente)
	int numero_pensado = 0, numero_ingresado, contador_desaciertos = 0;
	int numeros_ingresados[100];
	do {
		cout << " adivina que numero estoy pensando ";
		cin >> numero_ingresado;
		// cout << numero_ingresado; se hace muy largo el prompt mejor guardar en un arreglo
		for (int i = 0; i < 100; i++) {
			numero_ingresado = numeros_ingresados[i]; // se guarda en un arreglo los numeros ingresados
		}

		if (numero_ingresado == numero_pensado) {
			cout << " Bingo!!!" << endl;
		}
		else {
			contador_desaciertos++;
		}


	} while (numero_pensado != numero_ingresado);

	cout << "\nEl total de numeros mayores que 0 es: " << contador_desaciertos << endl;


}