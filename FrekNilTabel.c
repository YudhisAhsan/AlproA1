/* Nama File    		: FrekNilTabel.c */
/* Deskripsi    		: Menampilkan nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali */
/* Pembuat      		: Muhammad Ahsan Yudhistira - 24060122130083 */
/* Tanggal Pembuatan	: 20 Maret 2023 */		

#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Kamus */
    int N, i, j, count;
    int T[100];

/* Algoritma */
    printf("N = ");
    scanf("%d", &N);

    for (i = 0; i < N; i++){
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }

    for (i = 0; i < N; i++){
        count = 1;
        for (j = i+1; j < N; j++){
            if (T[i]==T[j] && T[i] != 0){
                count = count + 1;
                T[j] = 0;
            }
        }
        if (count > 1){
            printf("%d ", T[i]);
        }
    }
    return 0;
}
