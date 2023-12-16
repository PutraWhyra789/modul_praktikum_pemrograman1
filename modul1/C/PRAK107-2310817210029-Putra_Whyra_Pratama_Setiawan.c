#include <stdio.h>
void main() {
    int a = 4;
    int b = 5;
    int c = 7;
    int keliling = a+b+c;
    int harga = 85000;
    int biaya = keliling*harga;
    printf("Diketahui : \n");
    printf("Panjang sisi segitiga berturut-turut adalah 4, 5, dan 7 \n");
    printf("Keliling Tanah Pak Dengklek adalah %d \n", keliling);
    printf("Harga tanah Per Meter adalah %d \n", harga);
    printf("Jawaban : \n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", harga);
}