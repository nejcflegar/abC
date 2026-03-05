#include <stdio.h>

int power(int,int);


int main(){
    int i;
    i = power(2,8);

    printf("%d\n",i);

    return 0;
}

int power(int st, int na){
    int i;
    int base = st;
    for(i = 1; i < na; i++){
        base = base*st;
    }

    return base;
}
