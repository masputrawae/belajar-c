#include <stdio.h>

int main(){
    int umur;
    float tinggi;
    char huruf;

    printf("Masukkan Umur: ");
    scanf("%d", &umur);

    printf("Masukkan tinggi (cm): ");
    scanf("%f", &tinggi);

    printf("Masukkan huruf favorit: ");
    scanf(" %c", &huruf);

    printf("\n=== Data Anda ===\n");
    printf("Umur: %d tahun\n", umur);
    printf("Tinggi: %.2f cm\n", tinggi);
    printf("Huruf: %c\n", huruf);

    return 0;
}

