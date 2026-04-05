
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

char* zdruzi(char** nizi, char* locilo) {
    int i = 0;
    int size = 0;

    while(nizi[i] != NULL){
        size += strlen(nizi[i]);
        size += strlen(locilo);
        i++;
    }

    i = 0;
    char *nov = (char*)malloc(size*sizeof(char));

    while(nizi[i] != NULL ){
        if(i != 0){
            strncat(nov,locilo,strlen(locilo));
        }
        strncat(nov,nizi[i],strlen(nizi[i]));
        i++;
    }
    return nov;
}

#ifndef test

int main() {
    // koda za ro"cno testiranje
    return 0;
}

#endif
