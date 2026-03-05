#include <stdio.h>
#include <stdbool.h>

#define COLUMN 20
bool end = true;

void readCol(char[],int);
int blankFinder(char[]);
int outputer(char[],int);

int main(){
    extern bool end;
    char array[COLUMN];
    int blankIndex = -1;
    int prev = 0;

    while(end){
        readCol(array, prev);
        blankIndex = blankFinder(array);
        prev = outputer(array, blankIndex);
        //printf("%s  |  %d   |   %d\n",array,blankIndex, prev);
    }
}

void readCol(char t[], int prev){
    extern bool end;
    int curr;

    for(int i = prev; i < COLUMN; i++){
        curr = getchar();
        if(curr == EOF){
            end = false;
            return;
        }
        t[i] = curr;
    }
}

int blankFinder(char t[]){
    int max = -1;

    for(int i = 0; i < COLUMN; i++){
        if(t[i] == ' '){
            max = i;
        }
    }

    return (max != -1)? max : COLUMN;
}

int outputer(char t[], int blank){
    int razlika = COLUMN - blank - 1;

    for(int i = 0; i <= blank; i++){
        putchar(t[i]);
    }

    putchar('\n');
    blank++;

    for(int i = 0; i < COLUMN; i++){
        if(blank < COLUMN){
            t[i] = t[blank++];
        }else{
            t[i] = '\0';
        }
    }

    return razlika; 
}
















