def reverse(nilai):
    nilaireverse = 0
    sisa = 0
    while nilai != 0:
        sisa = nilai % 10
        nilaireverse = nilaireverse * 10
        nilaireverse = nilaireverse + sisa
        nilai = nilai // 10
    return nilaireverse

A, B = map(int, input().split())
A = reverse(A)
B = reverse(B)
C = A + B
print(reverse(C))