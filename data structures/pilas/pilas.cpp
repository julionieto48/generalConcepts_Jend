//
//  pilas.cpp
//  cmascmass projects
//
//  Created by Julian Esteban Nieto Diaz on 25/10/20.
//  Copyright © 2020 Julian Esteban Nieto Diaz. All rights reserved.
//

#include "pilas.hpp"
// lifo

// linked list

#include <iostream>
#include <stdlib.h>
using namespace std ;


//_________________________________________-

int main(int argc, const char * argv[]) {
    int dato ;
    
    Nodo *pila = nullptr;
    // agregar valores
    agregar(pila , 1);
    agregar(pila , 2);
    agregar(pila , 3);
    
    while (pila != nullptr) {
         eliminar(pila ,dato);
    }
   

    
    cout << "____\n";  // identificador::cout
    return 0;
}

//_________________________________________-
void agregar(Nodo *&pila , int valor){ // tiene  Nodo =   , es puntero pasado por referencia *&pila  ya q cambia
    Nodo *nuevoNodo = new Nodo(); // reservar memoria par a1 nuevo nodo
    nuevoNodo -> dato = valor   ; // asigno el valor ingresado en la funcion agregar al miembro de la estrucutura
    
    nuevoNodo -> siguiente = pila ;
    pila = nuevoNodo ;
    
    cout << "elemento" << valor << "agregado" << endl;
}

/*
 
 agregar
1. memoria
2. rellenar dato
3. rellenar el puntero apuntar la flechita a la siguiente estrucutra en el primer cao apunta a null
 4. asignar nuevo nodo a pikla pq la puntero/pila debe señalar siempre a la cima o el nuevo nodo creado mira los q tan abajo
*/


void eliminar(Nodo *&pila , int &valor){ // esta vez el valor es por referencia
    Nodo *aux =  pila; // aux es un nodo auxiliar no una direccion
    valor = aux-> dato;
    pila = aux-> siguiente;
    delete aux ;
   
    cout << "elemento" << valor << "eliminado" << endl;
}


/*
 
eliminar
 como es lifo sale primeor el ultimo que entra
 1. crear variable auxiliar de tipo nodo como pila senala al ultimo elemnto ingresado esta variable auxiliar debe senalar ahi mismo
 2. al valor n se le asigna el valor del nodo al que senala el auxiliar osea mira al top
 
 3. como lo que deseo es eliminar el ultimo ingreso debo apuntar la pila hacia el nodo siguiente manteniendo el auxiliar
 como el elemento que se desea borrar ... osea cambiar la cima de posicion d leos platos
 
 4. eliminar el auxiliar
 */
