#include <stdio.h>
void main() {
    float a, b;
    printf("Masukkan Nilai Pertama:");
    scanf("%f", &a);
    printf("\nMasukkan Nilai Kedua:");
    scanf("%f", &b);
    printf("\nHasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"", a, b, a+b);
}