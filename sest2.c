#include <stdio.h>


int main(){
    int curr = 0;

    while((curr = getchar()) != EOF){
        if(curr == '\n' || curr == ' ' || curr == '\t'){
            printf("\n");
            continue;
        }

        putchar(curr);
    }

    return 0;
}
