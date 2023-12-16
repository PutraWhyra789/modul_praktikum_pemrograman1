pesan1 = input()
pesan2 = input()
a = 0
b = 0
if len(pesan1) != len(pesan2):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    for i in range(len(pesan1)):
        if pesan1[i] == ' ' and pesan2[i] == ' ':
            continue
        if pesan1[i] == pesan2[i]:
            print("*", end="")
            a += 1
        else:
            print("#", end="")
            b += 1
    print()
    print("* =", a)
    print("# =", b)
    if a >= b:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")