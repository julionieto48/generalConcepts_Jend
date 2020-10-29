//
//  pointers.cpp
//  cmascmass projects
//
//  Created by Julian Esteban Nieto Diaz on 29/10/20.
//  Copyright © 2020 Julian Esteban Nieto Diaz. All rights reserved.
//

#include "pointers.hpp"

#include <iostream>
#include <stdlib.h>
using namespace std ;


// ponter... direccion de memoria ...donde s eubica los bytes(nunca se sabe que tan grande es la info), como un vecindario lleno de casas, es el adress

int main(int argc, const char * argv[]) {
    
    elMasPuro();
    heap();
    return 0;
}

void elMasPuro(){
    int var = 3 ;
    void* pointerN = nullptr ; // void no necesita en este caso un tipo, el operador * indica que es adress
                         // no es puede poner = 0 mejor NULL o null pointer
    double* pointer = (double*)&var ;
    
    cout << pointer << pointerN;
    
    
    // *ptr  hacer esto significa que dereferencio el apuntador =  accedo al dato o vlaor
    *pointer = 10 ;
    cout << pointer ;
}

void heap(){
    char* buffer = new char[8]; // compu guardame memoria de tanto tamano  char = 1 byte
    memset(buffer, 0, 8); // llena el bloque de memoria ocn datos apuntador , valor , size
    cout << buffer;
    delete [] buffer;
    
    
    // apuntador de apuntadores
    char** pointerBuffer = &buffer ; // buffer ya era un apuntador
    cout << pointerBuffer;
}


// ver stack vs heap

// www.youtube.com/watch?v=DTxHyVn0ODg&t=717s



