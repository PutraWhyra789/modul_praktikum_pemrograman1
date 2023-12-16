#include <stdio.h>
#include <math.h>

int mutlak(int angka){
    if(angka < 0) {
        angka = angka*-1;
    }
    return angka;
}

int hitung(int nilai1, int nilai2){
    int hitung;
    hitung = nilai1 - nilai2;
    if(hitung < 0){
        hitung = hitung*-1;
    }
    return hitung;
}

int main(){
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &c, &b, &d);

    int Hasil = hitung(a, b) + hitung(c, d);
    printf("%d",mutlak(Hasil));

    return 0;
}