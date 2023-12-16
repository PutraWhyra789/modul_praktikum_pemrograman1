pi = 3.142857
jarijari, tinggi = input("").split(" ")
volume = float(round(pi*int(jarijari)*int(jarijari)*int(tinggi), 2))
luas = float(round(2*pi*int(jarijari)*int(jarijari)+2*pi*int(jarijari)*int(tinggi), 2))
keliling = float(round(pi*2*int(jarijari), 2))
print("Volume = %.2f"% (volume))
print("Luas = %.2f"% (luas))
print("Keliling = %.2f"% (keliling))