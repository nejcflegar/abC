#include <stdio.h>

#define MAXLINE 1000

int newLine(char[]);

int main(){
    char array[MAXLINE];
    int l = - 1;

    while(l != 0){
        l = newLine(array);
        if(l >= 80){
            printf("%s\n",array);
        }
    }
}


int newLine(char c[]){
    int l,curr;
    l = 0;

    while((curr = getchar()) != '\n' && curr != EOF){
        c[l] = curr;
        l++;
    }
    return l;
}
