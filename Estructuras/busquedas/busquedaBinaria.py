# numeros deben estar ordenados de manera ascendente

# metodo de ordenamiento

def ordenAmiento( lista):
    for i in range(len( lista )):
        posicion = i                                               # posicion indica lugar del arreglo
        auxiliar = lista[i]                                        # guarda el valor en el qu enos encotramos del arreglo

        while posicion > 0 and lista[ posicion - 1] > auxiliar:  # si no hay nada a la izda si el num a la izda e smayor al actual se efectua el cambio
            lista[posicion] = lista[posicion - 1]                # efectua el cambio
            posicion = posicion - 1                              # se ejecutarah asta que la secuencia este compeltamente ordenada va mas a la izda

        lista[posicion] = auxiliar
    return lista
#______________________________________________________________

def binariaSearch( lista , dato ):

    inferior = 0 ; superior = len( lista )


    while inferior < superior :

        flag = False

        mitad = (inferior + superior) / 2                            # calcular la mitad

        if lista[mitad] == dato :                                    # si el numeor s eencuentra en la mitad
            flag = True

            break                                                    # se sale del bucle para dejar d eiterar
        elif lista[mitad] > dato :                                   # si el valor se encuentra en la mitad superior de la primer iteracion
            superior = mitad
            mitad = (inferior + superior) / 2                       # la mitad se corre en numero de pasos ojo

        elif lista[mitad] < dato :                                   # el dato se encuentra en la mitad inferior
            inferior = mitad
            mitad = (inferior + superior) / 2

    if flag == True :

        print  " el dato" , dato , " se encontro en la posicion " , mitad
        return mitad
    elif flag == False :

        print  " no se encontro el dato " , dato








valorBusqueda = 2
numeros = [4,3,6,5,6,8,4,5]
numeros = ordenAmiento(numeros)

binariaSearch(numeros , valorBusqueda)




# https://www.geeksforgeeks.org/binary-search/









