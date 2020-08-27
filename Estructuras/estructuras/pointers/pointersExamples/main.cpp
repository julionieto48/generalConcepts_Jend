//
//  main.cpp
//  pointersExamples
//
//  Created by Julian Esteban Nieto Diaz on 27/07/20.
//  Copyright © 2020 Julian Esteban Nieto Diaz. All rights reserved.
//

#include <iostream>
#include "Header.h"
#include <stdlib.h>

using namespace std;

int main(int argc, const char * argv[]) {
    funcion();
    cout << "________" <<endl;
    funcionA();
    cout << "________" <<endl;
    matrizDinamica();
    
    return 0;
}


void funcion(){
    int algunArreglo[10]; //compilador crea memoria contigua de 10 int con 4 bytes cada uno
    
    int *plocacion6 = &algunArreglo[6]; // el apuntador plocacion v aa tomar el valor de la locacion en mmeroia del elemento en posicion 6
    int *plocacion0 = &algunArreglo[0];
    
    
    // impresion de locacion en memoria
    cout << " apuntador localizado en 6 : " << plocacion6 <<endl; // 6 posiciones * 4 bytes = 24 bytes entre locaciones
    cout << " apuntador localizado en 0 : " << plocacion0 <<endl;
    cout << " diferencia de estos  : " << plocacion6 - plocacion0 <<endl; // diferencia entre enteros
    
}


void funcionA(){
    int algunArreglo[10] = {4,1,6,3,5,6,7,6,4,2};
    
    int *plocacion0 = &algunArreglo[0]; // el inicio del arreglo
    
    for (int i = 0; i < 10; i++) {
        cout << algunArreglo[i] << "-" ;
    }
    
    cout << "memory" << endl ;
    for (int i = 0; i < 10; i++) {
        cout << algunArreglo << "-" ;
    }
    cout << "_____" << endl ;
    cout << "memory y valor " << endl ;
    for (int i = 0; i < 10; i++) {
        cout <<"adress: "<< algunArreglo + i <<" value : " << *(algunArreglo + i) <<endl ;
    }
    cout << "_____" << endl ;
    cout << "de manera similar... " << endl ;
    for (int i = 0; i < 10; i++) {
        cout <<"adress: "<< plocacion0 <<" value : " << *plocacion0 <<endl ;
        plocacion0++ ; // aumentar la locacion
    }
    
}


void matrizDinamica(){
    int **pointerMatriz , numFilas = 3 , numColumns = 3;
    int laDePasar[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    /*
     1 2 3     el puntero pointe rmatriz apunta a el 1 4 7 y a su vez estos apuntan
     4 5 6     a sus respectivas filas
     7 8 9
     */
    cout << "vamos a rellenar una matriz 3x3 " <<endl ;
    
    // reservar memoria
    pointerMatriz = new int *[numFilas] ; // es una reserva de memoria como puntero    solo para las filas
    
    for(int i = 0 ; i < numFilas ; i++){
        pointerMatriz[i] = new int [numColumns]; // como a cada fila le siguen mas valores ej: 1 -> 2 3 se debe reservar dicha memoria
    }
    
    for (int i = 0; i < numFilas; i++) {
        for (int j = 0; j < numColumns; j++) {
            *( *(pointerMatriz+i) + j ) = laDePasar[i][j]; // asignacion dinamica
        }
    }
    
    // mostrar los datos
    mostrarMatrizDinamica(pointerMatriz, numFilas, numColumns) ;
    
    // eliminar la memoria usada
    for (int i = 0; i < numFilas; i++) {
        delete [] pointerMatriz[i]; // elimina filas
    }
    
    delete [] pointerMatriz; // elimina las columnas

}

void mostrarMatrizDinamica(int **matriz,int filas ,int columnas){
    cout <<"\n "<<endl ;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << *( *(matriz+i) + j )  ;
        }
        cout <<"\n ";
    }
}


