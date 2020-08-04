#pragma once


int length(int *p);
void ejemplo();
void ejemplo_1();
void ejemplo_2();
/*
Metodo Burbuja:
es algoritmo de ordenmamiento, est e revisa cada elemento de la lista (arreglo) que va a ser ordenado con el siguiente elemento,
haciento intrcambio de posicion de ser necesario 

ejemplo:
      |__ 4| _ 5| 2| 1| 3|  -> primer numero acttual es comparado con el siguiente
	                          con este parametro   si   numactual > numsiguiente
							                             hacer intercambio
      | 4| __ 5|_ 2| 1| 3| -> | 4| 2| 5| 1| 3|
	  | 4| 2|__ 5|_ 1| 3|  -> | 4| 2| 1| 5| 3|
	  etc...

*/

/*
Ordenamiento por insercion
requiere de n^2 operaciones para ordenar una lista de n elementos

ejemplo:


        |__ 5| _ 3| 4| 1| 2|.... "__ posicion del arreglo actual", aumenta de 1 en 1 ; se comprueba si el numero
		                         de la izda es menor si se cumple se dice que está ordenado
		
		| 5|__ 3| 4| 1| 2|  .... como numerizda > numero actual, se hace cambio de posicion->
		                    ->       | _3|__ 5| 4| 1| 2| "_ numero de analisi"
							.
							.
							.
		| 1|2| 3| 4|__ 5|   a medida que se realizo el cambio se comparaba
    
*/

/*
Ordenamiento por seleccion
Es un algoritmo de ordenamiento que requiere n^2 operaciones que se usa para ordenar una lista de n numeros
1. buscar minimo elemento de la lista
2. intercambiar con el primer elemento
3.buscar el minimo del resto de la lista
4. intercambiar con el segundo...

ejemplo:
sea:
        | 4|3| 1| 5| 2|  = valor       __ infdica flecha de iteracion, _ indica minimo
		| 0|1| 2| 3| 4|  = i
  paso 1                                       paso 2
			  |__ 4|3|_ 1| 5| 2|  = valor ----> | 1| 4|3| 5| 2| 
			  | 0|1| 2| 3| 4|  = i

paso 3 
el 1 ya quedo ordenado asi que se busca el siguiente minimo
| 1|__ 4|3| 5|_ 2|
*/

//_____________*_____________________*___________________
/*
Referencias:
youtube.com/watch?v=lYNyL0HuWSg&index=52&list=PLWtYZ2ejMVJlUu1rEHLC0i_oibctkl0Vh


*/