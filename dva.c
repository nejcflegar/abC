#include <stdio.h>


int main(){    //   C = (5/9)(F -32)
    int base = 1;
    int step = 20;
    int up = 300;
    int cel;

    while(base <= up){
        cel = 5 * (base - 32) / 9;
        printf("%3d\t%3d\n",base,cel);
        if(base == 1){
            base = step;
        }else{
            base = base + step;
        }
    }
}
