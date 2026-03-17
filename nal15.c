#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
 
int getint(int*);

int ind = 0;

int main(){
    int curr = 10;
    while(getint(&curr) != -1){
        printf("%d\n",curr);
    }
    printf("%d\n",curr);
    return 0;
}

int getint(int* ptr){
    int curr, cifra;
    extern int ind, buffer[];
    bool st = true;
    cifra = 0;


    while((curr = getchar()) != EOF && curr != ' '){
        if(isdigit(curr)){
            cifra = cifra * 10 + (curr -'0');
        }

        if(isalpha(curr)){
            st = false;
        }

    }

    if(curr == EOF){
        if(st){
            *ptr = cifra;
        }else{
        *ptr = 0;
        }
        return -1;
    }

    if(st){
        *ptr = cifra;
        return 1;
    }else{
        *ptr = 0;
        return 0;
    }

}
