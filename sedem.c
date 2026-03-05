#include <stdio.h>

int main(){
    int other,i ,curr , space;

    int array[10];
    space = 0;
    other = 0;

    for(i = 0; i < 10; i++){
        array[i] = 0;
    }

    while((curr = getchar()) != EOF){
        if('0' <= curr && curr <= '9'){
            array[curr - '0']++;
            continue;
        }

        if(curr == ' ' || curr == '\t' || curr == '\n'){
            space++;
            continue;
        }
        other++;
    }

    printf("other: %d\n",other);
    printf("space: %d\n",space);

    for(i = 0; i < 10; i++){
        printf("number %d: %d\n",i,array[i]);
    }
}
