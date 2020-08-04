//
//  main.cpp
//  pointers
//
//  Created by Julian Esteban Nieto Diaz on 20/06/19.
//  Copyright © 2019 Julian Esteban Nieto Diaz. All rights reserved.
//

#include <iostream>
#include "pointer.h"
using namespace std;

int main(int argc, const char * argv[]) {
    
    cout << "_________*_________*_________" << endl;
    cout << "Ejemplo 1:" << endl;
    int a = 2; ejemplo1(a);
    cout << "2. El valor de la variable es:" << a << endl;
    
    cout << "_________*_________*_________" << endl;
    cout << "Ejemplo 2:" << endl;
    ejemplo2();
    
    cout << "_________*_________*_________" << endl;
    cout << "Ejemplo 3:" << endl;
    ejemplo3();
    
    cout << "_________*_________*_________" << endl;
    cout << "Ejemplo 4:" << endl;
    ejemplo4();
    
    cout << "_________*_________*_________" << endl;
    cout << "Ejemplo 5:" << endl;
    ejemplo5();
    
    
    return 0;
}

void ejemplo1( int& a ){
    cout << "1. El valor de la variable es:" << a << endl;
    a = 15;
}

void ejemplo2(){
    int a = 15,*point = &a; // puntero es un avariable que guarda la dir d ememria, en este caso estoy guardando la direccion d ememoria de a en la variable puntero
    cout << "1.El valor de la variable es:" << a << endl;
    cout << "1.1La ubicacion en memoria es:" << &a << endl; // operador de direccion d emem
    
    // otra forma :)
    cout << "2.El valor de la variable es:" << *point << endl;
    cout << "2.1 La de la variable es:" << point << endl;
}

void ejemplo3(){
    // comprobar si numero e spar o impar, mostrando ubicacion de memoria
    int num = 2, *dir_num = &num;
    // guarad posicion de numero en el puntero
    if(*dir_num % 2 == 0){
        cout << "El valor" << *dir_num << " es par, se almacena en :"<< dir_num << endl;
    }else{
        cout << "El valor" << *dir_num << " es IMpar, se almacena en :"<< dir_num << endl;
    }
}

void ejemplo4(){
    // Determinar si un número es primo: divisible por la unidad o si mismo
    int num = 15, *dir_num = &num;
    int counter = 0;
    
    for(int i = 1; i < *dir_num; i++){ // ciclo desde 1 hasta num digitado
        if(*dir_num % i == 0){ // si la division es exacta hay un num que es divisible por el numero ingresado
            counter++;
        }
    }
    if(counter > 2){ // es divisible por mas de 2 nums
        cout << "El numero:" << *dir_num << "NO es primo" << endl;
    }else{
        cout << "El numero:" << *dir_num << "es PRIMO" << endl;
    }
}
void ejemplo5(){
    int arreglo[] = {1,2,3,4,5};
    int *dir_arr; // int *dir_arr = &arreglo[0];
    dir_arr = arreglo;
    
    for(int i = 0; i < 5; i++ ){
        cout << "Elemento en posicion" << i<< "etiene un valor de " << *dir_arr++ << endl; // *dir_arr = *dir_arr + 1
        cout << "Elemento en posicion" << i<< " tiene un lugar en memoria" << dir_arr++ << endl; // *dir_arr = *dir_arr + 1
    }
}



