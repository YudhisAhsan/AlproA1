/* Nama File    		: JumPrimaProsedur.c */
/* Deskripsi    		: Menampilkan bilangan Prima yang dapat dibentuk dari bilangan integer N sembarang > 0 dan menampilkan hasil penjumlahan dari deret tersebut */
/* Pembuat      		: Muhammad Ahsan Yudhistira - 24060122130083 */
/* Tanggal Pembuatan	: 28 Maret 2023 */	

#include <stdio.h>
#include <stdlib.h>

void JumPrima(int N){

    /*Kamus Lokal*/
    int i, j, fakt, jum = 0;

    /*Algoritma*/
    if (N>0){
    for (i = 1; i <= N; i++){
        fakt = 0;
        for (j = 1; j <= i; j++){
            if (i%j==0){
            fakt++;
            }
        }
    if (fakt == 2){
        if (i == 2){
            printf("%d",i );
        }
        else {
            printf("+%d", i);
        }
        jum = jum + i;
        }
    }
    printf(" dengan Jumlahan Deret Bilangannya adalah Sn=%d", jum);
}
else {
    printf("Tidak ada bilangan prima, sehingga jumlah Sn=0");
}
}

int main(){

    /*Kamus*/
    int N;

    /*Algoritma*/
    printf("N : ");
    scanf("%d", &N);

    JumPrima(N);

    return 0;
}