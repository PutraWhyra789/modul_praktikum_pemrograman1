#include <stdio.h>
int main() {
    int N, i = 0;
    float a, b;
    while(i == 0) {
        printf("\n");
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan pilihan : ");
        scanf("%d", &N);
        if(N < 5 && N > 0) {
            printf("Masukkan nilai pertama :");
            scanf("%f", &a);
            printf("Masukkan nilai kedua :");
            scanf("%f", &b);
            if(N == 1) {
                printf("Hasil pertambahan antara %.2f dengan %.2f adalah %.2f", a, b, a+b);
            } else if(N == 2) {
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f", a, b, a-b);
            } else if(N == 3) {
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f", a, b, a*b);
            } else {
                if(b != 0) {
                    printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f", a, b, a/b);
                } else {
                    printf("Hasil pembagian antara %.2f dengan %.2f adalah tidak terdefinisi", a, b);
                }
            }
        } else if(N == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Putra Whyra Pratama S.");
            break;
        } else {
            printf("Input anda salah, silahkan coba lagi");
        }
    }
}