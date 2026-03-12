#include <stdio.h>
 
void printd(int);

int main(){

    printd(-312);

    return 0;
}

void printd(int n){
    if(n < 0){
        putchar('-');
        n = n * -1;
    }
    if(n/10 != 0){
        printd(n/10);
    }
    putchar(n%10 + '0');
}
