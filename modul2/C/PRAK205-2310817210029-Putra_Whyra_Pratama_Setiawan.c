#include <stdio.h>
#include <math.h>
void main() {
    int a, b, c, luas, keliling;
    scanf("%d %d", &a, &b);
    c = sqrt(pow(b, 2)-pow(a, 2));
    keliling = a+b+c;
    luas = (a*c)/2;
    printf("Alas: %d cm\n", c);
    printf("Tinggi: %d cm\n", a);
    printf("Keliling: %d cm\n", keliling);
    printf("Luas: %d cm^2\n", luas);
}