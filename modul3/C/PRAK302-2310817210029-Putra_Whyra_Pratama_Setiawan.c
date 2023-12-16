#include <stdio.h>
int main() {
    int bil;
    printf("Masukkan nilai anda: ");
    scanf("%d", &bil);
    switch(bil) {
        case 80 ... 100:
        printf("Nilai anda adalah A");
        break;
        case 70 ... 79:
        printf("Nilai anda dalah B");
        break;
        case 60 ... 69:
        printf("Nilai anda adalah C");
        break;
        case 50 ... 59:
        printf("Nilai anda adalah D");
        break;
        case 0 ... 49:
        printf("Nilai anda adalah E");
        break;
        default:
        printf("Nilai Tidak Valid");
    }
}