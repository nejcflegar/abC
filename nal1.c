#include <stdio.h>
 
#define MAXLINE 1000

void getLine(char[]);
int find(char[],char[]);
void clear(char[]);
int length = -1;

int main(){
    extern int length;
    char line[MAXLINE];
    char str[] = "abc";
    while(length != 0){
        getLine(line);
        printf("%d\n",find(line, str));
        clear(line);
        //printf("str = %s    len = %d \n",line,length);
    }
    return 0;
}

void getLine(char a[]){
    extern int length;
    int curr;
    length = 0;
    while((curr = getchar()) != '\n'){
        a[length++] = curr;
    }
}

int find(char s1[], char s2[]){
    extern int length;
    int prikaz = -1;
    int pot = -1;

    for(int i = 0; i < length; i++){
        //printf("uzuni: %c  |  %c\n",s1[i],s2[0]);
        if(s1[i] == s2[0]){
            pot = i;
            //printf("are u in?\n");
            for(int j = 1; s2[j] != '\0'; j++){
                //printf("notri!: %c  |  %c\n",s1[i+j],s2[j]);
                if(s1[i+j] != s2[j]){
                    pot = -1;
                }
            }
            if(pot != -1){
                prikaz = pot;
            }
        }
    }

    return prikaz;
}

void clear(char c[]){
    extern int length;
    for(int i = 0; i < length; i++){
        c[i] = -1;
    }
}








