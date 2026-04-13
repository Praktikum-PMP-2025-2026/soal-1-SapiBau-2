/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 1 – Overview of C and Pointer
 *   Hari dan Tanggal    : Senin, 13 April 2026
 *   Nama (NIM)          : Muhammad Aqeel Ghani (13224071)
 *   Nama File           : soal1.c
 *   Deskripsi           : Program yang menyimulasikan gerbang keamanan yang memproses data satu peneliti. Program yang menentukan status akhir peneliti berdasarkan level izin, suhu tubu, kadar radiasi, dan jam kedatangan.     
 * 
 */


 #include <stdio.h>
  
 int main() {
    int izin, suhu, jam;
    unsigned int radiasi;

    // Input Parameter Peneliti
    scanf("%d %d %d %d", &izin, &suhu, &radiasi, &jam);

   //  Conditional (Sesuai Modul)
   if(radiasi >= 6) printf("TOLAK\n");
   else if (suhu >= 390) printf("KARANTINA\n");
   else if (izin == 1 && jam < 6 || jam > 20) printf("TOLAK\n");
   else if (izin == 1) printf("MASUK\n");
   else if (izin == 2 && radiasi <= 2 && (jam >= 8 && jam <= 18)) printf("MASUK\n");
   else if (izin == 2) printf("PEMERIKSAAN\n");
   else if (izin == 3 && radiasi == 0 && suhu < 380) printf("MASUK\n");
   else printf("TOLAK\n");

   return 0;
 }
 