#include <stdio.h>
 
int main(){
    char a[] = "new";
    for(int i = 0; a[i] != '\0'; i++){
        printf("%d\n",i);
    }
    return 0;
}
