#include <stdio.h>
#include <string.h>

enum StatusMahasiswa {
    CUTI = 1,
    AKTIF, 
    LULUS
};

int main() {
    int stat;
    char nama[50];
    int nim;
    float ipk;
    
    printf("--- Pilih Status Mahasiswa ---\n");
    printf("1. Cuti\n");
    printf("2. Aktif\n");
    printf("3. Lulus\n");
    printf("Masukkan pilihan status : ");
    scanf("%d", &stat);
    
    while(getchar() != '\n');  // Clear buffer
    
    printf("Masukkan nama Anda: ");
    fgets(nama, sizeof(nama), stdin);
    nama[strcspn(nama, "\n")] = 0;
    
    printf("Masukkan NIM Anda: ");
    scanf("%d", &nim);
    
    printf("Masukkan IPK Anda: ");
    scanf("%f", &ipk);
    
    printf("\n");
    
    // Switch case untuk menampilkan data
    switch(stat) {
        case CUTI:
            printf("Data Mahasiswa CUTI:\n");
            break;
        case AKTIF:
            printf("Data Mahasiswa AKTIF:\n");
            break;
        case LULUS:
            printf("Data Mahasiswa LULUS:\n");
            break;
        default:
            printf("Data Mahasiswa (Status Tidak Valid):\n");
            break;
    }
    
    printf("Nama: %s\n", nama);
    printf("NIM: %d\n", nim);
    printf("IPK: %.2f\n", ipk);
    
    // LOGIC IPK BERDASARKAN STATUS
    printf("\n");
    switch(stat) {
        case CUTI:
            if(ipk < 2.0) {
                printf("Perhatian %s! IPK Anda rendah, manfaatkan masa cuti untuk memperbaiki.\n", nama);
            } else {
                printf("Semoga %s bisa kembali dengan semangat yang fresh!\n", nama);
            }
            break;
            
        case AKTIF:
            if(ipk >= 3.5) {
                printf("Selamat %s!!, IPK Anda termasuk TERBAIK! Pertahankan!\n", nama);
            } else if(ipk >= 3.0) {
                printf("Bagus %s! IPK Anda BAIK, tetap semangat!\n", nama);
            } else if(ipk >= 2.0) {
                printf("Semangat %s! Anda bisa tingkatkan IPK lagi!\n", nama);
            } else {
                printf("%s!, perlu perhatian khusus untuk meningkatkan IPK.\n", nama);
            }
            break;
            
        case LULUS:
            if(ipk >= 3.5) {
                printf("SELAMAT %s! Lulus dengan PREDIKAT CUMLAUDE!\n", nama);
            } else if(ipk >= 3.0) {
                printf("Selamat %s! Lulus dengan PREDIKAT SANGAT MEMUASKAN!\n", nama);
            } else {
                printf(" Selamat %s! Anda telah menyelesaikan studi!\n", nama);
            }
            break;
            
        default:
            printf("Status tidak valid.\n");
            break;
    }
    
    return 0;
}