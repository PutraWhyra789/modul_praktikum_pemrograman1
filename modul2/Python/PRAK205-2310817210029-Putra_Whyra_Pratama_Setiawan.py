import math
tinggi, sisimiring = input("").split(" ")
alas = round(math.sqrt(pow(int(sisimiring), 2)-pow(int(tinggi), 2)))
keliling = round(int(tinggi)+int(sisimiring)+int(alas))
luas = round((int(tinggi)*int(alas))/2)
print(f"Alas = {alas} cm") 
print(f"Keliling = {keliling} cm") 
print(f"Luas = {luas} cm^2") 