#include <stdio.h>
#include <ctype.h>
 
int getint(int*);
void ungetch(int);


int ind = 0;
int buffer[100];

int main(){
    int curr = 10;
    while(getint(&curr) != EOF){
        printf("%c",curr);
    }
    return 0;
}

int getint(int* ptr){
    int curr;
    extern int ind, buffer[];

    while((curr = getchar()) != EOF && curr != ' '){
        if(isdigit(curr)){

        }
        buffer[ind++] = curr;
    }

}
