
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

int** ap2pp(int(*kazalec)[N], int iVrs, int cVrs) {
    int st = N * iVrs;
    int vrs = cVrs;
    int stol = st/cVrs + 1;
    
    int **new = (int**)malloc(vrs*sizeof(int*));

    for(int i = 0; i < vrs; i++){
        new[i] = (int*)malloc(stol*sizeof(int));
    }

    int oldJ = 0;
    int oldI = 0;
    int i, j;

    for( i = 0; i < vrs; i++){
        for( j = 0; j < stol-1; j++){
            new[i][j] = kazalec[oldI][oldJ];
            //printf("i=%d  j=%d  oj=%d  oi=%d  ka=%d\n",i,j,oldJ,oldI,kazalec[oldI][oldJ]);
            if(oldJ + 1 >= N){
                oldJ = 0;
                oldI++;
            }else{
                oldJ++;
            }
        }

        j++;
        new[i][j] = 0;
    }


    return new;
}

int (*pp2ap(int** kaz, int izV, int* ciljnoStVrstic))[N] {

    int st = 0;

    for(int i = 0; i < izV; i++){
        for(int j = 0; kaz[i][j] != 0; j++, st++){
            // printf("%d\n", kaz[i][j]);
        }
    }

    int vrs;

    if(st%N != 0){
        vrs = st/N + 1;
    } else {
        vrs = st/N;
    }

    int (*nov)[N] = malloc(vrs * sizeof(*nov));

    int oj = 0, oi = 0;

    *ciljnoStVrstic = vrs;

    for(int i = 0; i < vrs; i++){
        for(int j = 0; j < N; j++){

            if(oi < izV){
                nov[i][j] = kaz[oi][oj];
            } else {
                nov[i][j]= 0;
                continue;
            }

            if(kaz[oi][oj+1] == 0){
                oi++;
                oj = 0;
            } else {
                oj++;
            }
        }
    }

    return nov;
}

#ifndef test

int main() {
    // koda za ro"cno testiranje (po "zelji)
    return 0;
}

#endif


/*
int* TABELA[] = {
    (int[]) { 7,  0},
    (int[]) { 3, 12, 16,  1,  0},
    (int[]) { 2,  8, 11,  0},
    (int[]) { 5, 13,  9,  0},
    (int[]) {14,  4,  0},
    (int[]) {15,  6, 10,  0},
};

int main() {
    int izvornoStVrstic = sizeof(TABELA) / sizeof(TABELA[0]);
    int ciljnoStVrstic = 0;
    int(*rezultat)[N] = pp2ap(TABELA, izvornoStVrstic, &ciljnoStVrstic);

    for (int i = 0;  i < ciljnoStVrstic;  i++) {
        for (int j = 0;  j < N;  j++) {
            printf("%3d", rezultat[i][j]);
        }
        printf("\n");
    }
    free(rezultat);

    return 0;
}
*/
