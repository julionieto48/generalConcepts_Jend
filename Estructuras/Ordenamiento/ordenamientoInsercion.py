arreglo = [4,2,3,1,5] ; print (arreglo)

for i in range( len(arreglo)):
    posicion = i                   # posicion indica lugar del arreglo
    auxiliar = arreglo[i]          # guarda el valor en el qu enos encotramos del arreglo hastag valor actual

    while posicion > 0 and arreglo[posicion - 1] > auxiliar :        # si no hay nada a la izda si el num a la izda e smayor al actual se efectua el cambio
        arreglo[posicion] = arreglo[posicion - 1]                    # efectua el cambio
        posicion = posicion - 1                                      # se ejecutarah asta que la secuencia este compeltamente ordenada

    arreglo[posicion] = auxiliar
print (arreglo)






# ordenar de menor a mayor
# 4 2 3 1 5  pos = 0
#
# verificar si num actual es mayor a izda
# hacer cambio hasta que este ordenado
# 4 2 3 1 5  pos = 1 -> 2 4 3 1 5
#
# 2 4 3 1 5  pos = 2 -> 2 3 4 1 5 ya esta ordenado
#
# 2 3 4 1 5  pos = 3 -> 2 3 1 4 5 -> 2 1 3 4 5 -> 1 2 3 4 5


