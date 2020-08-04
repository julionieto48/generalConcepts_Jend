# def tuples():
#     # es un conjunto ordenado e inmutable de elementos del mismo o diferente tipo.
#     a = (1, "a", 3.14) ; print(a)
#     len(a) # longitud de elemento
#     a = 2, ;  print(a) # la coma se refiere a una tupla
#
# print("Tuplas: ");tuples()
#
# def listas():
#     # las listas son conjuntos ordenados de elementos (numeros, cadenas, listas, etc).
#     primos = [2, 3, 5, 7, 11, 13]; print(primos)
#     fecha = ["Lunes", 27, "Octubre", 1997]; print(fecha)
#     peliculas = [["Avengers end game", 2019], [" Shazam", 2019]];print(peliculas)
#
#     nombre = " Pepe" ; edad = 25 ; alto = bool(0); anidado_1 = [nombre,edad] ; anidado_2 = [anidado_1 , alto]
#     print(anidado_2)
#
#     print(fecha[1],anidado_2[1]),anidado_1[1]
#     print(fecha[-1],anidado_2[-1],anidado_1[-1]) # ultimo elemento
#
#
#     fecha[-1] = 1600 ;print(fecha[-1],anidado_2[-1],anidado_1[-1]) # modificar elementos
#



# print(" Listas:"); listas()

# http://www.mclibre.org/consultar/python/lecciones/python-tupla.html
# http://www.mclibre.org/consultar/python/lecciones/python-listas.html
#________________________
def ejemplo_1():
    # recorrer una lista
    vocales = ["A","E","I","O","U"]
    for i in vocales:
        print (i) # imprime el elemento de la lista en la posicion i... se imprime el valor de i
    print ("________")

    # forma 2
    for i in range(len(vocales)):
        print (i)  # lenvocales = 5 y range(5) es [0 1 2 3 4]

    print ("________")

    # recorrer al reves
    for i in range(len(vocales) -1, -1, -1):
        print (i)  # lenvocales -1 = 4 y range(4, -1 ,-1) es [4 3 2 1 0]

    print ("________")

def Main():
    print ("Ejemplo 1:")
    ejemplo_1()
    return 0
Main()

















