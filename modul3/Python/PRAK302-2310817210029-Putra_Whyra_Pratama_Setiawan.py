bil =  int(input("Masukkan nilai anda: "))
if bil >= 80 and bil <=100:
    print("Nilai anda adalah: A")
elif bil >= 70 and bil <= 80:
    print("Nilai anda adalah: B")
elif bil >= 60 and bil <= 70:
    print("Nilai anda adalah: C")
elif bil >= 50 and bil <= 60:
    print("Nilai anda adalah: D")
elif bil >= 0 and bil <= 49:
    print("Nilai anda adalah: E")
else:
    print("Nilai anda tidak valid")