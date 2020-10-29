//
//  pilas.hpp
//  cmascmass projects
//
//  Created by Julian Esteban Nieto Diaz on 25/10/20.
//  Copyright © 2020 Julian Esteban Nieto Diaz. All rights reserved.
//

#ifndef pilas_hpp
#define pilas_hpp

#include <stdio.h>

#endif /* pilas_hpp */

struct Nodo{
    int dato ; // va a ser un valor
    Nodo *siguiente;
};

void agregar(Nodo *&pila , int valor);
void eliminar(Nodo *&pila , int &valor);

