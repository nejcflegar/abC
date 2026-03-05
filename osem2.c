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
    int count[27];
    int curr;
    int i;
    

    for(i = 0; i < 27; i++){
        count[i] = 0;
    }

    while((curr = getchar()) != EOF){
        if('a' <= curr || 'z' >= curr){
            count[curr-'a']++;
            continue;
        }
    }


    for(i = 0; i < 27; i++){
        histogram(i,count[i]);
    }

    return 0;
}

