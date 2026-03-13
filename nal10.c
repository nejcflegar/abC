#include <stdio.h>

#define swap(t,x,y) t =x; x = y; y = t;
 
int main(){
    int x = 10;
    int y = 5;
    int t;

    swap(t,x,y);

    printf("%d  %d\n",x,y);
    return 0;
}
