a = int(input())
masukkan = list(map(int, input().split( )))
for i in range(1, a+1):
    masukkan[i-1] *= i
for i in range(a):
    print(masukkan[i], end=" ")