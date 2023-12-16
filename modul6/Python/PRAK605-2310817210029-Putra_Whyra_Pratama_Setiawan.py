import numpy as np
n = int(input())
matriksA = [[0]*n]*n
matriksB = [[0]*n]*n
print("Matriks A")
for i in range(0, n):
    matriksA[i] += np.array(list(map(int, input().split( ))))
print("Matriks B")
for i in range(0, n):
    matriksB[i] += np.array(list(map(int, input().split( ))))
print("Matriks AXB")
matriksC = np.dot(matriksA, matriksB)
for hasil in matriksC:
    print(*hasil)