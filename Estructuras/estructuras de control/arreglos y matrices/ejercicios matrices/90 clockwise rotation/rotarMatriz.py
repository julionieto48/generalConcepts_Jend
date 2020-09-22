
def rotarClockWise(mtrx):
    # trasnponer
    for i in range(len(mtrx)):
        for j in range(i,len(mtrx)):
            mtrx[i][j],mtrx[j][i] =mtrx[j][i],mtrx[i][j]
    print 'transpuesta:', mtrx

    # reversar
    N = len(mtrx)
    for i in range(N/2):
        for j in range(N):
            mtrx[j][i],mtrx[j][N-1-i] = mtrx[j][N-1-i],mtrx[j][i]
    return  mtrx






A = [[1,2,3],[4,5,6],[7,8,9]]

a = rotarClockWise(A)
print a

