import numpy as np
a, b = map(int, input().split( ))
baris1 = []
baris2 = []
hasil = []
if(a == b):
    baris1 = np.array(list(map(int, input().split( ))))
    baris2 = np.array(list(map(int, input().split( ))))
    hasil = np.multiply(baris1, baris2)
    print(*hasil)
else:
    print("Jumlah tidak sama")