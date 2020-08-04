 //
// Created by Julian Esteban Nieto Diaz on 20/12/18.
//
/*Estreucturas repetitivas ciclos o bucles
 *  conjunto de instrucciones que se repiten mientras se cumple una condicion --- el WHILE
 *
 *  while(expresion logica){ conjunto de instrucciones; }
 *  cuando se deja de cumplir una istruccion logica se sale de la repeticion
 *
 *  DO WHILE... instruccion de repeticion
 *  do{ conjunto de instrucciones; }while(expresion logica);
 *  primero se actua y deespue sse evalua
 *  por lo menos se ejecuta una vez
 */

//_____________________________________________________ * ________________ * __________________

#include <iostream>
# include <math.h>
using namespace std ;
// __________________
int ejemplo();
int ejemplo_1();
void ejemplo_2();



// __________________
int main() {

    cout << " ____*_____*___ " << endl;
    cout << " Ejemplo  : " << endl;
    ejemplo();
    cout << " ____*_____*___ " << endl;
    cout << " Ejemplo 1 : " << endl;
    ejemplo_1();
    return 0;


}


// __________________
int ejemplo(){
    // escribir los numeros del 1 al 10... por medio de una repeticion controlada por contador
    int i; // se crea un iterador
    i = 1; // inicializar
    while(i <= 10){
        cout << i << " - "; // se imprime el valor
        i = i + 1 ; // o i += 1 o i++ ya que aumenta de uno en 1 es decir toca cambiar el iterador para evaluar
    }
    cout << endl;
    // ahora ocn un for
    for (int contador = 1; contador <= 10; contador ++ ){
        cout << contador << " - ";
    }
    cout << endl;
    i = 10; // ahora imprimir alreves
    while(i >= 1){
        cout << i << " - ";
        i-- ;
    }
    cout << endl;
}

int ejemplo_1(){
    int i = 1;
    do{
        cout << i << " - ";
        i++ ;
    }while( i <= 10);
    cout << endl;

    int a = 10 ;
    do{
        cout << a << " - ";
        a-- ;
    }while( a >= 1);


}

void ejemplo_2() {
	// controlar acciones determinadas en u rango
	int  numero;
	for(int i = 1; i <= 5;i++)
		do {
			cout << " Ingrese un numero entre 1 y 10: "; cin >> numero;
		} while ((numero < 1) || (numero > 10));
}





//_____________________________________________________ * ________________ * __________________
/* Referencias
 * ehack.info/bucle-while-en-c/
 * www.youtube.com/watch?v=DTmMjJ-cd00&index=20&list=PLWtYZ2ejMVJlUu1rEHLC0i_oibctkl0Vh
 * www.learncpp.com/cpp-tutorial/55-while-statements/
 *
 * do while
 * //www.youtube.com/watch?v=vHKWMR2WaIQ&list=PLWtYZ2ejMVJlUu1rEHLC0i_oibctkl0Vh&index=21
 *
 * ejercicios
 * //www.youtube.com/watch?v=FqpQZqMUH-A&list=PLWtYZ2ejMVJlUu1rEHLC0i_oibctkl0Vh&index=23
 * //www.youtube.com/watch?v=_6RX8n60-8Q&list=PLWtYZ2ejMVJlUu1rEHLC0i_oibctkl0Vh&index=24
 * //www.youtube.com/watch?v=5fF9FWfakx0&index=25&list=PLWtYZ2ejMVJlUu1rEHLC0i_oibctkl0Vh
 * //www.youtube.com/watch?v=Pt0J5QuQlZk&list=PLWtYZ2ejMVJlUu1rEHLC0i_oibctkl0Vh&index=26
 * //www.youtube.com/watch?v=yNWuEDd8iQs&list=PLWtYZ2ejMVJlUu1rEHLC0i_oibctkl0Vh&index=27
 * //www.youtube.com/watch?v=oCctXsUOb2k&index=28&list=PLWtYZ2ejMVJlUu1rEHLC0i_oibctkl0Vh
 * //www.youtube.com/watch?v=12xEUfqiO0M&list=PLWtYZ2ejMVJlUu1rEHLC0i_oibctkl0Vh&index=30
 * //www.w3resource.com/c-programming-exercises/for-loop/index.php
 * deittel  e ira pohl

*/