batas = int(input(""))
for i in range(1, batas + 1):
    if i % 2 == 1:
        print(i, end=" ")
print("")
for j in range(batas, 1, -1):
    if j % 2 == 0:
        print(j, end=" ")