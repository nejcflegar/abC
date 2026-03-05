#include <stdio.h>


void histogram(int st, int n){

    printf("\n");

    int i;
    for(i = 0; i < n; i++){
        printf("-");
    }

    printf("\n");

    for(i = 0; i < n; i++){
        printf(" ");
    }

    printf("| %d besed dolzine: %d\n",n,st);

    for(i = 0; i < n; i++){
        printf("-");
    }

    printf("\n");
}



int main(){
    int count[10];
    int curr;
    int dolzina = 0;
    int i;
    

    for(i = 0; i < 10; i++){
        count[i] = 0;
    }

    while((curr = getchar()) != EOF){
        if('\n' == curr || ' ' == curr){
            count[dolzina]++;
            dolzina = 0;
            continue;
        }
        dolzina++;
    }


    for(i = 1; i < 10; i++){
        histogram(i,count[i]);
    }

    return 0;
}

