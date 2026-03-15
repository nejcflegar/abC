#include <stdio.h>
 
int strl(char*);

int main(){
    char s[] = "1234";
    int a = strl(s);
    printf("%d\n",a);
    return 0;
}

int strl(char *ptr){
    int n;
    for(n = 0; *(ptr+n) != '\0'; n++);
    return n;
}
