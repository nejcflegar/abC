#include <stdio.h>

int main(){
    float start = 1;
    float up = 300;
    float cel;
    float step = 20;

    printf("Fer\tCel\n");
    while(start <= up){
        cel = (9.0/5.0)*start + 32.0; 
        printf("%3.0f\t%6.1f\n",start,cel);
        if(start == 1){
            start = step;
        }else{
            start = start + step;
        }
    }

    return 0;
}
