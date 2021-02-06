


def naivePower(base, exponente):

    esNegativo = False

    potencia = 1.0

    if exponente == 0:
        potencia = 1.0


    elif exponente < 0:
        esNegativo = True
        potencia = (1 / potencia)

    else:
        #print range(0,abs(exponente))  [0, 1, 2, 3]
        for i in range(0,abs(exponente)):
            potencia = potencia * base
            #print potencia , base , potencia * base
    return potencia

base = 3 ; exp = 4
print 'la potencia de, base:',base ,'exponente:', exp,' es:', naivePower(base,exp)
#_________________________ // ____________________________________________________

def recursivePower(base, exponente):

    if exponente != 0 :
        return float( base * recursivePower(base, exponente -1) )
    else:
        return 1
print 'la potencia de, base:',base ,'exponente:', exp,' es:', recursivePower(base,exp)







# https://afteracademy.com/blog/calculate-power-function