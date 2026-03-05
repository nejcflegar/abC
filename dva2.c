#include <stdio.h>


int main(){    //   C = (5/9)(F -32)
    float base = 1;
    float step = 20;
    float up = 300;
    float cel;

    while(base <= up){
        cel = 5 * (base - 32) / 9;
        printf("%3.0f\t%6.1f\n",base,cel);
        if(base == 1){
            base = step;
        }else{
            base = base + step;
        }
    }
}
