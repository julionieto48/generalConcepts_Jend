
class CircularQueue:

    def __init__(self,head, tail, full,empty, circularBuffer , sample):
        self.head = int(head); self.tail = int(tail);
        self.full = full ; #full == False
        self.full = empty; #empty == False

        self.circularBuffer = circularBuffer;

        self.sample = sample
        #tamano = len(circularBuffer)
        #return tamano



    #def setSize(self):
     #   len(self.circularBuffer) =  tamano
     #   size = tamano
     #   return size

    def setArray(self, array):
        self.circularBuffer = array
        return array

    def fullArray(self, size):
        if( self.head == (self.tail + 1 ) % size):
            full = True
        else:
            full = False

        return full

    def emptyArray(self):
        if (self.head == self.tail):
            empty = True
        else:
            empty = False

        return empty

    def addSample(self, n):
        self.sample = n

        if(self.full == True):
            print(" El buffer esta lleno")
        else:
            self.circularBuffer[self.tail] = self.sample

    def deleteSample(self):
        self.sample = 0
        if(self.empty == True):
            print(" El buffer esta vacio")
        else:
            self.circularBuffer[self.head] = self.sample
            self.head = (self.head + 1) % self.size
            self.sample = self.circularBuffer[self.head]
    def ShowArray(self):
        print(self.circularBuffer)









head = 0 ; tail = 0; full = False; empty = False

prueba = [8,4,5,6,2] ; tamano = len(prueba)

corredor =  CircularQueue(head,tail ,full,empty, prueba,3 )
arreglo = corredor.setArray(prueba) # como que sobra

corredor.addSample(2)
corredor.addSample(3)
corredor.ShowArray()

