#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(b < a) {
        printf("%d %d", b, a);
    } else {
        printf("%d %d", a, b);
    }
}