# -*- coding: utf-8 -*-
"""Untitled3.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1Raygdyt0vFd-o6jssXnbs0BnwAiNo6hS
"""

elementos = [1,2,3,5]
# conjunto de elementos n , con subcojunto de k elementos
n = len(elementos)  # 3
k = 2

# a.permutaciones 
# a.1 con repeticion
cont = 0
for i in elementos :
  for j in elementos :
    print(i,j)
    cont += 1
print('premutaciones con repeticion: ',cont)

print(n**k)


print('__________________________#_________________________')
# a.2 eliminando elementos repetidos
cont = 0
for i in elementos :
  for j in elementos :
    if i != j:
      print(i,j)
      cont += 1
print('premutaciones SIN repeticion: ',cont)
if n > k :
  print(n**k / ( factorial(n-k)) )

print('__________________________#_________________________')  
# b. combinaciones  

# b.1 con repeticion 
# es como encontrar la matriz triangula superior... comparo si el indice de
# la fila es igual o menor al indice columna
cont = 0
for i in elementos :
  for j in elementos :
    if i <= j:
      print(i,j)
      cont += 1

print('Combinaciones con repeticion: ',cont)
if n > k :
  comb = factorial(n + k - 1) / (factorial(n-k) * factorial(k)    )  
  print(comb)

print('__________________________#_________________________') 
cont = 0
for i in elementos :
  for j in elementos :
    if i < j :
      print(i,j)
      cont += 1

print('Combinaciones sin repeticion: ', cont)

if n > k :
  comb = factorial(n) / (factorial(n-k) * factorial(k)    ) 
  print(comb)


print('__________________________#_________________________') 
def factorial(n):

  if n == 1:
    return n
  else:
    return n * factorial(n - 1)









# https://es.wikipedia.org/wiki/Coeficiente_binomial
# https://bvinsl.files.wordpress.com/2015/06/combinacion_permutacion2_1.pdf
