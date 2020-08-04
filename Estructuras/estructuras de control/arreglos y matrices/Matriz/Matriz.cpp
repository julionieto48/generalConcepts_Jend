//
//  main.cpp
//  Matriz
//
//  Created by Julian Esteban Nieto Diaz on 15/03/19.
//  Copyright © 2019 Julian Esteban Nieto Diaz. All rights reserved.
//

// #include "stdafx.h"
#include <iostream>
#include "Matriz.h"
#include <cstdlib>
using namespace std;

//_____________*_____________________*___________________
int main()
{
    cout << " ___//____//____" << endl << " Ejemplo: " << endl;
    uno();
    cout << " ___//____//____" << endl << " Ejemplo 1: " << endl;
    dos();
    cout << " ___//____//____" << endl << " Ejemplo 2: " << endl;
    tres();
    cout << " ___//____//____" << endl << " Ejemplo 3: " << endl;
    cuatro();
    cout << " ___//____//____" << endl << " Ejemplo 4: " << endl;
    cinco();
    cout << " ___//____//____" << endl << " Ejemplo 5: " << endl;
    seis();
    
    
    
    cout << endl; system("PAUSE");
    
    return 0;
}

//_______________________________________________________
int uno() { // rellenar una  matriz pidiendo al usuario numero de filas y columnas
    int matrix [100][100], filas , columnas;
    cout << " Numero de filas ="; cin >> filas;
    cout << " Numero de columnas ="; cin >> columnas;
    // uso de bucle anidado
    for (int i = 0; i < filas; i++) {
        
        for (int j = 0; j < columnas; j++) {
            cout << " Digite un numero en la posicion: " << " fila i " << i << " columna j " << j << endl;
            cin >> matrix[i][j];
        }
    }
    
    // mostrar la matriz
    for (int i = 0; i < filas ; i++) {
        
        for (int j = 0; j < columnas; j++) {
            cout << matrix[i][j];
        }
        cout << " \n "; // cuando se llena la columna se cambia
    }
    
    int matriss[100][100], fila, columna;
    cout << " Numero de filas ="; cin >> fila;
    cout << " Numero de columnas ="; cin >> columna;
    // uso de bucle anidado
    for (int j = 0; j < columna; j++) {
        
        for (int i = 0; i < fila; i++) {
            cout << " Digite un numero en la posicion: " << " fila  " << j << " columna  " << i << endl;
            cin >> matriss[i][j];
        }
    }
    // se rellenan primero las columnas hasta acabar la fila y depsues s epasa a la siguiente fila
    // mostrar la matriz
    for (int j = 0; j < columnas; j++) {
        
        for (int i = 0; i < filas; i++) {
            cout << matrix[i][j];
        }
        cout << " \n "; // cuando se llena la columna se cambia
    }
    
    return 0;
}

void dos() {
    // mostrar la diagonal de una matriz
    int numeros[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    
    cout << "Mostrando Matriz completa\n";
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << numeros[i][j];
        }
        cout << "\n";
    }
    
    cout << "\n\nMostrando diagonal principal de la matriz\n";
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                cout << numeros[i][j] << endl;
            }
        }
    }
    
    
}

void tres(){
    // hacer matriz de tipo entero 2*2... llenarla d enumeros y copiar todo su contenido a un amatriz
    int numeros[2][2] = { {1,2}, {3,4} };
    int numeros2[2][2];
    
    for( int i = 0; i < 2; i++){
        for( int j= 0; j < 2 ; j++){
            // poner la variable vacia y depsues la otra  ala cual le quiero pasar el contenido
            numeros2 [i] [j] = numeros[i][j];
        }
    }
    
    // mostrar la matriz 2
    for (int i = 0; i < 2; i++){
        for ( int j = 0; j <2 ; j++){
            cout << numeros2[i][j];
        }
    }
    cout << " \n ";
}

void cuatro(){
    // hacer matriz 3*3 que saque su transpuesta
    int matrix[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    
    cout << " Matriz Original " << endl;
    for (int i  = 0; i < 3;i ++){
        for (int j = 0; j < 3; j++){
            cout << matrix[i][j];
        }
        cout << " \n ";
    }
    cout << " \n ";
    cout << " Matriz Transpuesta " << endl;
    for (int i  = 0; i < 3;i ++){
        for (int j = 0; j < 3; j++){
            cout << matrix[j][i] << " ";
        }
        cout << " \n ";
    }
    
}


void cinco(){
    // realizar la suma de 2 matrices cuadradas
    int matrix1[3][3] ={ {1,2,3},{4,5,6},{7,8,9} };
    int matrix2[3][3] ={ {1,4,7},{2,6,8},{3,6,9} };
    cout << " Matriz 1 " << endl;
    for (int i  = 0; i < 3;i ++){
        for (int j = 0; j < 3; j++){
            cout << matrix1[i][j];
        }
        cout << " \n ";
    }
    cout << " Matriz 2 " << endl;
    for (int i  = 0; i < 3;i ++){
        for (int j = 0; j < 3; j++){
            cout << matrix2[i][j];
        }
        cout << " \n ";
    }
    
    //sumar matrices
    cout << " \n ";
    cout << " Matrices sumadas " << endl;
    for (int i  = 0; i < 3;i ++){
        for (int j = 0; j < 3; j++){
            cout << matrix1[i][j]  + matrix2[i][j]<< " ";
        }
        cout << " \n ";
    }
    
}

void seis(){
    // hacer matriz piramide
    /*
     1
     12
     123
     1234
     12345
    */
    int dimension = 4; // num de filas y columnas
    
    for(int i = 1; i <= dimension; i++ ){ // i = cantidad filas
        for(int j = 0;  j != i; j++){ // se deja de entrar al ciclo hasta que sean iguales mientras está en el ciclo se realiza la impresion
            printf("%d", j+1);
        }
        
    }
    
    
}
