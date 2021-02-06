//
//  colas.hpp
//  cmascmass projects
//
//  Created by Julian Esteban Nieto Diaz on 29/10/20.
//  Copyright © 2020 Julian Esteban Nieto Diaz. All rights reserved.
//

#ifndef colas_hpp
#define colas_hpp

#include <stdio.h>

#endif /* colas_hpp */

struct Nodo{
    int dato ; // va a ser un valor
    Nodo *siguiente;
};

void agregar(Nodo *&front, Nodo *&last , int valor);
bool colaVacia(Nodo *frente);
void ejecutar();
