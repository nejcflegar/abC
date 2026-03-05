#include <stdio.h> 

#define IN 1
#define OUT 0


int main(){
    int state, count,curr;
    state = 0;
    count = 0;

    while((curr = getchar()) != EOF){
        if(curr == ' ' || curr == '\n' || curr == '\t'){
            if(state != OUT){
                count++;
                state = OUT;
            }
        }else{
            state = IN;
        }
    }

    printf("%d\n",count);

    return 0;
}
