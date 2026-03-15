#include <stdio.h>
 
int main(){
    int a[] = {0,1,2,3,4,5,6,7,8,9};

    for(int i = 0; i < 10; i++){
        printf("%d   %p\n",*(a+i),a+i);
    }



    return 0;
}
