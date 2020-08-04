//
// Created by Julian Esteban Nieto Diaz
//




//_____________________________________________________ * ________________ * __________________
#include <iostream>
# include <math.h>
# include <Ciclos.h>
using namespace std ;



// __________________
int main() {
    cout << " ____*_____*___ " << endl;
    cout << " Ejemplo a : " << endl;
    ejemplo_a();
    cout << " ____*_____*___ " << endl;
    cout << " Ejemplo b: " << endl;
    ejemplo_b();
    cout << " ____*_____*___ " << endl;
    cout << " Ejemplo : " << endl;
    ejemplo();
    cout << " ____*_____*___ " << endl;
    cout << " Ejemplo 1: " << endl;
    ejemplo_1();
    cout << " ____*_____*___ " << endl;
    cout << " Ejemplo 2: " << endl;
    ejemplo_2();
    cout << " ____*_____*___ " << endl;
    cout << " Ejemplo 4: " << endl;
    ejemplo_4();
    cout << " ____*_____*___ " << endl;
    cout << " Ejemplo 5: " << endl;
    ejemplo_5();
    cout << " ____*_____*___ " << endl;
    cout << " Ejemplo 6: " << endl;
    ejemplo_6();





    return 0;
}
// __________________

int ejemplo_a(){ // del 1 hasta el 10  i = iterador
    int i;
    for(i = 1; i < 10; i++){
        cout << i << endl;
    }
    return 0;
}

int ejemplo_b(){ // del 10 hasta el 1

    for(int i = 10; i >= 1; i--){
        cout << i << endl;
    }
    return 0;
}
void ejemplo(){
    // imprimir hola cantidad de veces deseada (4 veces)
    for(int i = 1; i <= 4; i++){
        cout << "Hola" << endl;
    }
}

// funcion de longitud
int len(int *p)
{
    int longitud = (sizeof(p)/sizeof(*p));
    std::cout << "Length of array = " << longitud << std::endl;
    return longitud;
}

int ejemplo_1(){
    int arreglo[3] ={3,4,5};
    // formalmente en el ejemplo se usaba en la condicion el valor 3 sin embargo s eimplementa la fucion longitud de la referencias  [a]
    for(int i = 0; i <= len(arreglo); i++){

        cout << " i vale " << i << " el valor es " << arreglo[i] << " su potencia " << pow( arreglo[i],2) << endl;
    }
    return 0;
}

int ejemplo_2(){
    int arreglo[3] ={3,4,5};

    for(int i = 0 ;i <= len(arreglo); i++){

        cout << " i vale " << i << " el valor es " << arreglo[i] << " su potencia " << pow( arreglo[i],2) << endl;
    }
    return 0;
}

int ejemplo_4(){
    int cuenta = 0;
    for (int i = 0; i <= 6; i ++){
        if( i % 2 == 0){
            cuenta = cuenta + 1; // cuenta += 1
        }
    }
    cout << " desde 1 hasta 6 hay," << cuenta << " multiplos de 2. " << endl;

    return 0;
}

int ejemplo_5(){
    int suma = 0;
    int arreglo[] ={1,2,3,4};
    for(int i = 0; i <= len(arreglo); i++ ){
        cout << " i vale" << i << endl ;
        suma += i ;
    }
    cout << " La suma de los numeros del 1 al 4 es" << suma << endl;
    return 0;
}

int ejemplo_6(){
    // la suma de los numeros pares hasta el 20
    int total = 0; // resultaod total de la suma
    for(int i = 2; i <= 20; i += 2 )
        total += i;
    cout << "La suma es " << total << endl;
    return 0;
}


