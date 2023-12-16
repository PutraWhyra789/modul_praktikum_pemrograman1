import math
alas = 5
tinggi = 12
miring = int (math.sqrt(pow(alas, 2)+pow(tinggi, 2)))
keliling = int (alas+tinggi+miring)
luas = int (alas*tinggi/2)
print("Diketahui :")
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm")
print("")
print("Jawab :")
print(f"Sisi A = {tinggi} cm")
print(f"Sisi B = {miring} cm")
print(f"Sisi C = {alas} cm")
print(f"Keliling = {keliling} cm")
print(f"Luas = {luas} cm")