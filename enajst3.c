#include <stdio.h>

#define MAXLINE 1000

int readLine(char[]);
void reverse(char[],int);
void output(char[],int);


int main(){
    
    int length;
    char array[MAXLINE];

    length = -1;
    while(length != 0){
        length = readLine(array);
        reverse(array,length);
        output(array, length);
    }
}

int readLine(char t[]){
    int curr,length;
    length = 0;
    while((curr = getchar()) != '\n' && curr != EOF){
        t[length] = curr;
        length++;
    }
    return length;
}

void reverse(char t[], int l){
    char g[l];
    for(int i = 0; i < l; i++){
        g[i] = t[i];
    }

    for(int i = l -1; i >= 0; i--){
        t[i] = g[l - i - 1];
    }
}

void output(char t[], int l){
    for(int i = 0; i < l; i++){
        printf("%c",t[i]);
    }
    printf("\n");
}
