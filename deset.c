#include <stdio.h>

#define MAXLINE 1000

void copy(char[],char[],int);
int getLength(char[]);


int main(){
    int length = -1;
    int max = -1; 

    char line[MAXLINE];
    char maxLine[MAXLINE];

    while(length != 0){
        length = getLength(line);
        if(length >= max){
            copy(line,maxLine,length);
            max = length;
        }
    }

    int i;
    for(i = 0; i < max; i++){
        putchar(maxLine[i]);
    }
    printf("\n");
}

void copy(char t[],char copy[], int l){
    int i;
    for(i = 0; i < l; i++){
        copy[i] = t[i];
    }
}

int getLength(char line[]){
    int c, l;
    l = 0;
    while((c = getchar()) != '\n' && c != EOF){
        line[l] = c;
        l++;
    }

    return l;
}
