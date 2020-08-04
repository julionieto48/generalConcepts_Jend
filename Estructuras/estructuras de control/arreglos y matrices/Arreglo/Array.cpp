//
//  main.cpp
//  Arreglo
//
//  Created by Julian Esteban Nieto Diaz on 15/03/19.
//  Copyright © 2019 Julian Esteban Nieto Diaz. All rights reserved.
//

#include <iostream>
#include "Array.h"
#include <cstdlib>
using namespace std;

int main(int argc, const char * argv[]) {
    
    cout <<" ___//____//____"<<endl <<" Ejemplo: " << endl;
    ejemplo();
    
}

//_______________________________________________________
void ejemplo(){
    // almacenar 2 vectores  en un nuevo vector, coocando los elementos del primer vector en el primero y el sgundo en el segundo
    
    int vect1[] = {1,2,3,4,5}; int vect2[] = {5,4,3,2,1};
    int vector[10];
    
    // copiar elementos del pirmer vector al resultante
    
    for(int i = 0; i < 5;i++){ // solo se quieren copiar 5 elementos
        vector[i] = vect1[i]; // el resultate almacena en la misma posicion
    }
    // copiar elementos del segundo vector al resultante
    
    for(int i = 5; i < 10;i++){ // los elementos anteriores ya estabn ocupados
        vector[i] = vect2 [i - 5]; // se restan 5 espacios al arreglo
    }
    
    // mostrar el arreglo
    
    for(int i = 0; i < 10;i++){
        cout << vector[i] << " - " ;
    }
    cout <<" " << endl;
    
}

void ordenamiento_prueba(){
    
    // ordenamient por burbuja se recorre el arreglo con la comparacion de de dos elementos, en el que si el numero actual es mayor al siguiente = se realiza cambio. Se recorre el arreglo las veces que sea necesario hasta estar ordenado
    int numeros[5] = {3,2,6,4,2};
    int i, j , aux;
    
    for(i = 0; i < 5; i++){
        
        for (j = 0; j < 5;j++)//iteracion de 2 nums
            if (numeros [j] > numeros[j+1]){//condicional
                // intercambio de valores
                aux = numeros[j]; // el actual entra a la casilla vacia
                numeros[j] = numeros[j +1]; // el valor actual se almacena en el siguiente
                numeros[j+1] = aux; // se reemplaza el valor que estaba e aactual por el vlaor siguiente
            }
        }
    }
    
    
    

