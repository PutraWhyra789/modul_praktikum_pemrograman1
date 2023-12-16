import numpy as np
baris, kolom = map(int, input().split( ))
masukkan = list(map(int, input().split( )))
matriks = np.array(masukkan).reshape(baris, kolom)
for hasil in matriks:
    print(*hasil)