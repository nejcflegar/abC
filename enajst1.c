#include <stdio.h>

int main(){
    int curr, length;
    length = 0;

    while((curr = getchar()) != EOF){
        if(curr == '\t' || curr == ' '){
            continue;
        }

        if(curr == '\n' && length != 0){
            length = 0;
            putchar(curr);
            continue;
        }

        if(curr == '\n' && length == 0){
            continue;
        }


        length++;
        putchar(curr);

    }
    

    return 0;

}
