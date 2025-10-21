#include <stdio.h>

// Deklarasi enum untuk kelas tiket
enum KelasTiket {
    Economy = 1,
    Business,
    FirstClass
};

int main() {
    int choice;
    // Output awal
    printf("=== PEMESANAN TIKET PESAWAT ===\n");
    printf("Pilih Kelas Tiket:\n");
    printf("1. Economy (Kelas Ekonomi)\n");
    printf("2. Business (Kelas Bisnis)\n");
    printf("3. FirstClass (Kelas Utama)\n");
    printf("Masukkan pilihan 1 sampai 3: ");
    scanf("%d", &choice);
    
    // Mengakses enum menggunakan condition (switch case)
    switch(choice) {
        case Economy:
            printf("\nAnda memilih: Economy (Kelas Ekonomi)\n");
            printf("Harga tiket kelas Economy: $100  \n");
            printf("Fasilitas:\n");
            printf("- Bagasi 20kg\n");
            printf("- Makanan ringan\n");
            printf("- Kursi standar\n");
            break;
            
        case Business:
            printf("\nAnda memilih: Business (Kelas Bisnis)\n");
            printf("Harga tiket kelas Economy: $250  \n");
            printf("Fasilitas:\n");
            printf("- Bagasi 30kg\n");
            printf("- Makanan lengkap\n");
            printf("- Kursi lebih lega\n");
            printf("- Priority boarding\n");
            break;
            
        case FirstClass:
            printf("\nAnda memilih: FirstClass (Kelas Utama)\n");
            printf("Harga tiket kelas Economy: $500  \n");
            printf("Fasilitas:\n");
            printf("- Bagasi 40kg\n");
            printf("- Makanan premium\n");
            printf("- Kursi suite\n");
            printf("- Lounge access\n");
            printf("- Personal assistant\n");
            break;
            
        default:
            printf("\nPilihan tidak valid! Silakan pilih 1-3.\n");
            break;
    }
    
    return 0;
}