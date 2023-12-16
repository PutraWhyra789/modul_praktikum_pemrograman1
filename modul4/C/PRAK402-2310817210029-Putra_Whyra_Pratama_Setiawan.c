#include <stdio.h>
int main() {
    int batas, i, j;
    scanf("%d", &batas);
    for(i = 1; i <= batas; i++) {
        if(i % 2 == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    for(j = batas; j >= 2; j--) {
        if(j % 2 == 0) {
            printf("%d ", j);
        }
    }                    
}