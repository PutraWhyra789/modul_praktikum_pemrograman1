#include <stdio.h>
#include <string.h>
int main() {
    char pesan1[100], pesan2[100], hasil[100];
    int a = 0, b = 0;
    fgets(pesan1, 100, stdin);
    fgets(pesan2, 100, stdin);
    if(strlen(pesan1) != strlen(pesan2)) {
        printf("Panjang kalimat berbeda, pesan palsu");
    } else {
        for(int i = 0;i < strlen(pesan1)-1;i++) {
            if(pesan1[i] == ' ' && pesan2[i] == ' ') {
                continue;
            }
            if(pesan1[i] == pesan2[i]) {
                printf("*");
                a += 1;
            } else {
                printf("#");
                b += 1;
            }
        }
        printf("\n* = %d", a);
        printf("\n# = %d\n", b);
        if(a >= b) {
            printf("Pesan Asli");
        } else {
            printf("Pesan Palsu");
        }
    }
}