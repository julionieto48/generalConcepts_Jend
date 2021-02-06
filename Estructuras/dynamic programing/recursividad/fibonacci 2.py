
def fiboUno(n):

    a, b = 1, 1
    listaFibo = []
    for i in range(n - 1):
        a, b = b, a + b
    return a

valor = 5
for n in range(1, valor):
    print(n, " -> " , fiboUno(n))


# primer iteracion  a = 1  b = 1   ; a = 1 , b = 2 + 1 = 3
# segunda iteracion  a = 1  b = 2  ; a = 2 , b = 3 + 2 = 5

#_________________//____________
# https://stackoverflow.com/questions/494594/how-to-write-the-fibonacci-sequence
#https://technobeans.com/2012/04/16/5-ways-of-fibonacci-in-python/



# _________________//____________

# forma recursiva... unque se hace lento
def fiboTres(n):
    if   n == 1: return 1
    elif n == 2: return 1

    elif n > 2 :
        return fiboTres(n - 1) + fiboTres(n - 2)


print ("_______________//___________")
valor = 7
for n in range(1, valor):
    print(n, " -> " , fiboTres(n))


# 1 , 1 , 2    , 3    , 5
#        1 + 1
#                2 + 1
#                     , 3 + 2  ..... etc



# __________________ //________________
# solucionar usando memorizacion

fibonacciCache = {}                    # diccionario en el que se almacenana llamados de funcion recientes

def fiboCuatro(n):

    if   n in fibonacciCache:                              # chequear si el valor par ale termino n esta en el cache
        return fibonacciCache[n]

                                                           # calcular el temrino n
    if   n == 1:
        valor = 1
    elif n == 2:
        valor = 1

    elif n > 2 :
        return fiboCuatro(n - 1) + fiboCuatro(n - 2)

    fibonacciCache[n] = valor
    return valor


print ("_______________//___________")
valor = 15
for n in range(1, valor):
    print(n, " -> " , fiboCuatro(n))



print " aprox al golden ratio "

for n in range(1, valor):
    print (fiboCuatro(n + 1) / fiboCuatro(n) )




# https://www.youtube.com/watch?v=Qk0zUZW-U_M