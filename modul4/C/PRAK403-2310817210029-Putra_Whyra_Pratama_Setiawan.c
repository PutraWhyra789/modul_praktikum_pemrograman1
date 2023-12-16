#include <stdio.h>
int main() {
    int a, b, i, j;
    scanf("%d %d", &a, &b);
    j = b;
    if(a > b) {
        for(i = a; i >= b; i--) {
            printf("%d ", i);
            printf("%d ", j);
            if(j == a) {
                break;
            }
            printf("- ");
            j++;
        }
    } else {
        for(i = a; i <= b; i++) {
            printf("%d ", i);
            printf("%d ", j);
            if(j == a) {
                break;
            }
            printf("- ");
            j--;
        }
    }
}