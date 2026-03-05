#include <stdio.h>

int main(){
    int c;
    int count = 0;
    while((c = getchar()) != EOF){
        if(c == ' '){
            count++;
            continue;
        }
        if(c == '\t'){
            count++;
            continue;
        }
        if(c == '\n'){
            count++;
            continue;
        }
    }

    printf("%d\n",count);
    return 0;
}
