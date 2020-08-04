//
//  pointer.h
//  pointers
//
//  Created by Julian Esteban Nieto Diaz on 20/06/19.
//  Copyright © 2019 Julian Esteban Nieto Diaz. All rights reserved.
//

#ifndef pointer_h
#define pointer_h


#endif /* pointer_h */

void ejemplo1( int& );
void ejemplo2();
void ejemplo3();
void ejemplo4();
void ejemplo5();


/* paso por referencia:
 - la funcion que hace el llamado proporcina a la funcion que llamó (la otra), la capacidad de accerder a la memoria de este valor y de modificarlo
 - un parametro por referencia es un "alias" de su correpsondiente argumento
 se coloca le signo &, depsues dle tipo del parametro (la variable)
 
    int &cuenta  ... se lee como cuenta e suna referencia al valor int, leido de izda a dcha
    & = operador de direccion
 
 - se pasa la direccion de memoriadonde se almacena dicho valor
 
 
 - * = operador unario de indireccion (dcha a izda)
 
     int i = 5, j
     int p = &i        es => int* p  , la indireccion de p es la direcicon de i
     *p -> es un valor
     p  -> es un espacio de memoria
 
*/
