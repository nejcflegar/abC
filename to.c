#include <stdio.h>

void izpis(int, int);

int main(){
    int curr, prev1, prev2;
    curr, prev1, prev2 = 0;


    while((curr = getchar()) != EOF){

        //printf("prev1 === %c  prev2 === %c   curr === %c \n",prev1,prev2,curr);

        if(prev1 != 0 && prev2 != 0){
            izpis(prev1,prev2);
            prev1 = 0; prev2 = 0;
            continue;
        }

        if(curr == '-'){continue;}
        if(prev1 == 0){
            prev1 = curr;
            continue;
        }
        if(prev2 == 0){
            prev2 = curr;
            continue;
        }
    }

    putchar('\n');
}

void izpis(int a, int b){
    while(a <= b){
        putchar(a++);
    }
}
