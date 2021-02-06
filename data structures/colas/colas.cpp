//
//  colas.cpp
//  cmascmass projects
//
//  Created by Julian Esteban Nieto Diaz on 29/10/20.
//  Copyright © 2020 Julian Esteban Nieto Diaz. All rights reserved.
//

#include "colas.hpp"

// fifo

#include <iostream>
#include <stdlib.h>
using namespace std ;


//_________________________________________-

int main(int argc, const char * argv[]) {
    ejecutar();

    
    cout << "____\n";  // identificador::cout
    return 0;
}

//_________________________________________-
void agregar(Nodo *&front , Nodo *&last  , int valor){ //
    Nodo *casilla = new Nodo();
    
    casilla-> dato = valor ;
    casilla-> siguiente = nullptr;
    
    if(colaVacia(front)){
        front = casilla ;
    }else{
        last -> siguiente = casilla ;
        
    }
    last = casilla ; // casilla representa el nuevo nodo o casilla que se esta almacenando valor
    
    //cout << "valor " << valor << "se inserto " << endl ;
};

bool colaVacia(Nodo *frente){ // no s eenvia por referencia ya que no cambia el dato de evaluacion , esta funcion es para saber
    // si la cola esta vacia osea... si es la primer casilla que se crea
    /*
     if(frente == NULL){
        return true ; // efctivamente esta vacia
    }else{
        return false ;
    } */
    return (frente == NULL)? true : false ;
}

/*
 agregar
1. crear espacio en memoria para lamacenar el nodo
2. insertar valor asignandolo al nodo  (Nodo es el concepto pues de casilla)
3. asiganr punteros frente y fin al mismo nodo ... si esta vacia o ya hay nodos  .. frente y fin en el principio asignaban a null cuando ta vacio
 
 cuando ya existia un nodo ... osea que el fin debe asignarse al ultimo dato que entro fin apunta a l nuevo nodo
 
 s ehac ela funcion cola vacia como parmetro de evlauacion
 
 el primer elemento que se anade a la cola es el frente
 
 */
void eliminar(Nodo *&front , Nodo *&last  , int &valor){ // valor es por referencia ya que se va a aeliminar
    valor = front->dato ; // 1
    
    Nodo *aux = front ; // apuntan pa la misma id de memoria
    
    if(front == last){ // en caso de que solo quede un ultimo elemento
        front = nullptr;
        last = nullptr ;
    }else{
        front = front-> siguiente;
    }
    
    delete aux ;
    
    // cout << "valor " << valor << "se inserto " << endl ;
};

/*
Eliminar
 1. obtener el valor del nodo... se quiere eliminar el nodo frente o el primero de la cola
  que num se elimina?
 2. se crea un nodo auxiliar  que se asigna la frente de la cola, par ano eliminar los punteros frente y fin
 3. eliminar el frente de la cola
 
 se agrega por el final y se elimina por el frente
 
 la insercion es por un extremo y la extraxion es por el otro extremo
 */





//_________________________________________-
void ejecutar(){
    int cantidadDatos = 5 ;
    Nodo *frente = nullptr;
    Nodo *fin = nullptr;
    int dato = 1, i = 0;
    
    do {
        agregar(frente, fin, dato);
        cout<< dato << " ->  ";
        dato ++;
        i ++ ;
    } while (i <= cantidadDatos);
    
    cout<< " Eliminando... "<< endl ;
    
    while (frente != nullptr) { // significa que quedan nodos o casillas
        eliminar(frente, fin, dato);
        
        if(frente != nullptr){ cout<< dato << ", ";}
         else{ cout<< dato << " x  "; } // es ultimo elemento disponible
        
    }
}
