#include <stdio.h>
#include <ctype.h>

char lower(char);

int main(){
    char a[] = "hejHOJ";
    for(int i = 0; a[i] != '\0'; i++){
        a[i] = lower(a[i]);
    }

    printf("%s\n", a);
}

char lower(char c){
    return (islower(c))? c : tolower(c);
}
