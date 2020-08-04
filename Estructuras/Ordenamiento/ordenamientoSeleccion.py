# 1. bucar el minimo elemento
# 2. el minimo elemento se intercambia por el primero
# 3. buscar el siguiente minimo
# 4. intercambiar ese minimo por la segunda posicion
# etc...

arreglo = [4,2,3,1,5] ; print (arreglo)

for i in range( len(arreglo)):
    minimo = i                   # en un primer momento se asume que la primera posicion es el num minimo
    #j = i + 1
    for j  in range( i + 1 ,len(arreglo)):

        if arreglo[j] == arreglo[minimo] :    # comprobar si el num actual es el manor
            minimo = j
    auxiliar = arreglo[i]
    arreglo[i] = arreglo[minimo]
    arreglo[minimo] = auxiliar

print (arreglo)

# i    minimo  j   arreglo[i]  arreglo[j]   auxiliar minimo(cambiado) arreglo[minimo]  arreglo
# 0      0     1      4           2            4          1                2             2 4 3 1 5
# 1      1     2      4           3            4          1

# https://runestone.academy/runestone/static/pythoned/SortSearch/ElOrdenamientoPorSeleccion.html
# https://programacion.net/articulo/algoritmos_de_ordenacion_y_busqueda_en_python_1387