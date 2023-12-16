#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int matriksA[n][n], matriksB[n][n], matriksC[n][n];
    printf("Matriks A\n");
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < n;j++) {
            scanf("%d", &matriksA[i][j]);
        }
    }
    printf("Matriks B\n");
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < n;j++) {
            scanf("%d", &matriksB[i][j]);
        }
    }
    printf("Matriks AXB\n");
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < n;j++) {
            matriksC[i][j] = 0;
            for(int k = 0;k < n;k++) {
                matriksC[i][j] += matriksA[i][k] * matriksB[k][j];
            }
            printf("%d ", matriksC[i][j]);
        }
        printf("\n");
    }
}