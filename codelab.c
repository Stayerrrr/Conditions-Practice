#include <stdio.h> 

int main () {
    int umur;

    printf("Masukkan umur Penumpang: ");
    scanf("%d", &umur);

    if (umur >= 0 && umur<= 120){
        if(umur <= 2) {
            printf(" Penumpang mendapatkan tiket gratis! \n");
            
        } else if (umur <= 12) {
            printf("Harga tiket untuk penumpang anak-anak adalah 50%% dari harga normal \n");
        }
        else if (umur <= 17) {
            printf("Harga tiket untuk penumpang remaja adalah 25%% dari harga normal \n");

        } else if (umur <= 60) {
            printf("Harga tiket untuk penumpang dewasa adalah harga normal \n");

        }else {
            printf("Harga tiket untuk penumpang lanjut usia adalah 75%% dari harga normal \n");
        }
        } else {
            printf("Tolong masukkan umur dalam rentang 0 sampai 120 \n");
    }

    return 0;

}