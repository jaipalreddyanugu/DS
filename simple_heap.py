
#Simple heap program to demonstrate heap functions
from heapq import heappush, heappop, heapify

class Minheap:
    def __init__(self):
        self.heap = []

    def parent(self, i):
        return (i-1)//2

    def insert(self, k):
        heappush(self.heap, k)

    def decreaseKey(self, i, tovalue):
        self.heap[i] = tovalue

        while(i!=0 and self.heap[self.parent(i)] > self.heap[i]):
            self.heap[i], self.heap[self.parent(i)] = self.heap[self.parent(i)], self.heap[i]

    def extractMin(self):
        return heappop(self.heap)

    def deleteKey(self, k):
        self.decreaseKey(k, float("-intf"))
        self.extractMin()

    def getMin(self):
        return self.heap[0]
    
heapObj = Minheap()
heapObj.insert(23)
heapObj.insert(4)
heapObj.insert(45)
heapObj.insert(34)

print(heapObj.getMin())
print(heapObj.extractMin())
heapObj.decreaseKey(2,1)
print(heapObj.getMin())



