#include <stdio.h>
#include <stdlib.h>
 

#define MAXLINE 100
#define MAXLENGTH 100

char *ptrArray[MAXLINE];
int readLines();
void putToStorage(int,char*,char[]);
void sorter(int);
void comp(int,int);
int sizer(char*);

int main(){
    int lines = readLines();
    sorter(lines);
    for(int i = 0; i < lines; i++){
        printf("%s\n", ptrArray[i]);
    }
    return 0;
}

int readLines(){
    int lines,length = 0;
    int curr;
    char line[MAXLENGTH];

    while((curr = getchar()) != EOF){
        line[length] = curr;
        //printf("%c  %d  %d  %s\n",curr,length,lines,line);
        if(curr == '\n'){
            ptrArray[lines] = (char*)(malloc(length * sizeof(char)));
            putToStorage(length,ptrArray[lines],line);
            //printf("%s\n",ptrArray[lines]);
            lines++;
            length = 0;
        }else{
            length++;
        }
    }

    return lines;
}

void putToStorage(int len, char* ptr, char line[]){
    int i;
    for(i = 0; i < len; i++){
        ptr[i] = line[i];
    }
}

void sorter(int len){
    for(int i = 0; i < len; i++){
        for(int j = i; j < len; j++){
            if(i != j){
                comp(i,j);
            }
        }
    }
}

void comp(int i, int j){
    int s1 = sizer(ptrArray[i]);
    int s2 = sizer(ptrArray[j]);
    if(s1 <= s2){
        return;
    }
    if(s1 > s2){
        char *temp = ptrArray[i];
        ptrArray[i] = ptrArray[j];
        ptrArray[j] = temp;
    }
}

int sizer(char *ptr){
    int len;
    for(len = 0; ptr[len] != '\0'; len++);
    return len;
}
