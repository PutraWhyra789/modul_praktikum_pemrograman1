#include <stdio.h> 
int main() {
    int a, b, i, j, hasilseluruh = 0;
    scanf("%d %d", &a, &b);
    for(i = 1; i <= a; i++) {
        int hasilbaris = 0;
        for(j = i; j >= 1; j--) {
            hasilbaris += j * b;
            printf("(%d*%d)", j, b);
            if(j > 1) {
                printf(" + ");
            } else {
                printf(" = %d", hasilbaris);
                break;
            }
        }
        hasilseluruh += hasilbaris;
        printf("\n");
    }
    printf("%d", hasilseluruh);
}