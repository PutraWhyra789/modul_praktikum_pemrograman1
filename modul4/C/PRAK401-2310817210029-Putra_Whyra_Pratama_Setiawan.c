#include <stdio.h>
int main() {
    int a, i = 0;
    char b;
    scanf("%d %c", &a, &b);
    while(i < 50) {
        i++;
        if(i % a == 0) {
            printf("%c ", b);
        } else {
            printf("%d ", i);
        }
    }
}