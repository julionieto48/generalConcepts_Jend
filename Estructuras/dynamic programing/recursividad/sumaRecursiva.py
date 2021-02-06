

def sumar(n):

    if n == 1:
        suma = 1
    else :
        suma = n + sumar( n - 1)

    return suma


i = 1
while True:
    # print(i)
    i +=  1

    elementos = 3
    resul = sumar(elementos) ; print "la sumatoria es :" , resul
    if(i > 1):
        break


#
# n = 3
#    3 + suma(2)
#    3 + n=2     + suma(1)
#    3 +  2      +   1       = 6


# https://www.youtube.com/watch?v=SsCG68-hM88&list=PLWtYZ2ejMVJlUu1rEHLC0i_oibctkl0Vh&index=81

# https://www.educba.com/do-while-loop-in-python/