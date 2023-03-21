/* Nama File    		: JumBarKolMat.c */
/* Deskripsi    		: Menghitung dan menampilkan nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali */
/* Pembuat      		: Muhammad Ahsan Yudhistira - 24060122130083 */
/* Tanggal Pembuatan	: 20 Maret 2023 */		

#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Kamus */
    int B, K, i, j, JumBar, JumKol;
    int T[100][100];

/* Algoritma */
    printf("Ukuran Baris : ");
    scanf("%d", &B);
    printf("Ukuran Kolom : ");
    scanf("%d", &K);

    for (i = 0; i < B; i++) {
        for (j = 0; j < K; j++) {
         scanf("%d", &T[i][j]);
      }
   }
    for (i = 0; i < B; i++) {
        JumBar = 0;
        for (j = 0; j < K; j++) {
            JumBar += T[i][j];
        }
        printf("\nJumlah Baris ke %d adalah ", i);
        printf("%d", JumBar);
    }
   
    for (j = 0; j < K; j++) {
        JumKol = 0;
        for (i = 0; i < B; i++) {
            JumKol += T[i][j];
        }
        printf("\nJumlah Kolom ke %d adalah ", j);
        printf("%d", JumKol);
    }

   
    return 0;
}
