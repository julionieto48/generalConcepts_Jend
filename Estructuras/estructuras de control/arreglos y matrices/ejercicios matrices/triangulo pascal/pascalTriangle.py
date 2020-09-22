

def trianguloPascal(numRows):   # entrada de la cantidad de filas deseadas

    a = [ [] for i  in range(numRows)  ]   # lista dentro d euna lista

    for  i  in range(numRows): # filas
        for j in range(i + 1 ) : # pq la saida e suna matrix que va hasta la diagonal

            if j < i :
                if j == 0 : #priemr condicion
                    a[i].append(1)
                else: # tercera condicion ... competar la operacion dependiente de las filas anteriores
                    a[i].append(a[i-1][j] + a[i-1][j-1])

            elif j == i :   # segunda condicion
                a[i].append(1)

    return a

mtr = trianguloPascal(5)
print mtr

