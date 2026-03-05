#include <stdio.h>

int main(){
    int count = 0;
    int curr = 0;

    while((curr = getchar()) != EOF){
        if(curr == ' '){
            if(count == 0){
                count++;
                putchar(curr);
            }
        }else{
            count = 0;
            putchar(curr);
        }
    }
}
