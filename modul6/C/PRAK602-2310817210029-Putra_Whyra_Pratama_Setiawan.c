#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int masukkan[a];
    for(int i = 1;i <= a;i++) {
        scanf("%d", &masukkan[i]);
        masukkan[i] *= i;
    }
    for(int i = 1;i <= a;i++) {
        printf("%d ", masukkan[i]);
    }
}