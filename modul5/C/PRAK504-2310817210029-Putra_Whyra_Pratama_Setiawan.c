#include <stdio.h>

int reverse(int nilai){
    int nilaireverse = 0;
    int sisa = 0;
    while(nilai != 0){
        sisa = nilai % 10;
        nilaireverse = nilaireverse * 10;
        nilaireverse = nilaireverse + sisa;
        nilai = nilai / 10;
    }
    return nilaireverse;
}
int main(){
    int A, B;
    scanf("%d %d",&A,&B);
    A=reverse(A);
    B=reverse(B);
    int C=A+B;
    printf("%d",reverse(C));
}