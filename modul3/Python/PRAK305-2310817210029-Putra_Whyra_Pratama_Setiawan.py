d = int(input(""))
h = d/86400
d %= 86400
j = d/3600
d %= 3600
m = d/60
d %= 60
if h >= 1:
    print("%d hari %.2d:%.2d:%.2d"% ( h, j, m, d))
else:
    print("%.2d:%.2d:%.2d"% ( j, m, d))