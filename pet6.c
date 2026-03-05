#include <stdio.h>

int main(){
    int curr = 0;
    while((curr = getchar()) != EOF){
        if(curr == '\t'){
            putchar('\\');
            putchar('t');
            continue;
        }
        if(curr == '\b'){
            putchar('\\');
            putchar('b');
            continue;
        }
        if(curr == '\\'){
            putchar('\\');
            putchar('\\');
            continue;
        }

        putchar(curr);
    }

    return 0;
}
