# -*- coding: utf-8 -*-
"""Untitled4.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1rX5WyaiZPo9xyfij5AAQsMpGOyd1Lzmz
"""

denominacionMonedas = [1,2]
cambio = 4

def elChange(cambio, monedaActual):
  if cambio == 0 :
    return 1  # una combinacion
  elif cambio < 0:  
    return 0
  numeroCombinaciones = 0   #
 
  for i in denominacionMonedas :
    monedaActual = i
    numeroCombinaciones += elChange(cambio - i,monedaActual)   # iterar sobre las posibles denominaciones sbiendo que es valor a cambiar - denominacion
  
  
  return numeroCombinaciones



print(elChange(cambio,0))  # moneda actual aranca en posicion 0, se implementa el estado de moneda actual para hacer combinaciones no permutaciones