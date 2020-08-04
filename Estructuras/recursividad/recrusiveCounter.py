
def contador(numero):

    print " conteo en : ", numero

    if numero == 0 :  #caso base
        print "Despeguen"

    else :
        return contador(numero - 1 )

# conteo descendente
contador(10)

