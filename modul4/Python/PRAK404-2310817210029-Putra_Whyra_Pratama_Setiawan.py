while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    N = int(input("Masukkan pilihan : "))
    if 1 <= N <= 4:
        a = float(input("Masukkan nilai pertama :"))
        b = float(input("Masukkan nilai kedua :"))
        if N == 1:
            print(f"Hasil penjumlahan antara {a:.2f} dengan {b:.2f} adalah {a + b:.2f}")
        elif N == 2:
            print(f"Hasil pengurangan antara {a:.2f} dengan {b:.2f} adalah {a - b:.2f}")
        elif N == 3:
            print(f"Hasil perkalian antara {a:.2f} dengan {b:.2f} adalah {a * b:.2f}")
        else:
            if b != 0:
                print(f"Hasil pembagian antara {a:.2f} dengan {b:.2f} adalah {a / b:.2f}")
            else:
                print(f"Hasil pembagian antara {a:.2f} dengan {b:.2f} adalah tidak terdefinisi")
    elif N == 5:
        print("Terimakasih, telah menggunakan kalkulator Putra Whyra Pratama S.")
        break
    else:
        print("Input anda salah, silahkan coba lagi")