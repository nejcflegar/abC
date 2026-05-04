#include <stdio.h>
#include <stdlib.h>


int main(){
    char** a = (char**)malloc(sizeof(char*)*10);
    a[0] = (char*)malloc(sizeof(char)*10);

    a[0][1] = 'n';
    a[0][2] = 'a';
    a[0][3] = 'n';
    a[0][4] = '\0';

    //a[0][1] = 'c';

    printf("%s\n",a[0]);
}
