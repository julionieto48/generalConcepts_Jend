
valorBusqueda = 5
numeros = [4,3,6,5,6,8,4,5]
def busquedaSecuencial( dato , lista ):

    bandera = False
    i = 0
    while bandera == False and i < len(lista):

        if lista[i] == dato :

            bandera = True
        i += 1

    if bandera == True :
        print "elemento " , dato , " fue encontrado en la posicion " , i
    elif bandera == False :
        print " no esta elemento"


busquedaSecuencial(valorBusqueda , numeros)

print "_______________//____________________"
def busquedaSecuencialDos( dato , lista):
    bandera = False
    ultimaBandera = False

    for i in range( len(lista)) :

        indices = [0] * len(lista)
        if dato == lista[i] :
            bandera = True
            indices.append(i)
        else:
            bandera = False
        ultimaBandera = bandera

    print "indices es: ",indices

    if bandera == False :
        print " no se encotnro el dato"
    else :
        print " el dato se encotnro en la(s) posicion ", indices, "del arreglo ", numeros


    for i in range( len(lista)):

        if indices[i] == i :
            print lista[i]              # mostrar valores como si se hubiesen extraido

busquedaSecuencialDos(valorBusqueda , numeros)

# https://www.arduino.cc/en/Tutorial/StateChangeDetection
# https://www.geeksforgeeks.org/searching-algorithms/