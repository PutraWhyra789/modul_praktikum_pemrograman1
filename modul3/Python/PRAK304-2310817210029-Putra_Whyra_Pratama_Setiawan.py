a = int(input(""))
if a == 0:
    print("Nol")
elif a > 0 and a < 10:
    print("Satuan")
elif a == 10:
    print("Puluhan")
elif a > 10 and a < 20:
    print("Belasan")
elif a > 19 and a < 100:
    print("Puluhan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")