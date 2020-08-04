arreglo = [4,2,3,1,5] ; print (arreglo) ; aux = 0

# for i in range( 0, len(arreglo) )  :
#
#     for j in range(0 , len(arreglo) - 1 ) :
#         #print  arreglo[j] ; print  arreglo[j + 1]
#
#         if arreglo[j] > arreglo[j + 1] :  # j = valor acual
#
#             aux       =  arreglo[j]
#             arreglo[j] = arreglo[j + 1]
#             arreglo[j + 1] = aux
#
# print (arreglo)



i = 0
while i  < len(arreglo):
    j = i + 1

    while i < len(arreglo):
        if arreglo[j + 1] > arreglo[j]:
            aux        = arreglo[j]
            arreglo[j] = arreglo[j + 1]
            arreglo[j + 1] = aux
            j = j + 1
    i = i + 1

print (arreglo)




# http://www.pythondiario.com/2017/09/introduccion-supongamos-que-tenemos-la.html
# https://cdklhph.wordpress.com/2015/08/08/ordenamiento-burbuja/

# while j < len(arreglo):
# if A[i] > A[j]:
# A[i],A[j] = A[j], A[i]