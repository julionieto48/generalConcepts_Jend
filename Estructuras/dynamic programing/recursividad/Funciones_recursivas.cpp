//
// Created by Julian Esteban Nieto Diaz on 20/12/18.
//

# include <iostream>
using namespace std;

//  _______________ * __________________________ * _________________
int factorial (int);
void cuenta_regresiva(unsigned int n);
//_____________________________________
int main(){
    // recursion o recursividad:
    // una funcion recursiva e llama a si misma como parte de la definicion... se llama a ella misma
    // tiene un caso base y un caso general
    cout << " __________*__________*________ " << endl;
    /*recursividad en un factorial... ej 4! = 4*3*2*1
     * caso base como 0! = 1 ... factorial(n) = 1 , si n = 0
     * caso general n * factorial(n-1), si n > 0
     *
     */
    int  fa = 3 ;
    cout << " el factorial de " << fa  << " es "<< factorial(fa) << endl;

    // cuenta regresiva
    int comienza = 10 ;cuenta_regresiva(comienza);

    return 0;
}


//_______________________________________
int factorial (int n){
    if ( n == 0  ){ // caso base
        n = 1; // se sobre escribe

    }
    else{ // caso general

        n = n * factorial(n-1);
    }
    return n;
}


void cuenta_regresiva (unsigned int n)
{
    if (n <= 0)
        cout << "despegue!!!" << endl;
    else {
        cout << " conteo en " << n << endl;
        cuenta_regresiva(n - 1);
    }
}


//  _______________ * __________________________ * _________________4
/* Referencias:
 *  https://www.youtube.com/watch?v=i9roxX8z7tk // recursividad
 *  https://www.learncpp.com/cpp-tutorial/7-11-recursion/
 *
 * ejercicios
 * http://www.bowdoin.edu/~ltoma/teaching/cs107/spring05/recursion.html
 * https://www.w3resource.com/c-programming-exercises/recursion/index.php
 *https://www.youtube.com/watch?v=SsCG68-hM88&list=PLWtYZ2ejMVJlUu1rEHLC0i_oibctkl0Vh&index=81
 * https://www.youtube.com/watch?v=Lh9WjVietg0&index=82&list=PLWtYZ2ejMVJlUu1rEHLC0i_oibctkl0Vh
 *
 *
 * /