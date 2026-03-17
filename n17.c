#include <stdio.h>
 
int main(){
    return 0;
}

int strcmp(char *p, char *t){
    for(;*p == *t; p++, t++){
        if(*p == EOF){
            return 0;
        }
    }

    return *p - *t;

}
