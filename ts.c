#include <stdio.h>

void escape(int);

int main(){
    int curr;

    while((curr = getchar()) != EOF){
        if(curr == '\n' || curr == '\t' || curr == '\\'){
            escape(curr);
        }else{
            putchar(curr);
        }
    }
}

void escape(int curr){
    switch(curr){
        case '\n': putchar('\\'); putchar('n'); break;
        case '\\': putchar('\\'); putchar('\\'); break;
        case '\t': putchar('\\'); putchar('t'); break;
    }
}
