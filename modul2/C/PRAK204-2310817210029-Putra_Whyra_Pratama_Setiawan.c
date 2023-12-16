#include <stdio.h>
#include <math.h>
void main() {
    float jarijari, tinggi, pi=3.142857;
    scanf("%f %f", &jarijari, &tinggi);
    printf("Volume=%.2f\n", (pi*jarijari*jarijari*tinggi));
    printf("Luas=%.2f\n", (2*pi*(jarijari*jarijari)+2*pi*jarijari*tinggi));
    printf("Keliling=%.2f\n", (pi*2*jarijari));
}