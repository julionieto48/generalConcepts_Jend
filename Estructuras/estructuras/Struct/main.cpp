//
//  main.cpp
//  cmascmass projects
//
//  Created by Julian Esteban Nieto Diaz on 25/10/20.
//  Copyright © 2020 Julian Esteban Nieto Diaz. All rights reserved.
//

// anidated struct


#include <iostream>
#include "Header.h"
#include <stdlib.h>
using namespace std ;

struct info_direccion{
    char calle;
    char ciudad;
    char barrio;
    
};

struct empleado{
    char nombre[20];
    struct info_direccion direccionEmpleado;
    double salario;
}empleados[2];



int main(int argc, const char * argv[]) {
    anidado();
    cout << "____\n";  // identificador::cout
    return 0;
}

void anidado(){
    for (int i = 0; i < 2;  i++) {
        fflush(stdin); // vaciar buffer
        cout << "ingresar nombre: \n" ;
        cin >> empleados[i].nombre  ; // pudiese usar cin.getline  empleados['Juan'] se refiere a un arreglo de estructuras
        
        cout << "Digite su direccion: \n" ;
        cin.getline(&empleados[i].direccionEmpleado.calle,30);
        cin.getline(&empleados[i].direccionEmpleado.ciudad,20, '\n');
        cin.getline(&empleados[i].direccionEmpleado.barrio,20, '\n');
        
        cout << "Digite salario: \n" ;
        cin >> empleados[i].salario ;
        
        cout << "___ \n" ;
    }
    
    // imprimir
    for (int i = 0; i < 2;  i++){
        cout << "Direccion" << empleados[i].direccionEmpleado.calle << endl ;
        
    }
}

// www.programiz.com/cpp-programming/library-function/iostream/cin
