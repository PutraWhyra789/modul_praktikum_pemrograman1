i = 0
masukkan = input("")
a, b = masukkan.split(" ")
a = int(a)
while i < 50:
    i+=1
    if i % a == 0:
        print(b, end=" ")
    else:
        print(i, end=" ")