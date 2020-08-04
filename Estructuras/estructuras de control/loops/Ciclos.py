# un bucle es una estructura de control que repite un bloque de instrucciones
# for variable in elemento iterable (lista, cadena, range, etc.):
#     cuerpo del bucle
# for :
# - se ejecutan una cantidad determinada de veces --como en pista de atletismo
# hay una evaluacion de la cantidad de ciclos
# - se puede trabajar el ciclo for como un ciclo while
# - no es necesario definir la variable de control antes del bluque
# _____________________________________________________ * ________________ * __________________
def ejemplo():
    print (" imprimir una palabra una cantidad de veces")
    for ciclo in [0,1,2,3]:
        print(" Hola ")
    print ("________")
    for ciclo in [1,1,1,1]:
        print(" kios ")
    # la variable de control recorre la estructura tomando el valor de la lista,
    # los valores que toma la variable no son importantes, lo que importa es que la lista tiene tres elementos
    # y por tanto el bucle se ejecuta tres veces
    # en cada repeticion saca por pantalla
print(" ej  ")
ejemplo()

def ejemplo_1():
    for ciclo in [3, 4, 5]:
        print(" ciclo vale", ciclo); print(" elevado a la segunda potencia",ciclo**2)
    # la variable de control " ciclo"  se utiliza en el bloque de instrucciones
    # hay que tener en cuenta que la variable de control va tomando los valores del elemento recorrible.
print(" ______*______*_____ ")
print(" ej 1 ")
ejemplo_1()

def ejemplo_2():
    ciclo = 10
    print("El bucle no ha comenzado, ciclo = ", ciclo)
    for ciclo in [0, 1, 2, 3, 4]:
        print (" ciclo vale", ciclo)
        cuadrado_del_ciclo = ciclo * ciclo
        print (" el cuadrado de la posicion de la lista es", cuadrado_del_ciclo)
    print(" A la salida del bucle el ciclo vale", ciclo)
    # la variable de control conserva el ultimo valor asignado
print(" ______*______*_____ ")
print(" ej 2 ")
ejemplo_2()

def ejemplo_3():

    for i in range(3):
        print("Hola ")
    # se utilizan los tipos range() ocupan menos memoria en el ordenador
    print ("_________")
    for i in range(10):
        print("Hola ")
    # range controla la cantidad de iteraciones
print(" ______*______*_____ ")
print(" ej 3 ")
ejemplo_3()

# contadores y acumuladores
# En muchos programas se necesitan variables que cuenten cuAntas
# veces ha ocurrido algo (contadores) o que acumulen valores (acumuladores).



# Se entiende por contador una variable que lleva la cuenta del numero de veces que
# se ha cumplido una condicion.

def ejemplo_4():
    # se buscan la cantidad de multiplos que hay por medio del contador el cual se activa al entrar en la condicion
    cuenta = 0  # toma el valor inicial 0.
    for i in range(1, 6): # La variable de control toma el primer valor del tipo range(). En este caso, la variable de control es i y toma el valor 1.
        if i % 2 == 0:
            cuenta = cuenta + 1
    print (" desde 1 hasta 6 hay", cuenta);print (" multiplos de 2")
    # La variable cuenta, que hace el papel de acumulador
    # En este caso se comprueba si la variable i es multiplo de 2
    # (comprobando si el resto de la divisiun por 2 es igual a 0). Como no lo es,
    # (1 no es multiplo de 2) el bloque dentro del if no se ejecuta.
print(" ______*______*_____ ")
print(" ej 4 ")
ejemplo_4()

# Se entiende por acumulador una variable que acumula el resultado de una operacio.

def ejemplo_5():
    suma = 0
    for i in [1, 2, 3, 4]:
         suma = suma + i
    print (" La suma de los numeros del 1 al 4 es", suma)
    # La variable de control toma el primer valor de la lista.En este caso, la variable de control es i y toma el valor 1 para la primer iteracion.
    # en primer iteracion .. En este caso a la variable suma (que valia 0) se le anade i (que vale 1), por lo que ahora suma vale 1.

    # La variable suma, que hace el papel de acumulador,
    # El acumulador se modifica en cada iteracion del bucle (en este caso, el valor de i se anade al acumulador suma).
