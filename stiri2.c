#include <stdio.h>

int main(){
    int c;
    c = getchar() != EOF;
    printf("c = %d\n",c);
    c = getchar() != EOF;
    printf("c = %d\n",c);
    c = getchar() != EOF;
    printf("c = %d\n",c);
    return 0;
}
