#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int masukkan[2][a], hasil[a];
    if(a == b) {
        for(int i = 0;i < 2;i++) {
            for(int j = 0;j < a;j++) {
                scanf("%d", &masukkan[i][j]);
            }
        }
        for(int i = 0;i < a;i++) {
        hasil[i] = masukkan[0][i] * masukkan[1][i];
        printf("%d ", hasil[i]);
        }
    } else {
        printf("Jumlah tidak sama");
    }
    
}