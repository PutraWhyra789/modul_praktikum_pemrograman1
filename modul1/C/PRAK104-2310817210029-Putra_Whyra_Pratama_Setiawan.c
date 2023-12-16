#include <stdio.h>
void main() {
    int sepatuA = 400000;
    int sepatuB = 350000;
    int diskonA = sepatuA*87/100;
    int diskonB = sepatuB*79/100;
    printf("Harga sepatu A adalah %d \n", sepatuA);
    printf("Harga sepatu B adalah %d \n", sepatuB);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d \n", diskonA);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d ", diskonB);
}