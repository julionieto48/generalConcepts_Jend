
pila = [1,2,3,4]


#anadir

pila.append(5)
pila.append(6)

print(pila[-1]) ; print(pila[0:])

# quitar LIFO
n = pila.pop()
print(f" se saco el elemento  {n}")

# hacer pila en la que user ingrese y automaticamente se vacie

pilaUsuario = {} # se usa como diccionario
tamano = 6
empty = True
i = 0
while (empty == True ):
    valor = input(" ingrese entero: ")
    # pilaUsuario.append(valor)
    pilaUsuario[i] = valor
    #print( pilaUsuario[i])
    if (len(pilaUsuario) == tamano):
        empty = False
    i = i + 1
print( pilaUsuario )

# https://stackoverflow.com/questions/5653533/indexerror-list-assignment-index-out-of-range
# https://www.youtube.com/watch?v=joAw2jWgZqA