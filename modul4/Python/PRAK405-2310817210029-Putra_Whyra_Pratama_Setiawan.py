hasilseluruh = 0
a, b = map(int, input("").split(" "))
for i in range(1, a + 1, +1):
    hasilbaris = 0
    for j in range(i, 0, -1):
        hasilbaris += j * b
        print(f"({j}*{b})", end="")
        if j > 1:
            print(" + ", end="")
        else:
            print(f" = {hasilbaris}")
            break
    hasilseluruh += hasilbaris
print(f"{hasilseluruh}")