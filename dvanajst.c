#include <stdio.h>

#define TABSTOP 7

int readBlank();
void convert(int);
int nePoz = -1;

int main(){
    int curr;

    while((curr = getchar()) != EOF){
        if(curr == ' '){
            convert(readBlank());
            putchar(nePoz);
        }else{
            putchar(curr);
        }
    }
    return 0;
}

int readBlank(){
    int len = 1;
    int curr;
    extern int nePoz;

    while((curr = getchar()) != EOF && curr == ' '){
        len++;
    }
    nePoz = curr;
    return len;
}

void convert(int len){
    for(int i = 0; i < len/TABSTOP; i++){
        putchar('\t');
    }

    for(int i = 0; i < len%TABSTOP; i++){
        putchar(' ');
    }
}
