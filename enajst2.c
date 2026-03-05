#include <stdio.h>

#define MAXLINE 1000

void reverse(char[], int);

int main(){
    int curr, length;
    char c[MAXLINE];

    length = 0;
    while((curr = getchar()) != EOF){
        if(curr == '\n'){
            reverse(c, length);
        }
    }


}

void reverse(char c[], int length){
}
