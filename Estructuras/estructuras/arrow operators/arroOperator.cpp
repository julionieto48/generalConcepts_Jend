//
//  arroOperator.cpp
//  cmascmass projects
//
//  Created by Julian Esteban Nieto Diaz on 29/10/20.
//  Copyright © 2020 Julian Esteban Nieto Diaz. All rights reserved.
//

#include "arroOperator.hpp"

#include <iostream>
#include <stdlib.h>
using namespace std ;



class Entidad{
    public:
    int x;
    void Print() const { cout <<"si Buenas " << endl ;}
};

struct VectorA{
    float x,y,z;
};

class ScoopedPointer{ // elimina la entidad cuando se sale del scoope
private:
    Entidad* objeto;
public:
    // constructor
    ScoopedPointer(Entidad* entida)
    :objeto(){
        
    }
    
    ~ScoopedPointer(){ // destructor
        delete objeto;
    }
    
    Entidad* operador(){
        return objeto;
    }
    
};

//_________________________

int main(int argc, const char * argv[]) {
    casoBase();
    getOffsets();
    
    return 0;
}


//_________________________
void casoBase(){
    Entidad e;   // constructor
    e.Print();
    
    Entidad* pointer = &e ; // no puedo dar salida poniendo pointer.print() ya que se debe de referenciar
    Entidad& entidad = *pointer ; // de referenciar
    
    entidad.Print(); // son lo mismo
    (*pointer).Print(); // ojo jerarquia
    
    // hay una opcion mas sencilla para de referenciar...Entidad* pointer = &e  usar arrow opertor
    pointer -> Print();
}

void getOffsets(){
    //int offSet =  (int) &( (VectorA*)nullptr )-> x ;  // &()x
    //cout<< offSet << endl;
    
    //int offSetA =  (int) &( (VectorA*)nullptr )->x ;  // &()y
    //cout<< offSetA << endl;
    
}

void overloadAFunc(){
    ScoopedPointer entidad = new Entidad();
    //entidad->Print();
    
}


// www.youtube.com/watch?v=4p3grlSpWYA
