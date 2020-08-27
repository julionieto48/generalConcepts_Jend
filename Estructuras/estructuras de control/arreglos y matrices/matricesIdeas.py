
import pprint



# [[-1]*n]*m m columnas n filas

n = 3 ; m = n
print [[-1]*n]*m

w, h = 8, 5;
matrix = [[0 for x in range(w)] for y in range(h)]

print matrix
#_______________________________#__________________________

maatrix = [[0]*5 for i in range(5)]

print maatrix
#_______________________________#__________________________

matri = []
print matri.append([])
print matri.append([])
print matri[0].append(2) , matrix[1].append(3)
#_______________________________#__________________________


matrx = [[0 for i in range(5)] for j in range(5)]
print matrx
pprint.pprint(matrx)
#_______________________________#__________________________

rows = 3
cols = 2

matrix = []
for i in range(rows):
  row = []
  for j in range(cols):
    row.append(0)
  matrix.append(row)

print(matrix)
#_______________________________#    ejercicios con matrices_________________________





# ___________________________________________________________________________________________
# https://stackoverflow.com/questions/6667201/how-to-define-a-two-dimensional-array-in-python
#  https://stackoverflow.com/questions/18404077/concatenating-arrays-in-python-like-matlab-without-knowing-the-size-of-the-outpu