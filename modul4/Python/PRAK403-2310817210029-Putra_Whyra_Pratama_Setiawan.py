a, b = map(int, input("").split(" "))
j = b
if a > b:
    for i in range(a, b - 1, -1):
        print(i, j, end=" ")
        if j == a:
            break
        print("- ", end="")
        j += 1
else:
    for i in range(a, b + 1):
        print(i, j, end=" ")
        if j == a:
            break
        print("- ", end="")
        j -= 1