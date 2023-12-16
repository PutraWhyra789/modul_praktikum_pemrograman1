#include <stdio.h>
void main() {
    char nama[30], nim[30], paralel[5], ttl[30], alamat[30], hobby[30], hp[30];
    printf("Masukkan Nama:");
    fgets(nama, 30, stdin);
    printf("\nMasukkan NIM:");
    fgets(nim, 30, stdin);
    printf("\nMasukkan Kelas Paralel:");
    fgets(paralel, 5, stdin);
    printf("\nMasukkan Tempat/Tanggal Lahir (dipisah dengan koma):");
    fgets(ttl, 30, stdin);
    printf("\nMasukkan Alamat:");
    fgets(alamat, 30, stdin);
    printf("\nMasukkan Hobby:");
    fgets(hobby, 30, stdin);
    printf("\nMasukkan No.HP:");
    fgets(hp, 30, stdin);
    printf("\nNama                 :%s", nama);
    printf("\nNIM                  :%s", nim);
    printf("\nKelas Paralel        :%s", paralel);
    printf("\nTempata/Tanggal Lahir:%s", ttl);
    printf("\nAlamat               :%s", alamat);
    printf("\nHobby                :%s", hobby);
    printf("\nNo.HP                :%s", hp);
}