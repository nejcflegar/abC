#include <stdio.h>

void printd(int, char[]);
 
int main(){
    char a[1000];


    printd(-34123,a);

    printf("%s\n",a);
    return 0;
}

void printd(int n, char str[]){
    static int index = 0;

    if(n < 0){
        str[index++] = '-';
        n = -n;
    }

    if(n/10){
        printd(n/10,str);
    }

    str[index++] = n%10 + '0';

}
