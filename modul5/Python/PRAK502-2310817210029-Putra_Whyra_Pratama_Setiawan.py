import math

def mutlak(angka):
    if angka < 0:
        angka = angka * -1
    return angka

def hitung(nilai1, nilai2):
    hitung = nilai1 - nilai2
    if hitung < 0:
        hitung = hitung * -1
    return hitung

a, c, b, d = map(int, input().split())
Hasil = hitung(a, b) + hitung(c, d)
print(mutlak(Hasil))