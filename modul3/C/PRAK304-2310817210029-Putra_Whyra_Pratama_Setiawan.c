#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if(a == 0) {
        printf("Nol");
    } else if(a > 0 && a < 10) {
        printf("Satuan");
    } else if(a == 10) {
        printf("Puluhan");
    } else if(a > 10 && a < 20) {
        printf("Belasan");
    } else if(a > 19 && a < 100) {
        printf("Puluhan");
    } else {
        printf("Anda Menginput Melebihi Limit Bilangan");
    }
}