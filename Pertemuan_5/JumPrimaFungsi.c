/* Nama File    		: JumPrimaFungsi.c */
/* Deskripsi    		: Menampilkan bilangan Prima yang dapat dibentuk dari bilangan integer N sembarang > 0 dan menampilkan hasil penjumlahan dari deret tersebut */
/* Pembuat      		: Muhammad Ahsan Yudhistira - 24060122130083 */
/* Tanggal Pembuatan	: 28 Maret 2023 */	

#include <stdio.h>
#include <stdlib.h>


int IsPrime(int N){

    /*Kamus Lokal*/
    int i;

    /*Algoritma*/
    if (N < 2){
        return 0;
    }
    for (i=2; i<N; i++){
        if (N%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    /*Kamus*/
    int N, i, JumPrima;

    /*Algoritma*/
    printf("N : ");
    scanf("%d", &N);

    JumPrima = 0;
    if (N>1){
        for(i=1; i<=N; i++){
            if(IsPrime(i)){
                if (i==2){
                    printf("%d", i);
                }
                else{
                    printf("+%d", i);
                }
                JumPrima = JumPrima + i;
            }
        }
        printf(" dengan Jumlah Deret Bilangannya adalah Sn=%d", JumPrima);
    }
    else{
        printf("Tidak ada bilangan prima, sehingga jumlah Sn=0");
    }
    return 0;
}