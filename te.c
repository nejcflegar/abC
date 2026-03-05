#include <stdio.h>
#include <stdbool.h>


void squeeze(char[],char[]);

int main(){
    char first[] = "biologijA";
    char second[] = "astronmija";

    squeeze(first, second);
    printf("%s\n",first);
}

void squeeze(char s1[],char s2[]){
    int ind = 0;
    bool niNot = true;

    for(int i = 0; s1[i] != '\0'; i++){
        niNot = true;
        for(int j = 0; s2[j] != '\0'; j++){
            if(s1[i] == s2[j]){
                //printf("%c   %c NIVREDI\n",s1[i],s2[j]);
                niNot = false;
                break;
            }
            //printf("%c   %c VREDI\n",s1[i],s2[j]);
        }

        if(niNot){
            s1[ind++] = s1[i];
        }
    }

    s1[ind] = '\0';
}
