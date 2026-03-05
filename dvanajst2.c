#include <stdio.h>
#include <stdbool.h>

#define COLUMN 11

bool end = false;

int output(char[],int);
int read(char[],int);

int main(){
    char array[COLUMN];
    int index = 0;
    int blank = -1;
    extern bool end;

    while(!end){
        blank = read(array, index);
        index = output(array, blank);
    }
}


int output(char t[],int blank){
    for(int i = 0; i < blank; i++){
        printf("rn:     %d   %d\n",t[i]-'0',blank);
        putchar(t[i]);
    }
    putchar('\n');
    printf("<---blank:   %d   indeks:   %d\n",blank,COLUMN - blank -1);
    for(int i = 0; i < COLUMN - blank; i++){
        t[i] = 1 + blank + i;
    }

    return COLUMN - blank - 1;
}

int read(char t[], int index){
    int blank = -1;
    int curr;
    extern bool end;

    while(index < COLUMN && (curr = getchar()) != EOF){
        if(curr == ' '){
            blank = index;
            t[index] = curr;
        }else{
            t[index] = curr;
        }
        printf("index: %d   blank:  %d   char: %c\n",index,blank,t[index]);
        index++;
    }

    if(curr == EOF){
        blank = index;
        end = true;
        //printf("hmmM\n");
    }
    return blank;
}