print(" ______*______*_____ ")
print(" ej 5 ")
ejemplo_5()

# bucles anidados
# Se habla de bucles anidados cuando un bucle se encuentra en el bloque de instrucciones de otro bloque.

# Variables Independientes
# Se dice que las variables de los bucles son independientes cuando los valores que toma la variable de control
# del bucle interno no dependen del valor de la variable de control del bucle externo.

def ejemplo_6():
    for i in [0, 1, 2]:
        for j in [0, 1]:
            print (" i vale", i); print (" j vale", j)
            print (" ______________")
    # el bucle externo (el controlado por i) se ejecuta 3 veces y el bucle interno (el controlado por j) se ejecuta dos veces por cada valor de i.
    # Por ello la instruccion print() se ejecuta en total 6 veces (3 veces que se ejecuta el bucle externo x 2 veces que se ejecuta cada vez el bucle interno = 6 veces).
print(" ______*______*_____ ")
print(" ej 6 ")
ejemplo_6()

def ejemplo_7():
        print ("7 A ")
        for i in [0, 1, 2]:
            print (" i vale", i)
            for j in [0, 1]:
                print (" j vale", j)
                print("____________")

        print ("7 B ")
        for i in [0, 1, 2]:
            print (" i vale", i)
            for j in [0, 1]:
                print (" j vale", j)
        print("____________")

        print ("7 C ")
        for i in [0, 1, 2]:
            print("____________")
            for j in [0, 1]:
                print (" j vale", j)
            print (" i vale", i)

        print ("7 D ")
        for i in [0, 1, 2]:
            print("____________")
            for j in [0, 1]:
                print (" j vale", j)
        print (" i vale", i)

# anidado de las instrucciones dentro del bucle
print(" ______*______*_____ ")
print(" ej 7 ")
ejemplo_7()

# Variables Dependientes

# Se dice que las variables de los bucles son dependientes cuando los valores que toma la variable de
# control del bucle interno dependen del valor de la variable de control del bucle externo
def ejemplo_8():
    for i in [1, 2, 3]:
        for j in range(i):
            print (" i vale", i )
            print (" j vale", j )
            print (" ___________")
    # el bucle externo (el controlado por i) se ejecuta 3 veces y el bucle interno (el controlado por j) se ejecuta 1, 2 y 3 veces.
    # Por ello la instruccion print() se ejecuta en total 6 veces.

    # La variable i toma los valores de 1 a 3 y la variable j toma los valores de 0 a i

print(" ______*______*_____ ")
print(" ej 8 ")
ejemplo_8()

print(" ______*______*_____ ")
print(" mas ejemplos...... ")
print(" ej 9 ")

def ejemplo_9():
      for x in range(0, 3):
          print "estamos en %d" % (x)
ejemplo_9()
print(" ___________ ")
print(" ej 10 ")

def ejemplo_10():
    for x in xrange(1, 5):
        for y in xrange(1, 5):
            print '%d * %d = %d' % (x, y, x*y)
        print(" ___________ :/ ")


ejemplo_10()

# _____________________________________________________ * ________________ * __________________
# referencias:
# http://www.mclibre.org/consultar/python/lecciones/python-for.html
# http://www.mclibre.org/consultar/python/lecciones/python-for-2.html
# https://www.youtube.com/watch?v=zGCzmpuHqzo
# https://www.codecademy.com/en/forum_questions/5143d903006a282ef60026be
# https://www.tutorialspoint.com/python/python_loops.htm?fbclid=IwAR07xUBLpWtExCVNMUaCIlIlXpIjM4Y6W3iuol1sP56Rww3Ih0zGhjrpnMI